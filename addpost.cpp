#include "addpost.h"
#include "ui_addpost.h"

AddPost::AddPost(char parentCh,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddPost)
{
    ui->setupUi(this);
    this->parentCh = parentCh;
}

AddPost::~AddPost()
{
    delete ui;
}

void AddPost::on_pushButton_Profile_clicked()
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

void AddPost::setUser(User *& temp)
{
    this->currentUser = temp;
    if(parentCh == 'P')
    {
        ui->pushButton_Profile->setText("PROFILE");
    }

    if(parentCh == 'p')
    {
        ui->pushButton_Profile->setText("PAGE");
    }
}

void AddPost::on_pushButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("ADD POST");
    msgBox.setText("PLEASE ENTER SOMETHING IN THE LINE EDIT!");
    msgBox.setIcon(QMessageBox::Information);
    QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
    msgBox.setStyleSheet(customStyle);
    QString content = ui->lineEdit->text();
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
        Post * p = new Post();
        p->setSharedDate(d);
        p->setDescription(ui->lineEdit->text().toStdString());

        if(parentCh == 'P')
        {
            p->setPostId(currentUser->getUserId()+to_string(currentUser->numberOfPosts));
            p->setDisplayName(this->currentUser->getUserName());
            this->currentUser->AddPost(p);
        }

        if(parentCh == 'p')
        {
            p->setPostId(currentUser->pageOwned->getPageId()+to_string(currentUser->pageOwned->numberOfPosts));
            p->setDisplayName(currentUser->pageOwned->getTitle());
            this->currentUser->pageOwned->AddPost(p);
        }
        ui->lineEdit->clear();

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
