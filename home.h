#ifndef HOME_H
#define HOME_H
#include "myprofile.h"
#include <QString>
#include <QMainWindow>
#include "project.h"
#include "friendsandfollowedpages.h"
#include <QFile>
#include <QDir>
#include <string.h>
#include <QString>
#include "likeswindow.h"
#include "commentswindow.h"
#include <QMessageBox>
#include <QListWidgetItem>

namespace Ui {
class Home;
}
class Date;
class LikesWindow;
class CommentsWindow;

class Home : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    void backToHomeFromProfile();
    void backToHomeFromFriendAndFollowedPage();
    void backToHomeFromAddComment();
    void backToHomeFromAddLike();
    void setUserId(QString,QString,QString);
    void setUpThePage();
    void readDataOfUser(string id, User*& u);
    void readDataOfPage(string id, Page*& u);
    ~Home();

private slots:
    void on_pushButton_viewProfile_clicked();

    void on_pushButton_search_clicked();

    void on_pushButton_previousPost_clicked();

    void on_pushButton_nextPost_clicked();

    void on_pushButton_like_clicked();

    void on_pushButton_addComment_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::Home *ui;
    MyProfile * myProfilePtr;
    User * currentUser;
    User * friendUser;
    Page * followedPage;
    FriendsAndFollowedPages * friendsAndFollowedPagesPtr;
    int indexOfPost;
    User ** friendsDataList;
    Page ** pagesFollowedDataList;
    int countOfPosts;
    int * indexAgainstThePost;
    int * indexOfUser;
    string ** authorOfPosts;
    void sort();
    CommentsWindow * newCommentPtr;
    LikesWindow * newLikePtr;
};

#endif // HOME_H
