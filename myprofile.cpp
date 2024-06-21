#include "myprofile.h"
#include "ui_myprofile.h"
#include "home.h"
#include <string>
#include <ctime>

MyProfile::MyProfile(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyProfile)
{
    ui->setupUi(this);
    this->indexOfPost = 0;
}

MyProfile::~MyProfile()
{
    delete ui;
}

void MyProfile::on_pushButton_clicked()
{
    emit backToHome();
}

void MyProfile::setUser(User * & temp)
{
    this->userPtr = temp;
    this->setUpThePage();
}

void MyProfile::setUpThePage()
{
    ui->label_userId ->setText(QString::fromStdString(userPtr->getUserId()));
    ui->label_name ->setText(QString::fromStdString(userPtr->getUserName()));
    ui->listWidget_friends->clear();
    ui->listWidget_likedPages->clear();
    for(int i = 0;i<userPtr->numberOfFriends;i++)
    {
        ui->listWidget_friends->addItem(QString::fromStdString(*userPtr->friendsList[i]));
    }
    for(int i = 0;i<userPtr->numberOfPagesLiked;i++)
    {
        ui->listWidget_likedPages->addItem(QString::fromStdString(*userPtr->LikedPagesList[i]));
    }
    if(this->userPtr->ListOfPostsShared)
    {
        ui->label_likesCount->setText("LIKES : "+QString::number(this->userPtr->ListOfPostsShared[this->indexOfPost]->noOfLikes));
        ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->userPtr->ListOfPostsShared[this->indexOfPost]->noOfComments));
    }
    if(this->userPtr->ListOfPostsShared)
    {
        ui->label_Post->setText(QString::number(this->indexOfPost+1)+ " ) "+QString::fromStdString(this->userPtr->ListOfPostsShared[this->indexOfPost]->getPost()));
        ui->pushButton_previousPost->setDisabled(true);
    }
    else
    {
        ui->label_Post->setText("NO POSTS FOUND!");
        ui->pushButton_previousPost->setDisabled(true);
        ui->pushButton_nextPost->setDisabled(true);
    }
}

void MyProfile::on_pushButton_addPost_clicked()
{
    this->hide();
    newPostPtr = new AddPost('P');
    newPostPtr->setUser(userPtr);
    connect(newPostPtr,&AddPost::backToProfile,this,&MyProfile::backToProfileFromAddPost);
    newPostPtr->showMaximized();
}

void MyProfile::backToProfileFromAddPost()
{
    newPostPtr->hide();
    if(newPostPtr)
    {
        delete newPostPtr;
        newPostPtr = 0;
    }
    disconnect(newPostPtr,&AddPost::backToProfile,this,&MyProfile::backToProfileFromAddPost);
    if(this->indexOfPost<this->userPtr->numberOfPosts-1)
    {
        ui->pushButton_nextPost->setDisabled(false);
    }
    this->showMaximized();
    this->setUpThePage();
}

void MyProfile::backToProfileFromAddActivity()
{
    newActivityPtr->hide();
    if(newActivityPtr)
    {
        delete newActivityPtr;
        newActivityPtr = 0;
    }
    disconnect(newActivityPtr,&AddActivity::backToProfile,this,&MyProfile::backToProfileFromAddActivity);
    if(this->indexOfPost<this->userPtr->numberOfPosts-1)
    {
        ui->pushButton_nextPost->setDisabled(false);
    }
    this->showMaximized();
    this->setUpThePage();
}

void MyProfile::backToProfileFromAddComment()
{
    newCommentPtr->hide();
    if(newCommentPtr)
    {
        delete newCommentPtr;
        newCommentPtr = 0;
    }
    disconnect(newCommentPtr,&CommentsWindow::backToProfile,this,&MyProfile::backToProfileFromAddComment);
    ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->userPtr->ListOfPostsShared[this->indexOfPost]->noOfComments));
    this->showMaximized();
}

void MyProfile::backToProfileFromMyPage()
{
    myPagePtr->hide();
    if(myPagePtr)
    {
        delete myPagePtr;
        myPagePtr = 0;
    }
    disconnect(myPagePtr,&MyPage::backToProfile,this,&MyProfile::backToProfileFromMyPage);
    this->showMaximized();
}

void MyProfile::backToProfileFromCreatePage()
{
    newPagePtr->hide();
    if(newPagePtr)
    {
        delete newPagePtr;
        newPagePtr = 0;
    }
    disconnect(newPagePtr,&CreatePage::backToProfile,this,&MyProfile::backToProfileFromCreatePage);
    this->showMaximized();
}

void MyProfile::on_pushButton_addActivity_clicked()
{
    this->hide();
    newActivityPtr = new AddActivity('P');
    newActivityPtr->setUser(userPtr);
    connect(newActivityPtr,&AddActivity::backToProfile,this,&MyProfile::backToProfileFromAddActivity);
    newActivityPtr->showMaximized();
}


void MyProfile::on_pushButton_goToPage_clicked()
{
    if(this->userPtr->pageOwned)
    {
        this->hide();
        myPagePtr = new MyPage();
        connect(myPagePtr,&MyPage::backToProfile,this,&MyProfile::backToProfileFromMyPage);
        myPagePtr->setUser(userPtr);
        myPagePtr->setUpThePage();
        myPagePtr->showMaximized();
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("MY PAGE");
        msgBox.setText("PLEASE CREATE A PAGE!");
        msgBox.setIcon(QMessageBox::Information);
        QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
        msgBox.setStyleSheet(customStyle);
        msgBox.exec();
    }
}


void MyProfile::on_pushButton_addCreatePage_clicked()
{
    this->hide();
    newPagePtr = new CreatePage();
    newPagePtr->setUser(userPtr);
    connect(newPagePtr,&CreatePage::backToProfile,this,&MyProfile::backToProfileFromCreatePage);
    newPagePtr->showMaximized();
}

void MyProfile::on_pushButton_addComment_clicked()
{
    this->hide();
    newCommentPtr = new CommentsWindow('P');
    newCommentPtr->setUser(this->userPtr,indexOfPost);
    connect(newCommentPtr,&CommentsWindow::backToProfile,this,&MyProfile::backToProfileFromAddComment);
    newCommentPtr->setPage();
    newCommentPtr->showMaximized();
}

void MyProfile::on_pushButton_nextPost_clicked()
{
    if(this->indexOfPost<this->userPtr->numberOfPosts-1)
    {
        indexOfPost++;
        ui->label_Post->setText(QString::number(this->indexOfPost+1)+ " ) "+QString::fromStdString(this->userPtr->ListOfPostsShared[this->indexOfPost]->getPost()));
        ui->label_likesCount->setText("LIKES : "+QString::number(this->userPtr->ListOfPostsShared[this->indexOfPost]->noOfLikes));
        ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->userPtr->ListOfPostsShared[this->indexOfPost]->noOfComments));
    }
    if(this->indexOfPost==this->userPtr->numberOfPosts-1)
    {
        ui->pushButton_nextPost->setDisabled(true);
    }
    if(this->indexOfPost != 0)
    {
        ui->pushButton_previousPost->setDisabled(false);
    }
}


void MyProfile::on_pushButton_previousPost_clicked()
{
    if(this->indexOfPost>0)
    {
        indexOfPost--;
        ui->label_Post->setText(QString::number(this->indexOfPost+1)+ " ) "+QString::fromStdString(this->userPtr->getUserName()+this->userPtr->ListOfPostsShared[this->indexOfPost]->getPost()));
        ui->label_likesCount->setText("LIKES : "+QString::number(this->userPtr->ListOfPostsShared[this->indexOfPost]->noOfLikes));
        ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->userPtr->ListOfPostsShared[this->indexOfPost]->noOfComments));
    }
    if(this->indexOfPost==0)
    {
        ui->pushButton_previousPost->setDisabled(true);
    }
    if(this->indexOfPost != this->userPtr->numberOfPosts-1)
    {
        ui->pushButton_nextPost->setDisabled(false);
    }
}


void MyProfile::on_pushButton_memory_clicked()
{
    if(this->userPtr->ListOfPostsShared)
    {
        this->hide();
        newMemoryPtr = new MemoryWindow('P');
        newMemoryPtr->setUser(userPtr,indexOfPost);
        connect(newMemoryPtr,&MemoryWindow::backToProfile,this,&MyProfile::backToProfileFromAddMemory);
        newMemoryPtr->setUpThePage();
        newMemoryPtr->showMaximized();
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("MEMORY WINDOW");
        msgBox.setText("PLEASE CREATE A POST FIRST!");
        msgBox.setIcon(QMessageBox::Warning);
        QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
        msgBox.setStyleSheet(customStyle);
        msgBox.exec();
    }
}

void MyProfile::backToProfileFromAddMemory()
{
    newMemoryPtr->hide();
    if(newMemoryPtr)
    {
        delete newMemoryPtr;
        newMemoryPtr = 0;
    }
    disconnect(newMemoryPtr,&MemoryWindow::backToProfile,this,&MyProfile::backToProfileFromAddMemory);
    if(this->indexOfPost<this->userPtr->numberOfPosts-1)
    {
        ui->pushButton_nextPost->setDisabled(false);
    }
    this->showMaximized();
    this->setUpThePage();
}


void MyProfile::backToProfileFromAddLike()
{
    newLikePtr->hide();
    if(newLikePtr)
    {
        delete newLikePtr;
        newLikePtr = 0;
    }
    disconnect(newLikePtr,&LikesWindow::backToProfile,this,&MyProfile::backToProfileFromAddLike);
    this->showMaximized();
    this->setUpThePage();
}

void MyProfile::on_pushButton_like_clicked()
{
    if(this->userPtr->ListOfPostsShared)
    {
        this->hide();
        newLikePtr = new LikesWindow('P');
        newLikePtr->setUser(userPtr,indexOfPost);
        connect(newLikePtr,&LikesWindow::backToProfile,this,&MyProfile::backToProfileFromAddLike);
        newLikePtr->setUpThePage();
        newLikePtr->showMaximized();
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("LIKE WINDOW");
        msgBox.setText("PLEASE CREATE A POST FIRST!");
        msgBox.setIcon(QMessageBox::Warning);
        QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
        msgBox.setStyleSheet(customStyle);
        msgBox.exec();
    }
}
