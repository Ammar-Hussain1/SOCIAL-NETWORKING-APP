#pragma once
#include <iostream>
#include <string>
#include "myprofile.h"
#include "addactivity.h"
#include "addpost.h"
#include "createpage.h"
#include "mypage.h"
#include "commentswindow.h"
#include "memorywindow.h"
#include "likeswindow.h"
#include "friendsandfollowedpages.h"
using namespace std;

class User;
class Page;
class Post;
class Date;
class Comment;
class Activity;
class Memory;

class MyProfile;
class AddActivity;
class AddPost;
class CreatePage;
class CommentsWindow;
class MyPage;
class MemoryWindow;
class FriendsAndFollowedPages;

class Page
{
private:
    string pageId;
    string title;
    string pageOwner;
    string** followersList;
    int numberOfFollowers;
    Post** ListOfPostsShared;
    int numberOfPosts;
    friend class MyPage;
    friend class MyProfile;
    friend class User;
    friend class CommentsWindow;
    friend class MemoryWindow;
    friend class LikesWindow;
    friend class FriendsAndFollowedPages;
    friend class AddPost;
    friend class AddActivity;
    friend class Home;
public:
    Page();
    Page(string, string, string);
    ~Page();
    Page(Page&);
    Page operator=(Page&);
    string getPageId();
    string getTitle();
    string getPageOwner();
    void AddPost(Post *);
    void setPageId(string);
    void setTitle(string);
    void setPageOwner(string);
    void AddFollower(string);
    void RemoveFollower(string);
    bool isAFollower(string);
};

class User
{
private:
    string userId;
    string userName;
    string password;
    string** friendsList;
    int numberOfFriends;
    string** LikedPagesList;
    int numberOfPagesLiked;
    Page* pageOwned;
    Post** ListOfPostsShared;
    int numberOfPosts;
    friend class MyProfile;
    friend class AddActivity;
    friend class AddPost;
    friend class Post;
    friend class CreatePage;
    friend class CommentsWindow;
    friend class MyPage;
    friend class MemoryWindow;
    friend class LikesWindow;
    friend class FriendsAndFollowedPages;
    friend class Home;
public:
    User();
    ~User();
    User(User&);
    User operator=(User &);
    void viewHome();
    void LikePost(Post*);
    void displayFriendsList();
    void displayTimeLine();
    void shareMemory(Post*);
    void setUserName(string );
    void setUserId(string );
    void setPassword(string );
    void changePassword();
    string getUserName();
    string getUserId();
    string getPassword();
    void AddPost(Post *);
    void AddFriend(string);
    void FollowPage(string);
    bool isFriend(string);
    bool isFollowed(string);
    void RemoveFriend(string);
    void UnFollowPage(string);
};

class Date
{
private:
    int day;
    int month;
    int year;
    int hour;
    int minute;
    string currentDate;
public:
    Date();
    Date(int d , int m , int y , int h , int mn);
    Date(Date&);
    Date operator=(Date&);
    ~Date(){}
    void setDate(int d, int m, int y, int h, int mn, string cd);
    string getDate();
    bool checkValidity();
    bool isEqual(Date);
    bool operator<(Date);
    bool operator>(Date);
    void setcurrentDate(string);
};

class Post
{
protected:
    string postId;
    string description;
    int noOfLikes;
    string** likesList;
    int noOfComments;
    Comment** commentsOnPost;
    Date sharedDate;
    string displayName;
    friend class AddPost;
    friend class MyProfile;
    friend class CommentsWindow;
    friend class MyPage;
    friend class User;
    friend class LikesWindow;
    friend class FriendsAndFollowedPages;
    friend class Home;
public:
    Post();
    Post(string,string,Date);
    ~Post();
    Post(Post&);
    Post operator=(Post&);
    void commentOnPost(string, string, Date);
    void displayPeopleWhoLiked();
    //void displayPost();
    void likePost(User*);
    void likePost(Page*);
    void removeLikePost(User*);
    void removeLikePost(Page*);
    virtual string getPost();
    string getPostId();
    string getDescription();
    Date getSharedDate();
    void setPostId(string);
    void setDescription(string);
    void setSharedDate(Date);
    bool isLiked(string);
    void setDisplayName(string d);
    string getDisplayName();
};

class Comment
{
private:
    string content;
    Date dateCommented;
    string author;
    friend class CommentsWindow;
public:
    Comment();
    Comment(Comment&);
    Comment operator=(Comment&);
    Comment(string, string, Date);
    string displayComment();
    string getAuthor();
    string getContent();
    Date getDate();
};

class Activity : public Post
{
private:
    string** totalTypes;
    string** feeling;
    string** thinkingAbout;
    string** making;
    string** celebrating;
    string type;
    string value;
    friend class AddActivity;
    friend class AddPost;
    friend class MyProfile;
    friend class CommentsWindow;
    friend class MyPage;
public:
    Activity();
    ~Activity();
    Activity(Activity&);
    Activity operator=(Activity&);
    Activity(string, string,Date,string, string);
    void displayTypes();
    void displayActivity();
    string getType();
    void setType(string);
    string getValue();
    void setValue(string);
    string getPost() override;
};


class Memory : public Post
{
private:
    string memoryDescription;
public:
    Memory();
    Memory(Memory&);
    Memory operator=(Memory&);
    void setMemoryDescription(string rhs)
    {
        this->memoryDescription = rhs;
    }
    string getMemoryDescription()
    {
        return this->memoryDescription;
    }
    string getPost() override;
    ~Memory(){}
};
