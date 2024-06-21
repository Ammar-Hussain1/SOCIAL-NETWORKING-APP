#pragma once
#ifndef MYPAGE_H
#define MYPAGE_H
#include "Project.h"
#include <QString>
#include <string.h>
#include "addactivity.h"
#include "addpost.h"
#include "commentswindow.h"
#include "memorywindow.h"
#include "likeswindow.h"

#include <QMainWindow>

class User;
class AddActivity;
class AddPost;
class CommentsWindow;
class MemoryWindow;
class LikesWindow;

namespace Ui {
class MyPage;
}

class MyPage : public QMainWindow
{
    Q_OBJECT
signals:
    void backToProfile();

public:
    explicit MyPage(QWidget *parent = nullptr);
    void setUser(User *&);
    void setUpThePage();
    void backToPageFromAddPost();
    void backToPageFromAddActivity();
    void backToPageFromAddComment();
    void backToPageFromAddMemory();
    void backToPageFromAddLike();
    ~MyPage();

private slots:
    void on_pushButton_Profile_clicked();

    void on_pushButton_addActivity_clicked();

    void on_pushButton_addPost_clicked();

    void on_pushButton_addComment_clicked();

    void on_pushButton_previousPost_clicked();

    void on_pushButton_nextPost_clicked();

    void on_pushButton_memory_clicked();

    void on_pushButton_like_clicked();

private:
    Ui::MyPage *ui;
    User * userPtr;
    int indexOfPost;
    AddActivity * newActivityPtr;
    AddPost * newPostPtr;
    CommentsWindow * newCommentPtr;
    MemoryWindow * newMemoryPtr;
    LikesWindow * newLikePtr;
};

#endif // MYPAGE_H
