#ifndef MYPROFILE_H
#define MYPROFILE_H
#include "project.h"
#include "addpost.h"
#include "commentswindow.h"
#include "mypage.h"
#include "addactivity.h"
#include "createpage.h"
#include <QMainWindow>
#include <QMessageBox>
#include "memorywindow.h"
#include "likeswindow.h"
class AddActivity;
class AddPost;
class CommentsWindow;
class CreatePage;
class MyPage;
class MemoryWindow;
class LikesWindow;

namespace Ui {
class MyProfile;
}

class MyProfile : public QMainWindow
{
    Q_OBJECT
signals:
    void backToHome();

public:
    explicit MyProfile(QWidget *parent = nullptr);
    void setUser(User *& temp);
    void setUpThePage();
    void backToProfileFromAddPost();
    void backToProfileFromAddActivity();
    void backToProfileFromAddComment();
    void backToProfileFromMyPage();
    void backToProfileFromCreatePage();
    void backToProfileFromAddMemory();
    void backToProfileFromAddLike();
    ~MyProfile();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_addPost_clicked();

    void on_pushButton_addActivity_clicked();

    void on_pushButton_goToPage_clicked();

    void on_pushButton_addCreatePage_clicked();

    void on_pushButton_addComment_clicked();

    void on_pushButton_nextPost_clicked();

    void on_pushButton_previousPost_clicked();

    void on_pushButton_memory_clicked();

    void on_pushButton_like_clicked();

private:
    Ui::MyProfile *ui;
    User * userPtr;
    AddActivity * newActivityPtr;
    AddPost * newPostPtr;
    CommentsWindow * newCommentPtr;
    MyPage * myPagePtr;
    CreatePage * newPagePtr;
    int indexOfPost;
    MemoryWindow * newMemoryPtr;
    LikesWindow * newLikePtr;
};

#endif // MYPROFILE_H
