#include "likeswindow.h"
#include "ui_likeswindow.h"

LikesWindow::LikesWindow(char parentCh,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LikesWindow)
{
    ui->setupUi(this);
    this->parentCh = parentCh;
}

LikesWindow::~LikesWindow()
{
    delete ui;
}

void LikesWindow::setUpThePage()
{
    if(parentCh == 'P')
    {
        ui->pushButton_goBack->setText("PROFILE");
        if(this->userPtr->ListOfPostsShared[indexOfPost]->likesList)
        {
            ui->listWidget->clear();
            for(int i = 0;i<this->userPtr->ListOfPostsShared[indexOfPost]->noOfLikes;i++)
            {
                ui->listWidget->addItem(QString::fromStdString(*this->userPtr->ListOfPostsShared[indexOfPost]->likesList[i]));
            }
            if(this->userPtr->ListOfPostsShared[indexOfPost]->isLiked(this->userPtr->getUserId()))
            {
                ui->label_status->setText("YOU HAVE ALREADY LIKED THIS POST!");
            }
            else
            {
                ui->label_status->setText("PRESS LIKE BUTTON TO LIKE THIS POST!");
            }
        }
    }
    if(parentCh == 'p')
    {
        ui->pushButton_goBack->setText("PAGE");
        if(this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->likesList)
        {
            ui->listWidget->clear();
            for(int i = 0;i<this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->noOfLikes;i++)
            {
                ui->listWidget->addItem(QString::fromStdString(*this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->likesList[i]));
            }
        }
        if(this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->isLiked(this->userPtr->pageOwned->getPageId()))
        {
            ui->label_status->setText("YOU HAVE ALREADY LIKED THIS POST!");
        }
        else
        {
            ui->label_status->setText("PRESS LIKE BUTTON TO LIKE THIS POST!");
        }
    }
    if(parentCh == 'F' || parentCh == 'H')
    {
        ui->pushButton_goBack->setText("PROFILE");
        if(this->friendPtr->ListOfPostsShared[indexOfPost]->likesList)
        {
            ui->listWidget->clear();
            for(int i = 0;i<this->friendPtr->ListOfPostsShared[indexOfPost]->noOfLikes;i++)
            {
                ui->listWidget->addItem(QString::fromStdString(*this->friendPtr->ListOfPostsShared[indexOfPost]->likesList[i]));
            }
            if(this->friendPtr->ListOfPostsShared[indexOfPost]->isLiked(this->friendPtr->getUserId()))
            {
                ui->label_status->setText("YOU HAVE ALREADY LIKED THIS POST!");
            }
            else
            {
                ui->label_status->setText("PRESS LIKE BUTTON TO LIKE THIS POST!");
            }
        }
    }
    if(parentCh == 'f' || parentCh == 'h')
    {
        ui->pushButton_goBack->setText("PAGE");
        if(this->pagePtr->ListOfPostsShared[indexOfPost]->likesList)
        {
            ui->listWidget->clear();
            for(int i = 0;i<this->pagePtr->ListOfPostsShared[indexOfPost]->noOfLikes;i++)
            {
                ui->listWidget->addItem(QString::fromStdString(*this->pagePtr->ListOfPostsShared[indexOfPost]->likesList[i]));
            }
        }
        if(this->pagePtr->ListOfPostsShared[indexOfPost]->isLiked(this->pagePtr->getPageId()))
        {
            ui->label_status->setText("YOU HAVE ALREADY LIKED THIS POST!");
        }
        else
        {
            ui->label_status->setText("PRESS LIKE BUTTON TO LIKE THIS POST!");
        }
    }
}

void LikesWindow::setUser(User*& temp,int indexOfPost)
{
    this->userPtr = temp;
    this->indexOfPost = indexOfPost;
}

void LikesWindow::setPage(Page *& temp,int indexOfPost)
{
    this->pagePtr = temp;
    this->indexOfPost = indexOfPost;
}

void LikesWindow::on_pushButton_like_clicked()
{
    if(parentCh == 'p')
    {
        if(!this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->isLiked(this->userPtr->pageOwned->getPageId()))
        {
            this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->likePost(this->userPtr->pageOwned);
            ui->label_status->setText("YOU HAVE ALREADY LIKED THIS POST!");
            ui->pushButton_like->setText("UNLIKE THIS POST");
        }
        else
        {
            this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->removeLikePost(this->userPtr->pageOwned);
            ui->label_status->setText("PRESS LIKE BUTTON TO LIKE THIS POST!");
            ui->pushButton_like->setText("LIKE THIS POST");
        }
    }
    if(parentCh == 'P')
    {
        if(!this->userPtr->ListOfPostsShared[indexOfPost]->isLiked(this->userPtr->getUserId()))
        {
            this->userPtr->ListOfPostsShared[indexOfPost]->likePost(this->userPtr);
            ui->label_status->setText("YOU HAVE ALREADY LIKED THIS POST!");
            ui->pushButton_like->setText("UNLIKE THIS POST");
        }
        else
        {
            this->userPtr->ListOfPostsShared[indexOfPost]->removeLikePost(this->userPtr);
            ui->label_status->setText("PRESS LIKE BUTTON TO LIKE THIS POST!");
            ui->pushButton_like->setText("LIKE THIS POST");
        }
    }
    if(parentCh == 'f' || parentCh == 'h')
    {
        if(!this->pagePtr->ListOfPostsShared[indexOfPost]->isLiked(this->userPtr->getUserId()))
        {
            this->pagePtr->ListOfPostsShared[indexOfPost]->likePost(this->userPtr);
            ui->label_status->setText("YOU HAVE ALREADY LIKED THIS POST!");
            ui->pushButton_like->setText("UNLIKE THIS POST");
        }
        else
        {
            this->pagePtr->ListOfPostsShared[indexOfPost]->removeLikePost(this->userPtr);
            ui->label_status->setText("PRESS LIKE BUTTON TO LIKE THIS POST!");
            ui->pushButton_like->setText("LIKE THIS POST");
        }
    }
    if(parentCh == 'F' || parentCh == 'H')
    {
        if(!this->friendPtr->ListOfPostsShared[indexOfPost]->isLiked(this->userPtr->getUserId()))
        {
            this->friendPtr->ListOfPostsShared[indexOfPost]->likePost(this->userPtr);
            ui->label_status->setText("YOU HAVE ALREADY LIKED THIS POST!");
            ui->pushButton_like->setText("UNLIKE THIS POST");
        }
        else
        {
            this->friendPtr->ListOfPostsShared[indexOfPost]->removeLikePost(this->userPtr);
            ui->label_status->setText("PRESS LIKE BUTTON TO LIKE THIS POST!");
            ui->pushButton_like->setText("LIKE THIS POST");
        }
    }
    this->setUpThePage();
    QDir dir("Likes");
    if(!dir.exists())
        dir.mkdir(".");
    if(dir.exists())
    {
        if(parentCh == 'P')
        {
            QFile fileWrite("Likes/"+QString::fromStdString(this->userPtr->ListOfPostsShared[indexOfPost]->getPostId())+".txt");
                fileWrite.open(QIODevice::WriteOnly);
                QTextStream stream(&fileWrite);
                stream<<QString::number(this->userPtr->ListOfPostsShared[indexOfPost]->noOfLikes);
                stream<<"\n";
                for(int i = 0;i<this->userPtr->ListOfPostsShared[indexOfPost]->noOfLikes;i++)
                {
                    stream<<QString::fromStdString(*this->userPtr->ListOfPostsShared[indexOfPost]->likesList[i]);
                    stream<<"\n";
                }
                fileWrite.close();
                if(fileWrite.exists()&&this->userPtr->ListOfPostsShared[indexOfPost]->noOfLikes == 0)
                {
                    QFile::remove("Likes/"+QString::fromStdString(this->userPtr->ListOfPostsShared[indexOfPost]->getPostId())+".txt");
                }
        }
        if(parentCh == 'p')
        {
            QFile fileWrite("Likes/"+QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->getPostId())+".txt");
            fileWrite.open(QIODevice::WriteOnly);
            QTextStream stream(&fileWrite);
            stream<<QString::number(this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->noOfLikes);
            stream<<"\n";
            for(int i = 0;i<this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->noOfLikes;i++)
            {
                stream<<QString::fromStdString(*this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->likesList[i]);
                stream<<"\n";
            }
            fileWrite.close();
            if(fileWrite.exists()&&this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->noOfLikes == 0)
            {
                QFile::remove("Likes/"+QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->getPostId())+".txt");
            }
        }
        if(parentCh == 'F' || parentCh == 'H')
        {
            QFile fileWrite("Likes/"+QString::fromStdString(this->friendPtr->ListOfPostsShared[indexOfPost]->getPostId())+".txt");
            fileWrite.open(QIODevice::WriteOnly);
            QTextStream stream(&fileWrite);
            stream<<QString::number(this->friendPtr->ListOfPostsShared[indexOfPost]->noOfLikes);
            stream<<"\n";
            for(int i = 0;i<this->friendPtr->ListOfPostsShared[indexOfPost]->noOfLikes;i++)
            {
                stream<<QString::fromStdString(*this->friendPtr->ListOfPostsShared[indexOfPost]->likesList[i]);
                stream<<"\n";
            }
            fileWrite.close();
            if(fileWrite.exists()&&this->friendPtr->ListOfPostsShared[indexOfPost]->noOfLikes == 0)
            {
                QFile::remove("Likes/"+QString::fromStdString(this->friendPtr->ListOfPostsShared[indexOfPost]->getPostId())+".txt");
            }
        }
        if(parentCh == 'f' || parentCh == 'h')
        {
            QFile fileWrite("Likes/"+QString::fromStdString(this->pagePtr->ListOfPostsShared[indexOfPost]->getPostId())+".txt");
            fileWrite.open(QIODevice::WriteOnly);
            QTextStream stream(&fileWrite);
            stream<<QString::number(this->pagePtr->ListOfPostsShared[indexOfPost]->noOfLikes);
            stream<<"\n";
            for(int i = 0;i<this->pagePtr->ListOfPostsShared[indexOfPost]->noOfLikes;i++)
            {
                stream<<QString::fromStdString(*this->pagePtr->ListOfPostsShared[indexOfPost]->likesList[i]);
                stream<<"\n";
            }
            fileWrite.close();
            if(fileWrite.exists()&&this->pagePtr->ListOfPostsShared[indexOfPost]->noOfLikes == 0)
            {
                QFile::remove("Likes/"+QString::fromStdString(this->pagePtr->ListOfPostsShared[indexOfPost]->getPostId())+".txt");
            }
        }
    }
}

void LikesWindow::setFriendUser(User*& temp,int indexOfPost)
{
    this->friendPtr = temp;
    this->indexOfPost = indexOfPost;
}

void LikesWindow::on_pushButton_goBack_clicked()
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
        emit backToFriendsAndFollowedPagesWindow();
    }
    if(parentCh == 'H'|| parentCh == 'h')
    {
        emit backToHome();
    }
}

