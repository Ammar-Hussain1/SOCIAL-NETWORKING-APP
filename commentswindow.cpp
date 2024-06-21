#include "commentswindow.h"
#include "ui_commentswindow.h"

CommentsWindow::CommentsWindow(char parentCh,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CommentsWindow)
{
    ui->setupUi(this);
    this->parentCh = parentCh;
    this->pagePtr = 0;
    this->friendPtr = 0;
    this->currentUser = 0;
}

CommentsWindow::~CommentsWindow()
{
    delete ui;
}

void CommentsWindow::setUser(User *& user,int indexOfPost)
{
    this->currentUser = user;
    this->indexOfPost = indexOfPost;
}

void CommentsWindow::on_pushButton_Profile_clicked()
{
    if(parentCh == 'P')
    {
        emit backToProfile();
    }
    if(parentCh == 'p')
    {
        emit backToPage();
    }
    if(parentCh == 'f'|| parentCh == 'F')
    {
        emit backToFriendsAndFollowedPages();
    }
    if(parentCh == 'H'|| parentCh == 'h')
    {
        emit backToHome();
    }
}

void CommentsWindow::setFriendUser(User*& temp,int indexOfPost)
{
    this->friendPtr = temp;
    this->indexOfPost = indexOfPost;
}

void CommentsWindow::setPagePtr(Page*& temp,int indexOfPost)
{
    this->pagePtr = temp;
    this->indexOfPost = indexOfPost;
}

void CommentsWindow::setPage()
{
    if(parentCh == 'P')
    {
        if(this->currentUser->ListOfPostsShared[indexOfPost]->commentsOnPost)
        {
            for(int i = 0;i<this->currentUser->ListOfPostsShared[indexOfPost]->noOfComments;i++)
            {
                ui->listWidget->addItem(QString::fromStdString(this->currentUser->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->displayComment()));
            }
        }
    }
    if(parentCh == 'p')
    {
        if(this->currentUser->pageOwned->ListOfPostsShared[indexOfPost]->commentsOnPost)
        {
            for(int i = 0;i<this->currentUser->pageOwned->ListOfPostsShared[indexOfPost]->noOfComments;i++)
            {
                ui->listWidget->addItem(QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->displayComment()));
            }
        }
    }
    if(parentCh == 'F' || parentCh == 'H')
    {
        if(this->friendPtr->ListOfPostsShared[indexOfPost]->commentsOnPost)
        {
            for(int i = 0;i<this->friendPtr->ListOfPostsShared[indexOfPost]->noOfComments;i++)
            {
                ui->listWidget->addItem(QString::fromStdString(this->friendPtr->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->displayComment()));
            }
        }
    }
    if(parentCh == 'f' || parentCh == 'h')
    {
        if(this->pagePtr->ListOfPostsShared[indexOfPost]->commentsOnPost)
        {
            for(int i = 0;i<this->pagePtr->ListOfPostsShared[indexOfPost]->noOfComments;i++)
            {
                ui->listWidget->addItem(QString::fromStdString(this->pagePtr->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->displayComment()));
            }
        }
    }
}

void CommentsWindow::on_pushButton_AddComment_clicked()
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
        auto time = chrono::system_clock::now();
        time_t currentTime = chrono::system_clock::to_time_t(time);
        tm * localTime = localtime(&currentTime);
        Date d(localTime->tm_mday,localTime->tm_mon+1,localTime->tm_year+1900,localTime->tm_hour,localTime->tm_min);
        if(parentCh == 'P')
        {
            this->currentUser->ListOfPostsShared[indexOfPost]->commentOnPost(this->currentUser->getUserId(),content.toStdString(),d);
            ui->listWidget->addItem(QString::fromStdString(this->currentUser->ListOfPostsShared[indexOfPost]->commentsOnPost[this->currentUser->ListOfPostsShared[indexOfPost]->noOfComments-1]->displayComment()));
        }
        if(parentCh == 'p')
        {
            this->currentUser->pageOwned->ListOfPostsShared[indexOfPost]->commentOnPost(this->currentUser->getUserId(),content.toStdString(),d);
            ui->listWidget->addItem(QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[indexOfPost]->commentsOnPost[this->currentUser->pageOwned->ListOfPostsShared[indexOfPost]->noOfComments-1]->displayComment()));
        }
        if(parentCh == 'F' || parentCh == 'H')
        {
            this->friendPtr->ListOfPostsShared[indexOfPost]->commentOnPost(this->currentUser->getUserId(),content.toStdString(),d);
            ui->listWidget->addItem(QString::fromStdString(this->friendPtr->ListOfPostsShared[indexOfPost]->commentsOnPost[this->friendPtr->ListOfPostsShared[indexOfPost]->noOfComments-1]->displayComment()));
        }
        if(parentCh == 'f' || parentCh == 'h')
        {
            this->pagePtr->ListOfPostsShared[indexOfPost]->commentOnPost(this->currentUser->getUserId(),content.toStdString(),d);
            ui->listWidget->addItem(QString::fromStdString(this->pagePtr->ListOfPostsShared[indexOfPost]->commentsOnPost[this->pagePtr->ListOfPostsShared[indexOfPost]->noOfComments-1]->displayComment()));
        }
        ui->lineEdit->clear();

        QDir dir("Comments");
        if(!dir.exists())
            dir.mkdir(".");
        if(dir.exists())
        {
            if(parentCh == 'P')
            {
                QFile fileWrite("Comments/"+QString::fromStdString(this->currentUser->ListOfPostsShared[indexOfPost]->getPostId())+".txt");
                fileWrite.open(QIODevice::WriteOnly);
                QTextStream stream(&fileWrite);
                stream<<QString::number(this->currentUser->ListOfPostsShared[indexOfPost]->noOfComments);
                stream<<"\n";
                for(int i = 0;i<this->currentUser->ListOfPostsShared[indexOfPost]->noOfComments;i++)
                {
                    stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->getAuthor())<<"\n";
                    stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->getContent())<<"\n";
                    stream<<QString::fromStdString(this->currentUser->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->getDate().getDate())<<"\n";
                }
                fileWrite.close();
            }
            if(parentCh == 'p')
            {
                QFile fileWrite("Comments/"+QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[indexOfPost]->getPostId())+".txt");
                fileWrite.open(QIODevice::WriteOnly);
                QTextStream stream(&fileWrite);
                stream<<QString::number(this->currentUser->pageOwned->ListOfPostsShared[indexOfPost]->noOfComments);
                stream<<"\n";
                for(int i = 0;i<this->currentUser->pageOwned->ListOfPostsShared[indexOfPost]->noOfComments;i++)
                {
                    stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->getAuthor())<<"\n";
                    stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->getContent())<<"\n";
                    stream<<QString::fromStdString(this->currentUser->pageOwned->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->getDate().getDate())<<"\n";
                }
                fileWrite.close();
            }
            if(parentCh == 'F' || parentCh == 'H')
            {
                QFile fileWrite("Comments/"+QString::fromStdString(this->friendPtr->ListOfPostsShared[indexOfPost]->getPostId())+".txt");
                fileWrite.open(QIODevice::WriteOnly);
                QTextStream stream(&fileWrite);
                stream<<QString::number(this->friendPtr->ListOfPostsShared[indexOfPost]->noOfComments);
                stream<<"\n";
                for(int i = 0;i<this->friendPtr->ListOfPostsShared[indexOfPost]->noOfComments;i++)
                {
                    stream<<QString::fromStdString(this->friendPtr->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->getAuthor())<<"\n";
                    stream<<QString::fromStdString(this->friendPtr->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->getContent())<<"\n";
                    stream<<QString::fromStdString(this->friendPtr->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->getDate().getDate())<<"\n";
                }
                fileWrite.close();
            }
            if(parentCh == 'f' || parentCh == 'h')
            {
                QFile fileWrite("Comments/"+QString::fromStdString(this->pagePtr->ListOfPostsShared[indexOfPost]->getPostId())+".txt");
                fileWrite.open(QIODevice::WriteOnly);
                QTextStream stream(&fileWrite);
                stream<<QString::number(this->pagePtr->ListOfPostsShared[indexOfPost]->noOfComments);
                stream<<"\n";
                for(int i = 0;i<this->pagePtr->ListOfPostsShared[indexOfPost]->noOfComments;i++)
                {
                    stream<<QString::fromStdString(this->pagePtr->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->getAuthor())<<"\n";
                    stream<<QString::fromStdString(this->pagePtr->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->getContent())<<"\n";
                    stream<<QString::fromStdString(this->pagePtr->ListOfPostsShared[indexOfPost]->commentsOnPost[i]->getDate().getDate())<<"\n";
                }
                fileWrite.close();
            }
        }
    }
}
