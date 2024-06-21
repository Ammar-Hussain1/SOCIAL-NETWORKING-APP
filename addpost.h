#pragma once
#ifndef ADDPOST_H
#define ADDPOST_H

#include <QMainWindow>
#include "project.h"
#include "QString"
#include <string.h>

class Post;
class User;

namespace Ui {
class AddPost;
}

class AddPost : public QMainWindow
{
    Q_OBJECT

signals:
    void backToProfile();
    void backToPage();

public:
    explicit AddPost(char ParentCh,QWidget *parent = nullptr);
    ~AddPost();
    void setUser(User *& temp);

private slots:
    void on_pushButton_Profile_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddPost *ui;
    User * currentUser;
    char parentCh;
};

#endif // ADDPOST_H
