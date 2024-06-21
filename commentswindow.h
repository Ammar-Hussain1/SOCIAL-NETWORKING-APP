#pragma once
#ifndef COMMENTSWINDOW_H
#define COMMENTSWINDOW_H
#include "project.h"
#include <QString>
#include <string.h>
#include <QMessageBox>
#include <QMainWindow>
#include <ctime>
#include <chrono>

class User;
class Comment;
class Page;

namespace Ui {
class CommentsWindow;
}

class CommentsWindow : public QMainWindow
{
    Q_OBJECT
signals:
    void backToProfile();
    void backToPage();
    void backToFriendsAndFollowedPages();
    void backToHome();

public:
    explicit CommentsWindow(char parentCh,QWidget *parent = nullptr);
    void setUser(User *&,int);
    void setFriendUser(User*&,int);
    void setPagePtr(Page*&,int);
    void setPage();
    ~CommentsWindow();


private slots:
    void on_pushButton_Profile_clicked();

    void on_pushButton_AddComment_clicked();

private:
    Ui::CommentsWindow *ui;
    User * currentUser;
    User * friendPtr;
    Page * pagePtr;
    Comment * comment;
    int indexOfPost;
    char parentCh;
};

#endif // COMMENTSWINDOW_H
