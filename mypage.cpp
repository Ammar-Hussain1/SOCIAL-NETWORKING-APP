#include "mypage.h"
#include "ui_mypage.h"

MyPage::MyPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyPage)
{
    ui->setupUi(this);
    indexOfPost = 0;
}

MyPage::~MyPage()
{
    delete ui;
}

void MyPage::on_pushButton_Profile_clicked()
{
    emit backToProfile();
}

void MyPage::setUser(User*& temp)
{
    this->userPtr = temp;
}

void MyPage::setUpThePage()
{
    ui->label_title->setText("TITLE : "+QString::fromStdString(this->userPtr->pageOwned->getTitle()));
    if(this->userPtr->pageOwned->followersList)
    {
        for(int i = 0;i<this->userPtr->pageOwned->numberOfFollowers;i++)
        {
            ui->listWidget->addItem(QString::fromStdString(*this->userPtr->pageOwned->followersList[i]));
        }
    }
    if(this->userPtr->pageOwned->ListOfPostsShared)
    {
        ui->label_Post->setText(QString::number(this->indexOfPost+1)+ " ) "+QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[indexOfPost]->getPost()));
        ui->label_likesCount->setText("LIKES : "+QString::number(this->userPtr->pageOwned->ListOfPostsShared[this->indexOfPost]->noOfLikes));
        ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->userPtr->pageOwned->ListOfPostsShared[this->indexOfPost]->noOfComments));
        ui->pushButton_previousPost->setDisabled(true);
    }
    else
    {
        ui->label_Post->setText("NO POSTS FOUND!");
        ui->pushButton_previousPost->setDisabled(true);
        ui->pushButton_nextPost->setDisabled(true);
    }
}

void MyPage::backToPageFromAddPost()
{
    newPostPtr->hide();
    if(newPostPtr)
    {
        delete newPostPtr;
        newPostPtr = 0;
    }
    disconnect(newPostPtr,&AddPost::backToPage,this,&MyPage::backToPageFromAddPost);
    if(this->indexOfPost<this->userPtr->pageOwned->numberOfPosts-1)
    {
        ui->pushButton_nextPost->setDisabled(false);
    }
    this->showMaximized();
    this->setUpThePage();
}

void MyPage::backToPageFromAddActivity()
{
    newActivityPtr->hide();
    if(newActivityPtr)
    {
        delete newActivityPtr;
        newActivityPtr = 0;
    }
    disconnect(newActivityPtr,&AddActivity::backToPage,this,&MyPage::backToPageFromAddActivity);
    if(this->indexOfPost<this->userPtr->pageOwned->numberOfPosts-1)
    {
        ui->pushButton_nextPost->setDisabled(false);
    }
    this->showMaximized();
    this->setUpThePage();
}

void MyPage::backToPageFromAddComment()
{
    newCommentPtr->hide();
    if(newCommentPtr)
    {
        delete newCommentPtr;
        newCommentPtr = 0;
    }
    disconnect(newCommentPtr,&CommentsWindow::backToPage,this,&MyPage::backToPageFromAddActivity);
    ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->userPtr->pageOwned->ListOfPostsShared[this->indexOfPost]->noOfComments));
    this->showMaximized();
}


void MyPage::on_pushButton_addActivity_clicked()
{
    this->hide();
    newActivityPtr = new AddActivity('p');
    newActivityPtr->setUser(userPtr);
    connect(newActivityPtr,&AddActivity::backToPage,this,&MyPage::backToPageFromAddActivity);
    newActivityPtr->showMaximized();
}


void MyPage::on_pushButton_addPost_clicked()
{
    this->hide();
    newPostPtr = new AddPost('p');
    newPostPtr->setUser(userPtr);
    connect(newPostPtr,&AddPost::backToPage,this,&MyPage::backToPageFromAddPost);
    newPostPtr->showMaximized();
}

void MyPage::on_pushButton_addComment_clicked()
{
    this->hide();
    newCommentPtr = new CommentsWindow('p');
    newCommentPtr->setUser(this->userPtr,indexOfPost);
    connect(newCommentPtr,&CommentsWindow::backToPage,this,&MyPage::backToPageFromAddComment);
    newCommentPtr->setPage();
    newCommentPtr->showMaximized();
}

void MyPage::on_pushButton_nextPost_clicked()
{
    if(this->indexOfPost<this->userPtr->pageOwned->numberOfPosts-1)
    {
        indexOfPost++;
        ui->label_Post->setText(QString::number(this->indexOfPost+1)+ " ) " + QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[this->indexOfPost]->getPost()));
        ui->label_likesCount->setText("LIKES : "+QString::number(this->userPtr->pageOwned->ListOfPostsShared[this->indexOfPost]->noOfLikes));
        ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->userPtr->pageOwned->ListOfPostsShared[this->indexOfPost]->noOfComments));
    }
    if(this->indexOfPost==this->userPtr->pageOwned->numberOfPosts-1)
    {
        ui->pushButton_nextPost->setDisabled(true);
    }
    if(this->indexOfPost != 0)
    {
        ui->pushButton_previousPost->setDisabled(false);
    }
}


void MyPage::on_pushButton_previousPost_clicked()
{
    if(this->indexOfPost>0)
    {
        indexOfPost--;
        ui->label_Post->setText(QString::number(this->indexOfPost+1)+ " ) "+QString::fromStdString(this->userPtr->pageOwned->ListOfPostsShared[this->indexOfPost]->getPost()));
        ui->label_likesCount->setText("LIKES : "+QString::number(this->userPtr->pageOwned->ListOfPostsShared[this->indexOfPost]->noOfLikes));
        ui->label_commentsCount->setText("COMMENTS : "+QString::number(this->userPtr->pageOwned->ListOfPostsShared[this->indexOfPost]->noOfComments));
    }
    if(this->indexOfPost==0)
    {
        ui->pushButton_previousPost->setDisabled(true);
    }
    if(this->indexOfPost != this->userPtr->pageOwned->numberOfPosts-1)
    {
        ui->pushButton_nextPost->setDisabled(false);
    }
}



void MyPage::on_pushButton_memory_clicked()
{
    if(this->userPtr->pageOwned->ListOfPostsShared)
    {
        this->hide();
        newMemoryPtr = new MemoryWindow('p');
        newMemoryPtr->setUser(userPtr,indexOfPost);
        connect(newMemoryPtr,&MemoryWindow::backToPage,this,&MyPage::backToPageFromAddMemory);
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

void MyPage::backToPageFromAddMemory()
{
    newMemoryPtr->hide();
    if(newMemoryPtr)
    {
        delete newMemoryPtr;
        newMemoryPtr = 0;
    }
    disconnect(newMemoryPtr,&MemoryWindow::backToPage,this,&MyPage::backToPageFromAddMemory);
    if(this->indexOfPost<this->userPtr->pageOwned->numberOfPosts-1)
    {
        ui->pushButton_nextPost->setDisabled(false);
    }
    this->showMaximized();
    this->setUpThePage();
}

void MyPage::backToPageFromAddLike()
{
    newLikePtr->hide();
    if(newLikePtr)
    {
        delete newLikePtr;
        newLikePtr = 0;
    }
    disconnect(newLikePtr,&LikesWindow::backToPage,this,&MyPage::backToPageFromAddLike);
    this->showMaximized();
    this->setUpThePage();
}

void MyPage::on_pushButton_like_clicked()
{
    if(this->userPtr->pageOwned->ListOfPostsShared)
    {
        this->hide();
        newLikePtr = new LikesWindow('p');
        newLikePtr->setUser(this->userPtr,indexOfPost);
        connect(newLikePtr,&LikesWindow::backToPage,this,&MyPage::backToPageFromAddLike);
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

