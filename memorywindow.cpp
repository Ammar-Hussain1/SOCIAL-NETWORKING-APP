#include "memorywindow.h"
#include "ui_memorywindow.h"

MemoryWindow::MemoryWindow(char parentCh,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MemoryWindow)
{
    ui->setupUi(this);
    this->parentCh = parentCh;
}

MemoryWindow::~MemoryWindow()
{
    delete ui;
}

void MemoryWindow::on_pushButton_goBack_clicked()
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

void MemoryWindow::setUser(User*&temp,int indexOfPost)
{
    this->userPtr = temp;
    this->indexOfPost = indexOfPost;
}

void MemoryWindow::setUpThePage()
{

    if(parentCh == 'P')
    {
        ui->label_post->setText(QString::number(this->indexOfPost+1)+ " ) "+QString::fromStdString(this->userPtr->getUserName()+this->userPtr->ListOfPostsShared[this->indexOfPost]->getPost()));
    }
    if(parentCh == 'p')
    {
        ui->label_post->setText(QString::number(this->indexOfPost+1)+ " ) "+QString::fromStdString(this->userPtr->pageOwned->getPageId()+this->userPtr->pageOwned->ListOfPostsShared[this->indexOfPost]->getPost()));
    }

    if(parentCh == 'P')
    {
        ui->pushButton_goBack->setText("PROFILE");
    }
    if(parentCh == 'p')
    {
        ui->pushButton_goBack->setText("PAGE");
    }
}

void MemoryWindow::on_pushButton_shareMemory_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("COMMENTS");
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
        newMemoryPtr = new Memory();
        auto time = chrono::system_clock::now();
        time_t currentTime = chrono::system_clock::to_time_t(time);
        tm * localTime = localtime(&currentTime);
        Date d(localTime->tm_mday,localTime->tm_mon+1,localTime->tm_year+1900,localTime->tm_hour,localTime->tm_min);
        newMemoryPtr->setSharedDate(d);
        newMemoryPtr->setDescription(ui->lineEdit->text().toStdString());
        if(parentCh == 'P')
        {
            newMemoryPtr->setPostId(this->userPtr->getUserId()+to_string(this->userPtr->numberOfPosts));
            newMemoryPtr->setDisplayName(this->userPtr->getUserName());
            newMemoryPtr->setMemoryDescription(this->userPtr->ListOfPostsShared[indexOfPost]->getPost());
            this->userPtr->AddPost(newMemoryPtr);
        }
        if(parentCh == 'p')
        {
            newMemoryPtr->setPostId(this->userPtr->pageOwned->getPageId()+to_string(this->userPtr->pageOwned->numberOfPosts));
            newMemoryPtr->setDisplayName(this->userPtr->pageOwned->getTitle());
            newMemoryPtr->setMemoryDescription(this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->getPost());
            this->userPtr->pageOwned->AddPost(newMemoryPtr);
        }
        ui->lineEdit->clear();

        QDir dir("POSTS");
        if(!dir.exists())
            dir.mkdir(".");
        if(dir.exists())
        {
            if(parentCh == 'P')
            {
                QFile mainFile("POSTS/"+QString::fromStdString(this->userPtr->getUserId())+".txt");
                if(!mainFile.exists())
                {
                    mainFile.open(QIODevice::WriteOnly);
                    mainFile.close();
                }
                mainFile.open(QIODevice::WriteOnly);
                QTextStream tStream(&mainFile);
                tStream<<QString::number(this->userPtr->numberOfPosts)<<"\n";
                for(int i = 0;i<this->userPtr->numberOfPosts;i++)
                {
                    tStream<<QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getPostId())<<"\n";
                }
                mainFile.close();
                for(int i = 0;i<this->userPtr->numberOfPosts;i++)
                {
                    QFile fileWrite("POSTS/"+QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getPostId())+".txt");
                    if(!fileWrite.exists())
                    {
                        fileWrite.open(QIODevice::WriteOnly);
                        fileWrite.close();
                    }
                    fileWrite.open(QIODevice::WriteOnly);
                    QTextStream stream(&fileWrite);
                    Activity* activityPtr = dynamic_cast<Activity*>(this->userPtr->ListOfPostsShared[i]);
                    Memory* memoryPtr = dynamic_cast<Memory*>(this->userPtr->ListOfPostsShared[i]);
                    if(activityPtr)
                    {
                        stream<<"A\n";
                        stream<<QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getPostId())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getDisplayName())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getSharedDate().getDate())<<"\n";
                        stream<<QString::fromStdString(activityPtr->getType())<<"\n";
                        stream<<QString::fromStdString(activityPtr->getValue())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getDescription())<<"\n";
                    }
                    else if(memoryPtr)
                    {
                        stream<<"M\n";
                        stream<<QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getPostId())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getDisplayName())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getSharedDate().getDate())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getDescription())<<"\n";
                        stream<<1<<"\n";
                        stream<<QString::fromStdString(memoryPtr->getMemoryDescription())<<"\n";
                    }
                    else
                    {
                        stream<<"P\n";
                        stream<<QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getPostId())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getDisplayName())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getSharedDate().getDate())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->ListOfPostsShared[i]->getDescription())<<"\n";
                    }
                    fileWrite.close();
                }
            }
            if(parentCh == 'p')
            {
                QFile mainFile("POSTS/"+QString::fromStdString(this->userPtr->pageOwned->getPageId())+".txt");
                if(!mainFile.exists())
                {
                    mainFile.open(QIODevice::WriteOnly);
                    mainFile.close();
                }
                mainFile.open(QIODevice::WriteOnly);
                QTextStream tStream(&mainFile);
                tStream<<QString::number(this->userPtr->pageOwned->numberOfPosts)<<"\n";
                for(int i = 0;i<this->userPtr->pageOwned->numberOfPosts;i++)
                {
                    tStream<<QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getPostId())<<"\n";
                }
                mainFile.close();
                for(int i = 0;i<this->userPtr->pageOwned->numberOfPosts;i++)
                {
                    QFile fileWrite("POSTS/"+QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getPostId())+".txt");
                    if(!fileWrite.exists())
                    {
                        fileWrite.open(QIODevice::WriteOnly);
                        fileWrite.close();
                    }
                    fileWrite.open(QIODevice::WriteOnly);
                    QTextStream stream(&fileWrite);
                    Activity* activityPtr = dynamic_cast<Activity*>(this->userPtr->pageOwned->ListOfPostsShared[i]);
                    Memory* memoryPtr = dynamic_cast<Memory*>(this->userPtr->pageOwned->ListOfPostsShared[i]);
                    if(activityPtr)
                    {
                        stream<<"A\n";
                        stream<<QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getPostId())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getDisplayName())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getSharedDate().getDate())<<"\n";
                        stream<<QString::fromStdString(activityPtr->getType())<<"\n";
                        stream<<QString::fromStdString(activityPtr->getValue())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getDescription())<<"\n";
                    }
                    else if(memoryPtr)
                    {
                        stream<<"M\n";
                        stream<<QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getPostId())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getDisplayName())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getSharedDate().getDate())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getDescription())<<"\n";
                        stream<<1<<"\n";
                        stream<<QString::fromStdString(memoryPtr->getMemoryDescription())<<"\n";
                    }
                    else
                    {
                        stream<<"P\n";
                        stream<<QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getPostId())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getDisplayName())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getSharedDate().getDate())<<"\n";
                        stream<<QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[i]->getDescription())<<"\n";
                    }fileWrite.close();
                }
            }
        }
    }
}
