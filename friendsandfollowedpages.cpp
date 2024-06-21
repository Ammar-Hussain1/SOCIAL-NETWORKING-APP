#include "friendsandfollowedpages.h"
#include "ui_friendsandfollowedpages.h"

FriendsAndFollowedPages::FriendsAndFollowedPages(char parentCh,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FriendsAndFollowedPages)
{
    ui->setupUi(this);
    this->parentCh = parentCh;
    indexOfPost = 0;
}

FriendsAndFollowedPages::~FriendsAndFollowedPages()
{
    delete ui;
}

void FriendsAndFollowedPages::on_pushButton_clicked()
{
    emit backToHome();
}

void FriendsAndFollowedPages::setCurrentUser(User *& temp)
{
    this->currentUser = temp;
}

void FriendsAndFollowedPages::setFriendUser(User *& temp)
{
    this->friendUser = temp;
}

void FriendsAndFollowedPages::setPage(Page *& temp)
{
    this->followedPage = temp;
}

void FriendsAndFollowedPages::setUpThepage()
{
    if(parentCh == 'f')
    {
        ui->label_heading->setText("PAGE");
        ui->label_type->setText("TITLE : ");
        if(this->followedPage)
        {
            if(this->currentUser->isFollowed(this->followedPage->getPageId()))
            {
                ui->pushButton_Follow->setText("UNFOLLOW");
                ui->label_status->setText("You are Following this Page");
            }
            else
            {
                ui->label_status->setText("Press Follow Button to Follow this Page");
                ui->pushButton_Follow->setText("FOLLOW");
            }
            ui->label_name->setText(QString::fromStdString(this->followedPage->getTitle()));
            if(this->followedPage->ListOfPostsShared)
            {
                ui->label_likesCount->setText("LIKES : "+QString::number(this->followedPage->ListOfPostsShared[indexOfPost]->noOfLikes));
                ui->label_likesCount->setText("COMMENTS : "+QString::number(this->followedPage->ListOfPostsShared[indexOfPost]->noOfComments));
            }
            ui->label_id->setText(" ID : "+QString::fromStdString(this->followedPage->getPageId()));
            if(this->followedPage->ListOfPostsShared)
            {
                ui->label_post->setText(QString::number(this->indexOfPost+1)+ " ) "+QString::fromStdString(this->followedPage->ListOfPostsShared[indexOfPost]->getPost()));
                ui->label_likesCount->setText("LIKES : "+QString::number(this->followedPage->ListOfPostsShared[this->indexOfPost]->noOfLikes));
                ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->followedPage->ListOfPostsShared[this->indexOfPost]->noOfComments));
                ui->pushButton_previousPost->setDisabled(true);
            }
            else
            {
                ui->label_post->setText("NO POSTS FOUND!");
                ui->pushButton_previousPost->setDisabled(true);
                ui->pushButton_nextPost->setDisabled(true);
            }
        }
    }
    if(parentCh == 'F')
    {
        ui->label_heading->setText("PROFILE");
        ui->label_type->setText("NAME : ");
        if(this->friendUser)
        {
            ui->label_name->setText(QString::fromStdString(this->friendUser->getUserName()));
            if(this->friendUser->ListOfPostsShared)
            {
                ui->label_likesCount->setText("LIKES : "+QString::number(this->friendUser->ListOfPostsShared[indexOfPost]->noOfLikes));
                ui->label_likesCount->setText("COMMENTS : "+QString::number(this->friendUser->ListOfPostsShared[indexOfPost]->noOfComments));
            }
            ui->label_id->setText(" ID : "+QString::fromStdString(this->friendUser->getUserId()));
            if(this->currentUser->isFriend(this->friendUser->getUserId()))
            {
                ui->label_status->setText("You are Friends With this User");
                ui->pushButton_Follow->setText("UNFRIEND");
            }
            else
            {
                ui->label_status->setText("Press Friend Button to Become a Friend");
                ui->pushButton_Follow->setText("FRIEND");
            }
            if(this->friendUser->ListOfPostsShared)
            {
                ui->label_likesCount->setText("LIKES : "+QString::number(this->friendUser->ListOfPostsShared[this->indexOfPost]->noOfLikes));
                ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->friendUser->ListOfPostsShared[this->indexOfPost]->noOfComments));
            }
            if(this->friendUser->ListOfPostsShared)
            {
                ui->label_post->setText(QString::number(this->indexOfPost+1)+ " ) "+QString::fromStdString(this->friendUser->ListOfPostsShared[this->indexOfPost]->getPost()));
                ui->pushButton_previousPost->setDisabled(true);
            }
            else
            {
                ui->label_post->setText("NO POSTS FOUND!");
                ui->pushButton_previousPost->setDisabled(true);
                ui->pushButton_nextPost->setDisabled(true);
            }
        }
    }
}

void FriendsAndFollowedPages::on_pushButton_Follow_clicked()
{
    if(parentCh == 'f')
    {
        if(!this->followedPage->isAFollower(this->currentUser->getUserId()))
        {
            this->currentUser->FollowPage(this->followedPage->getPageId());
            this->followedPage->AddFollower(this->currentUser->getUserId());
        }
        else
        {
            this->currentUser->UnFollowPage(this->followedPage->getPageId());
            this->followedPage->RemoveFollower(this->currentUser->getUserId());
        }
    }
    if(parentCh == 'F')
    {
        if(!this->friendUser->isFriend(this->currentUser->getUserId()))
        {
            this->currentUser->AddFriend(this->friendUser->getUserId());
            this->friendUser->AddFriend(this->currentUser->getUserId());
        }
        else
        {
            this->currentUser->RemoveFriend(this->friendUser->getUserId());
            this->friendUser->RemoveFriend(this->currentUser->getUserId());
        }
    }
    this->setUpThepage();
    QDir dir("Friends And Followers");
    if(!dir.exists())
        dir.mkdir(".");
    if(dir.exists())
    {
        if(parentCh == 'F')
        {
            QFile fileWrite("Friends And Followers/FriendsOf"+QString::fromStdString(this->currentUser->getUserId())+".txt");
            fileWrite.open(QIODevice::WriteOnly);
            QTextStream stream(&fileWrite);
            stream<<QString::number(this->currentUser->numberOfFriends);
            stream<<"\n";
            for(int i = 0;i<this->currentUser->numberOfFriends;i++)
            {
                stream<<QString::fromStdString(*this->currentUser->friendsList[i])<<"\n";
            }
            fileWrite.close();
            if(fileWrite.exists()&&this->currentUser->numberOfFriends == 0)
            {
                QFile::remove("Friends And Followers/FriendsOf"+QString::fromStdString(this->currentUser->getUserId())+".txt");
            }

            QFile tfileWrite("Friends And Followers/FriendsOf"+QString::fromStdString(this->friendUser->getUserId())+".txt");
            tfileWrite.open(QIODevice::WriteOnly);
            QTextStream tstream(&tfileWrite);
            tstream<<QString::number(this->friendUser->numberOfFriends);
            tstream<<"\n";
            for(int i = 0;i<this->friendUser->numberOfFriends;i++)
            {
                tstream<<QString::fromStdString(*this->friendUser->friendsList[i])<<"\n";
            }
            tfileWrite.close();
            if(tfileWrite.exists()&&this->friendUser->numberOfFriends == 0)
            {
                QFile::remove("Friends And Followers/FriendsOf"+QString::fromStdString(this->friendUser->getUserId())+".txt");
            }
        }
        if(parentCh == 'f')
        {
            QFile fileWrite("Friends And Followers/PagesLikedBy"+QString::fromStdString(this->currentUser->getUserId())+".txt");
            fileWrite.open(QIODevice::WriteOnly);
            QTextStream stream(&fileWrite);
            stream<<QString::number(this->currentUser->numberOfPagesLiked);
            stream<<"\n";
            for(int i = 0;i<this->currentUser->numberOfPagesLiked;i++)
            {
                stream<<QString::fromStdString(*this->currentUser->LikedPagesList[i])<<"\n";
            }
            fileWrite.close();
            if(fileWrite.exists()&&this->currentUser->numberOfPagesLiked == 0)
            {
                QFile::remove("Friends And Followers/PagesLikedBy"+QString::fromStdString(this->currentUser->getUserId())+".txt");
            }

            QFile tfileWrite("Friends And Followers/FollowersOf"+QString::fromStdString(this->followedPage->getPageId())+".txt");
            tfileWrite.open(QIODevice::WriteOnly);
            QTextStream tstream(&tfileWrite);
            tstream<<QString::number(this->followedPage->numberOfFollowers);
            tstream<<"\n";
            for(int i = 0;i<this->followedPage->numberOfFollowers;i++)
            {
                tstream<<QString::fromStdString(*this->followedPage->followersList[i])<<"\n";
            }
            tfileWrite.close();
            if(tfileWrite.exists()&&this->followedPage->numberOfFollowers == 0)
            {
                QFile::remove("Friends And Followers/FollowersOf"+QString::fromStdString(this->followedPage->getPageId())+".txt");
            }
        }
    }
}


void FriendsAndFollowedPages::on_pushButton_nextPost_clicked()
{
    if(this->parentCh == 'F')
    {
        if(this->indexOfPost<this->friendUser->numberOfPosts-1)
        {
            indexOfPost++;
            ui->label_post->setText(QString::number(this->indexOfPost+1)+ " ) "+QString::fromStdString(this->friendUser->ListOfPostsShared[this->indexOfPost]->getPost()));
            ui->label_likesCount->setText("LIKES : "+QString::number(this->friendUser->ListOfPostsShared[this->indexOfPost]->noOfLikes));
            ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->friendUser->ListOfPostsShared[this->indexOfPost]->noOfComments));
        }
        if(this->indexOfPost==this->friendUser->numberOfPosts-1)
        {
            ui->pushButton_nextPost->setDisabled(true);
        }
        if(this->indexOfPost != 0)
        {
            ui->pushButton_previousPost->setDisabled(false);
        }
    }
    if(this->parentCh == 'f')
    {
        if(this->indexOfPost<this->followedPage->numberOfPosts-1)
        {
            indexOfPost++;
            ui->label_post->setText(QString::number(this->indexOfPost+1)+ " ) "+QString::fromStdString(this->followedPage->ListOfPostsShared[this->indexOfPost]->getPost()));
            ui->label_likesCount->setText("LIKES : "+QString::number(this->followedPage->ListOfPostsShared[this->indexOfPost]->noOfLikes));
            ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->followedPage->ListOfPostsShared[this->indexOfPost]->noOfComments));
        }
        if(this->indexOfPost==this->followedPage->numberOfPosts-1)
        {
            ui->pushButton_nextPost->setDisabled(true);
        }
        if(this->indexOfPost != 0)
        {
            ui->pushButton_previousPost->setDisabled(false);
        }
    }
}


void FriendsAndFollowedPages::on_pushButton_previousPost_clicked()
{
    if(this->parentCh=='F')
    {
        if(this->indexOfPost>0)
        {
            indexOfPost--;
            ui->label_post->setText(QString::number(this->indexOfPost+1)+ " ) "+QString::fromStdString(this->friendUser->getUserName()+this->friendUser->ListOfPostsShared[this->indexOfPost]->getPost()));
            ui->label_likesCount->setText("LIKES : "+QString::number(this->friendUser->ListOfPostsShared[this->indexOfPost]->noOfLikes));
            ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->friendUser->ListOfPostsShared[this->indexOfPost]->noOfComments));
        }
        if(this->indexOfPost==0)
        {
            ui->pushButton_previousPost->setDisabled(true);
        }
        if(this->indexOfPost != this->friendUser->numberOfPosts-1)
        {
            ui->pushButton_nextPost->setDisabled(false);
        }
    }
    if(this->parentCh=='f')
    {
        if(this->indexOfPost>0)
        {
            indexOfPost--;
            ui->label_post->setText(QString::number(this->indexOfPost+1)+ " ) "+QString::fromStdString(this->followedPage->getPageId()+this->friendUser->ListOfPostsShared[this->indexOfPost]->getPost()));
            ui->label_likesCount->setText("LIKES : "+QString::number(this->followedPage->ListOfPostsShared[this->indexOfPost]->noOfLikes));
            ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->followedPage->ListOfPostsShared[this->indexOfPost]->noOfComments));
        }
        if(this->indexOfPost==0)
        {
            ui->pushButton_previousPost->setDisabled(true);
        }
        if(this->indexOfPost != this->followedPage->numberOfPosts-1)
        {
            ui->pushButton_nextPost->setDisabled(false);
        }
    }
}


void FriendsAndFollowedPages::on_pushButton_addComment_clicked()
{
    if(this->parentCh == 'F')
    {
        if(this->friendUser->ListOfPostsShared)
        {
            newCommentPtr = new CommentsWindow('F');
            newCommentPtr->setUser(this->currentUser,indexOfPost);
            newCommentPtr->setFriendUser(this->friendUser,indexOfPost);
            connect(newCommentPtr,&CommentsWindow::backToFriendsAndFollowedPages,this,&FriendsAndFollowedPages::backToPageFromAddComment);
            newCommentPtr->setPage();
            this->hide();
            newCommentPtr->showMaximized();
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setWindowTitle("COMMENTS WINDOW");
            msgBox.setText("NO POST FOUND!");
            msgBox.setIcon(QMessageBox::Warning);
            QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
            msgBox.setStyleSheet(customStyle);
            msgBox.exec();
        }
    }
    if(this->parentCh == 'f')
    {
        if(this->followedPage->ListOfPostsShared)
        {
            newCommentPtr = new CommentsWindow('f');
            newCommentPtr->setUser(this->currentUser,indexOfPost);
            newCommentPtr->setPagePtr(this->followedPage,indexOfPost);
            connect(newCommentPtr,&CommentsWindow::backToFriendsAndFollowedPages,this,&FriendsAndFollowedPages::backToPageFromAddComment);
            newCommentPtr->setPage();
            this->hide();
            newCommentPtr->showMaximized();
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setWindowTitle("COMMENTS WINDOW");
            msgBox.setText("NO POST FOUND!");
            msgBox.setIcon(QMessageBox::Warning);
            QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
            msgBox.setStyleSheet(customStyle);
            msgBox.exec();
        }
    }
}

void FriendsAndFollowedPages::backToPageFromAddComment()
{
    newCommentPtr->hide();
    this->showMaximized();
    this->setUpThepage();
    if(newCommentPtr)
    {
        delete newCommentPtr;
        this->newCommentPtr = 0;
    }
    disconnect(newCommentPtr,&CommentsWindow::backToFriendsAndFollowedPages,this,&FriendsAndFollowedPages::backToPageFromAddComment);
}

void FriendsAndFollowedPages::backToPageFromAddLike()
{
    newLikePtr->hide();
    this->showMaximized();
    this->setUpThepage();
    if(newLikePtr)
    {
        delete newLikePtr;
        newLikePtr = 0;
    }
    disconnect(newLikePtr,&LikesWindow::backToFriendsAndFollowedPagesWindow,this,&FriendsAndFollowedPages::backToPageFromAddLike);
}

void FriendsAndFollowedPages::on_pushButton_like_clicked()
{
    if(this->parentCh == 'F')
    {
        if(this->friendUser->ListOfPostsShared)
        {
            newLikePtr = new LikesWindow('F');
            newLikePtr->setUser(this->currentUser,indexOfPost);
            newLikePtr->setFriendUser(this->friendUser,indexOfPost);
            connect(newLikePtr,&LikesWindow::backToFriendsAndFollowedPagesWindow,this,&FriendsAndFollowedPages::backToPageFromAddLike);
            newLikePtr->setUpThePage();
            this->hide();
            newLikePtr->showMaximized();
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setWindowTitle("LIKE WINDOW");
            msgBox.setText("NO POST FOUND!");
            msgBox.setIcon(QMessageBox::Warning);
            QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
            msgBox.setStyleSheet(customStyle);
            msgBox.exec();
        }
    }
    if(this->parentCh == 'f')
    {
        if(this->followedPage->ListOfPostsShared)
        {
            newLikePtr = new LikesWindow('f');
            newLikePtr->setUser(this->currentUser,indexOfPost);
            newLikePtr->setPage(this->followedPage,indexOfPost);
            connect(newLikePtr,&LikesWindow::backToFriendsAndFollowedPagesWindow,this,&FriendsAndFollowedPages::backToPageFromAddLike);
            newLikePtr->setUpThePage();
            this->hide();
            newLikePtr->showMaximized();
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setWindowTitle("LIKE WINDOW");
            msgBox.setText("NO POST FOUND!");
            msgBox.setIcon(QMessageBox::Warning);
            QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
            msgBox.setStyleSheet(customStyle);
            msgBox.exec();
        }
    }
}
