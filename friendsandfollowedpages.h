#ifndef FRIENDSANDFOLLOWEDPAGES_H
#define FRIENDSANDFOLLOWEDPAGES_H

#include <QMainWindow>
#include "project.h"
#include "likeswindow.h"
#include "commentswindow.h"

class Page;
class User;

namespace Ui {
class FriendsAndFollowedPages;
}

class FriendsAndFollowedPages : public QMainWindow
{
    Q_OBJECT

signals:
    void backToHome();

public:
    explicit FriendsAndFollowedPages(char parentCh,QWidget *parent = nullptr);
    ~FriendsAndFollowedPages();
    void setPage(Page *&);
    void setCurrentUser(User *&);
    void setFriendUser(User *&);
    void setUpThepage();
    void backToPageFromAddLike();
    void backToPageFromAddComment();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Follow_clicked();

    void on_pushButton_previousPost_clicked();

    void on_pushButton_nextPost_clicked();

    void on_pushButton_addComment_clicked();

    void on_pushButton_like_clicked();

private:
    Ui::FriendsAndFollowedPages *ui;
    User * currentUser;
    User * friendUser;
    Page * followedPage;
    char parentCh;
    int indexOfPost;
    LikesWindow * newLikePtr;
    CommentsWindow * newCommentPtr;
};

#endif // FRIENDSANDFOLLOWEDPAGES_H
