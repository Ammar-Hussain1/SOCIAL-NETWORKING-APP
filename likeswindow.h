#ifndef LIKESWINDOW_H
#define LIKESWINDOW_H
#include "project.h"
#include <QDir>
#include <QFile>

#include <QMainWindow>

class User;
class Page;

namespace Ui {
class LikesWindow;
}

class LikesWindow : public QMainWindow
{
    Q_OBJECT

signals:
    void backToProfile();
    void backToPage();
    void backToFriendsAndFollowedPagesWindow();
    void backToHome();

public:
    explicit LikesWindow(char parentCh,QWidget *parent = nullptr);
    ~LikesWindow();
    void setUpThePage();
    void setUser(User*&,int indexOfPost);
    void setPage(Page*&,int indexOfPost);
    void setFriendUser(User*&,int indexOfPost);

private slots:
    void on_pushButton_like_clicked();

    void on_pushButton_goBack_clicked();

private:
    Ui::LikesWindow *ui;
    User * userPtr;
    Page * pagePtr;
    User * friendPtr;
    char parentCh;
    int indexOfPost;
};

#endif // LIKESWINDOW_H
