#include "addactivity.h"
#include "ui_addactivity.h"

#include <QDebug>
using namespace std;

AddActivity::AddActivity(char parentCh,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddActivity)
{
    ui->setupUi(this);
    this->parentCh = parentCh;
    setPage();
}

AddActivity::~AddActivity()
{
    delete ui;
}

void AddActivity::on_pushButton_profile_clicked()
{
    if(parentCh == 'P')
    {
        emit backToProfile();
    }
    if(parentCh == 'p')
    {
        emit backToPage();
    }
}


void AddActivity::setUser(User *&temp)
{
    this->currentUser = temp;
}

void AddActivity::setPage()
{
    A = new Activity();
    if(parentCh =='p')
    {
        ui->pushButton_profile->setText("PAGE");
    }
    if(parentCh =='P')
    {
        ui->pushButton_profile->setText("PROFILE");
    }
    for(int i = 0;i<4;i++)
    {
        ui->comboBox_type->addItem(QString::fromStdString(*A->totalTypes[i]));
    }
}

void AddActivity::on_comboBox_type_currentIndexChanged(int index)
{
    for(int i = 0;i<4;i++)
    {
        ui->comboBox_value->removeItem(0);
    }
    if(index == 0)
    {
        for(int i = 0;i<4;i++)
        {
            ui->comboBox_value->addItem(QString::fromStdString(*A->feeling[i]));
        }
    }
    else if(index == 1)
    {
        for(int i = 0;i<4;i++)
        {
            ui->comboBox_value->addItem(QString::fromStdString(*A->thinkingAbout[i]));
        }
    }
    else if(index == 2)
    {
        for(int i = 0;i<4;i++)
        {
            ui->comboBox_value->addItem(QString::fromStdString(*A->making[i]));
        }
    }
    else
    {
        for(int i = 0;i<4;i++)
        {
            ui->comboBox_value->addItem(QString::fromStdString(*A->celebrating[i]));
        }
    }
}


void AddActivity::on_pushButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("ADD ACTIVITY");
    msgBox.setText("PLEASE ENTER SOMETHING IN THE LINE EDIT!");
    msgBox.setIcon(QMessageBox::Information);
    QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
    msgBox.setStyleSheet(customStyle);
    QString content = ui->lineEdit_description->text();
    if(content == "")
    {
        msgBox.exec();
    }
    else
    {
        auto time = chrono::system_clock::now();
        time_t currentTime = chrono::system_clock::to_time_t(time);
        tm * localTime = localtime(&currentTime);
        Date d(localTime->tm_mday,localTime->tm_mon+1,localTime->tm_year+1900,localTime->tm_hour,localTime->tm_min);
        A->setSharedDate(d);
        A->setType(ui->comboBox_type->currentText().toStdString());
        A->setValue(ui->comboBox_value->currentText().toStdString());
        A->setDescription(ui->lineEdit_description->text().toStdString());
        if(parentCh == 'P')
        {
            A->setPostId(currentUser->getUserId()+to_string(currentUser->numberOfPosts));
            A->setDisplayName(currentUser->getUserName());
            this->currentUser->AddPost(A);
        }
        if(parentCh == 'p')
        {
            A->setPostId(currentUser->pageOwned->getPageId()+to_string(currentUser->pageOwned->numberOfPosts));
            A->setDisplayName(currentUser->pageOwned->getTitle());
            this->currentUser->pageOwned->AddPost(A);
        }
        ui->lineEdit_description->clear();

        QDir dir("POSTS");
        if(!dir.exists())
            dir.mkdir(".");
        if(dir.exists())
        {
            if(parentCh == 'P')
            {
                QFile mainFile("POSTS/"+QString::fromStdString(this->currentUser->getUserId())+".txt");
                if(!mainFile.exists())
                {
                    mainFile.open(QIODevice::WriteOnly);
                    mainFile.close();
                }
                mainFile.open(QIODevice::WriteOnly);
                QTextStream tStream(&mainFile);
                tStream<<QString::number(this->currentUser->numberOfPosts)<<"\n";
                for(int i = 0;i<this->currentUser->numberOfPosts;i++)
                {
                    tStream<<QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getPostId())<<"\n";
                }
                mainFile.close();
                for(int i = 0;i<this->currentUser->numberOfPosts;i++)
                {
                    QFile fileWrite("POSTS/"+QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getPostId())+".txt");
                    if(!fileWrite.exists())
                    {
                        fileWrite.open(QIODevice::WriteOnly);
                        fileWrite.close();
                    }
                    fileWrite.open(QIODevice::WriteOnly);
                    QTextStream stream(&fileWrite);
                    Activity* activityPtr = dynamic_cast<Activity*>(this->currentUser->ListOfPostsShared[i]);
                    Memory* memoryPtr = dynamic_cast<Memory*>(this->currentUser->ListOfPostsShared[i]);
                    if(activityPtr)
                    {
                        stream<<"A\n";
                        stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getPostId())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getDisplayName())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getSharedDate().getDate())<<"\n";
                        stream<<QString::fromStdString(activityPtr->getType())<<"\n";
                        stream<<QString::fromStdString(activityPtr->getValue())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getDescription())<<"\n";
                    }
                    else if(memoryPtr)
                    {
                        stream<<"M\n";
                        stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getPostId())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getDisplayName())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getSharedDate().getDate())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getDescription())<<"\n";
                        stream<<1<<"\n";
                        stream<<QString::fromStdString(memoryPtr->getMemoryDescription())<<"\n";
                    }
                    else
                    {
                        stream<<"P\n";
                        stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getPostId())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getDisplayName())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getSharedDate().getDate())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[i]->getDescription())<<"\n";
                    }
                    fileWrite.close();
                }
            }
            if(parentCh == 'p')
            {
                QFile mainFile("POSTS/"+QString::fromStdString(this->currentUser->pageOwned->getPageId())+".txt");
                if(!mainFile.exists())
                {
                    mainFile.open(QIODevice::WriteOnly);
                    mainFile.close();
                }
                mainFile.open(QIODevice::WriteOnly);
                QTextStream tStream(&mainFile);
                tStream<<QString::number(this->currentUser->pageOwned->numberOfPosts)<<"\n";
                for(int i = 0;i<this->currentUser->pageOwned->numberOfPosts;i++)
                {
                    tStream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getPostId())<<"\n";
                }
                mainFile.close();
                for(int i = 0;i<this->currentUser->pageOwned->numberOfPosts;i++)
                {
                    QFile fileWrite("POSTS/"+QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getPostId())+".txt");
                    if(!fileWrite.exists())
                    {
                        fileWrite.open(QIODevice::WriteOnly);
                        fileWrite.close();
                    }
                    fileWrite.open(QIODevice::WriteOnly);
                    QTextStream stream(&fileWrite);
                    Activity* activityPtr = dynamic_cast<Activity*>(this->currentUser->pageOwned->ListOfPostsShared[i]);
                    Memory* memoryPtr = dynamic_cast<Memory*>(this->currentUser->pageOwned->ListOfPostsShared[i]);
                    if(activityPtr)
                    {
                        stream<<"A\n";
                        stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getPostId())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getDisplayName())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getSharedDate().getDate())<<"\n";
                        stream<<QString::fromStdString(activityPtr->getType())<<"\n";
                        stream<<QString::fromStdString(activityPtr->getValue())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getDescription())<<"\n";
                    }
                    else if(memoryPtr)
                    {
                        stream<<"M\n";
                        stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getPostId())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getDisplayName())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getSharedDate().getDate())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getDescription())<<"\n";
                        stream<<1<<"\n";
                        stream<<QString::fromStdString(memoryPtr->getMemoryDescription())<<"\n";
                    }
                    else
                    {
                        stream<<"P\n";
                        stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getPostId())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getDisplayName())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getSharedDate().getDate())<<"\n";
                        stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[i]->getDescription())<<"\n";
                    }
                    fileWrite.close();
                }
            }
        }
    }

}
