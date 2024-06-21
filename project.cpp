#include "Project.h"
#include <QDebug>
#include <QString>

//////////////////////////////////////////////////////////////////////////////////
//DATE CLASS

Date::Date()
{
    day = 0;
    month = 0;
    year = 0;
    hour = 0;
    minute = 0;
    currentDate = "00\\00\\2004 00:00";
}

void Date::setcurrentDate(string d)
{
    this->currentDate = d;
}

bool Date::operator<(Date rhs)
{
    qDebug()<<QString::fromStdString(this->getDate())<<"\n";
    qDebug()<<QString::fromStdString(rhs.getDate())<<"\n";
    if(this->year<rhs.year)
    {
        return true;
    }
    else if(this->year == rhs.year && this->month < rhs.month)
    {
        return true;
    }
    else if(this->year == rhs.year && this->month == rhs.month && this->day < rhs.day)
    {
        return true;
    }
    else if( this->year ==  rhs.year && this->month == rhs.month && this->day ==  rhs.day && this->hour < rhs.hour)
    {
        return true;
    }
    else if(this->year == rhs.year && this->month == rhs.month && this->day == rhs.day && this->hour == rhs.hour && this->minute < rhs.minute)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Date::operator>(Date rhs)
{
    if(this->year>rhs.year)
    {
        return true;
    }
    else if(this->year == rhs.year && this->month > rhs.month)
    {
        return true;
    }
    else if(this->year == rhs.year && this->month == rhs.month && this->day > rhs.day)
    {
        return true;
    }
    else if( this->year ==  rhs.year && this->month == rhs.month && this->day ==  rhs.day && this->hour > rhs.hour)
    {
        return true;
    }
    else if(this->year == rhs.year && this->month == rhs.month && this->day == rhs.day && this->hour == rhs.hour && this->minute > rhs.minute)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Date::Date(int d , int m , int y , int h , int mn )
{
    day = d;
    month = m;
    year = y;
    hour = h;
    minute = mn;
    currentDate = "00\\00\\2004 00:00";
    currentDate[0] = char((d / 10) + 48);
    currentDate[1] = char((d % 10) + 48);
    currentDate[3] = char((m / 10) + 48);
    currentDate[4] = char((m % 10) + 48);
    currentDate[9] = char((y % 10) + 48);
    y /= 10;
    currentDate[8] = char((y % 10) + 48);
    y /= 10;
    currentDate[7] = char((y % 10) + 48);
    y /= 10;
    currentDate[6] = char((y % 10) + 48);
    currentDate[11] = char((h / 10) + 48);
    currentDate[12] = char((h % 10) + 48);
    currentDate[14] = char((mn / 10) + 48);
    currentDate[15] = char((mn % 10) + 48);
}

//23/10/2004 23:20

Date::Date(Date& rhs)
{
    this->day = rhs.day;
    this->month = rhs.month;
    this->year = rhs.year;
    this->hour = rhs.hour;
    this->minute = rhs.minute;
    this->currentDate = rhs.currentDate;
}

Date Date::operator =(Date & rhs)
{
    this->day = rhs.day;
    this->hour = rhs.hour;
    this->currentDate = rhs.currentDate;
    this->minute = rhs.minute;
    this->month = rhs.month;
    this->year = rhs.month;
    return *this;
}

void Date::setDate(int d , int m , int y , int h , int mn ,string cd )
{
    this->day = d;
    this->month = m;
    this->year = y;
    this->hour = h;
    this->minute = mn;
    this->currentDate = cd;
}

bool Date::isEqual(Date temp)
{
    return (this->day == temp.day && this->month == temp.month && this->year == temp.year && this->hour == temp.hour && this->minute == temp.minute);
}

string Date::getDate()
{
    return currentDate;
}

bool Date::checkValidity()
{
    if (this->month == 1 && this->day <= 31 && this->day > 0 && this->hour >= 0 && this->hour < 24 && this->minute >=0 && this-> minute < 60)
    {
        return true;
    }
    else if (this->month == 2 && ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 400 == 0)) && this->day <= 29 && this->day > 0 && this->hour >= 0 && this->hour < 24 && this->minute >=0 && this-> minute < 60)
    {
        return true;
    }
    else if (this->month == 2 && (!((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 400 == 0))) && this->day <= 28 && this->day > 0 && this->hour >= 0 && this->hour < 24 && this->minute >=0 && this-> minute < 60)
    {
        return true;
    }
    else if (this->month == 3 && this->day <= 31 && this->day > 0 && this->hour >= 0 && this->hour < 24 && this->minute >=0 && this-> minute < 60)
    {
        return true;
    }
    else if (this->month == 4 && this->day <= 30 && this->day > 0 && this->hour >= 0 && this->hour < 24 && this->minute >=0 && this-> minute < 60)
    {
        return true;
    }
    else if (this->month == 5 && this->day <= 31 && this->day > 0 && this->hour >= 0 && this->hour < 24 && this->minute >=0 && this-> minute < 60)
    {
        return true;
    }
    else if (this->month == 6 && this->day <= 30 && this->day > 0 && this->hour >= 0 && this->hour < 24 && this->minute >=0 && this-> minute < 60)
    {
        return true;
    }
    else if (this->month == 7 && this->day <= 31 && this->day > 0 && this->hour >= 0 && this->hour < 24 && this->minute >=0 && this-> minute < 60)
    {
        return true;
    }
    else if (this->month == 8 && this->day <= 31 && this->day > 0 && this->hour >= 0 && this->hour < 24 && this->minute >=0 && this-> minute < 60)
    {
        return true;
    }
    else if (this->month == 9 && this->day <= 30 && this->day > 0 && this->hour >= 0 && this->hour < 24 && this->minute >=0 && this-> minute < 60)
    {
        return true;
    }
    else if (this->month == 10 && this->day <= 31 && this->day > 0 && this->hour >= 0 && this->hour < 24 && this->minute >=0 && this-> minute < 60)
    {
        return true;
    }
    else if (this->month == 11 && this->day <= 30 && this->day > 0 && this->hour >= 0 && this->hour < 24 && this->minute >=0 && this-> minute < 60)
    {
        return true;
    }
    else if (this->month == 12 && this->day <= 31 && this->day > 0 && this->hour >= 0 && this->hour < 24 && this->minute >=0 && this-> minute < 60)
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////
//USER CLASS

User::User()
{
    userId = "U00";
    userName = "user";
    string password = "password";
    friendsList = 0;
    numberOfFriends = 0;
    LikedPagesList = 0;
    numberOfPagesLiked = 0;
    pageOwned = 0;//dyamically allocate
    ListOfPostsShared = 0;
    numberOfPosts = 0;
}

User::~User()
{
    if (pageOwned)
    {
        delete pageOwned;
    }
    for (int i = 0; i < numberOfFriends; i++)
    {
        delete friendsList[i];
    }
    delete[] friendsList;
    friendsList = 0;
    for (int i = 0; i < numberOfPagesLiked; i++)
    {
        delete LikedPagesList[i];
    }
    delete[] LikedPagesList;
    LikedPagesList = 0;
    if(ListOfPostsShared)
    {
        for(int i = 0;i<numberOfPosts;i++)
        {
            delete ListOfPostsShared[i];
        }
        delete[] ListOfPostsShared;
        ListOfPostsShared = 0;
    }
}

bool User::isFriend(string id)
{
    for(int i = 0;i<this->numberOfFriends;i++)
    {
        if(id == *this->friendsList[i])
            return true;
    }
    return false;
}
bool User::isFollowed(string id)
{
    for(int i = 0;i<this->numberOfPagesLiked;i++)
    {
        if(id == *this->LikedPagesList[i])
            return true;
    }
    return false;
}

void User::AddFriend(string id)
{
    string** tempPtr = new string*[this->numberOfFriends];
    for(int i = 0;i<this->numberOfFriends;i++)
    {
        tempPtr[i] = this->friendsList[i];
    }
    delete[] this->friendsList;
    this->friendsList = 0;
    this->friendsList = new string*[this->numberOfFriends+1];
    for(int i = 0;i<this->numberOfFriends;i++)
    {
        this->friendsList[i]  = tempPtr[i];
    }
    this->friendsList[this->numberOfFriends] = new string(id);
    this->numberOfFriends++;
    delete[] tempPtr;
    tempPtr = 0;
}

void User::RemoveFriend(string id)
{
    string ** tempPtr = new string*[this->numberOfFriends-1];
    int index = 0;
    for(int i = 0;i<this->numberOfFriends;i++)
    {
        if(*this->friendsList[i] != id)
        {
            tempPtr[index++] = this->friendsList[i];
        }
    }
    delete[] this->friendsList;
    this->friendsList = 0;
    this->numberOfFriends--;
    this->friendsList = new string*[this->numberOfFriends];
    for(int i = 0;i<this->numberOfFriends;i++)
    {
        this->friendsList[i]  = tempPtr[i];
    }
    delete[] tempPtr;
    tempPtr = 0;
}

void User::UnFollowPage(string id)
{
    string** tempPtr = new string*[this->numberOfPagesLiked-1];
    int index = 0;
    for(int i = 0;i<this->numberOfPagesLiked;i++)
    {
        if(*this->LikedPagesList[i]!=id)
        {
            tempPtr[index++] = this->LikedPagesList[i];
        }
    }
    delete[] this->LikedPagesList;
    this->LikedPagesList = 0;
    this->numberOfPagesLiked--;
    this->LikedPagesList = new string*[this->numberOfPagesLiked];
    for(int i = 0;i<this->numberOfPagesLiked;i++)
    {
        this->LikedPagesList[i]  = tempPtr[i];
    }
    delete[] tempPtr;
    tempPtr = 0;
}

void User::FollowPage(string id)
{
    string** tempPtr = new string*[this->numberOfPagesLiked];
    for(int i = 0;i<this->numberOfPagesLiked;i++)
    {
        tempPtr[i] = this->LikedPagesList[i];
    }
    delete[] this->LikedPagesList;
    this->LikedPagesList = 0;
    this->LikedPagesList = new string*[this->numberOfPagesLiked+1];
    for(int i = 0;i<this->numberOfPagesLiked;i++)
    {
        this->LikedPagesList[i]  = tempPtr[i];
    }
    this->LikedPagesList[this->numberOfPagesLiked] = new string(id);
    this->numberOfPagesLiked++;
    delete[] tempPtr;
    tempPtr = 0;
}

User::User(User& rhs)
{
    this->userId = rhs.userId;
    this->userName = rhs.userName;
    this->password = rhs.password;
    this->numberOfFriends = rhs.numberOfFriends;
    this->friendsList = new string*[this->numberOfFriends];
    for(int i = 0; i < this->numberOfFriends; i++)
    {
        this->friendsList[i] = new string(*rhs.friendsList[i]);
    }
    this->numberOfPagesLiked = rhs.numberOfPagesLiked;
    this->LikedPagesList = new string*[this->numberOfPagesLiked];
    for(int i = 0; i < this->numberOfPagesLiked; i++)
    {
        this->LikedPagesList[i] = new string(*rhs.LikedPagesList[i]);
    }
    this->pageOwned = new Page(*rhs.pageOwned);
    this->numberOfPosts = rhs.numberOfPosts;
    this->ListOfPostsShared = new Post* [this->numberOfPosts];
    for(int i = 0; i < this->numberOfPosts; i++)
    {
        this->ListOfPostsShared[i] = new Post(*rhs.ListOfPostsShared[i]);
    }
}

User User::operator=(User & rhs)
{
    this->userId = rhs.userId;
    this->userName = rhs.userName;
    this->password = rhs.password;

    for (int i = 0; i < this->numberOfFriends; i++)
    {
        delete this->friendsList[i];
    }
    delete[] this->friendsList;
    this->friendsList = 0;
    this->numberOfFriends = rhs.numberOfFriends;
    this->friendsList = new string*[this->numberOfFriends];
    for(int i = 0; i < this->numberOfFriends; i++)
    {
        this->friendsList[i] = new string(*rhs.friendsList[i]);
    }

    if (this->pageOwned)
    {
        delete pageOwned;
    }
    this->pageOwned = new Page(*rhs.pageOwned);

    for (int i = 0; i < this->numberOfPagesLiked; i++)
    {
        delete this->LikedPagesList[i];
    }
    delete[] this->LikedPagesList;
    this->LikedPagesList = 0;
    this->numberOfPagesLiked = rhs.numberOfPagesLiked;
    this->LikedPagesList = new string*[this->numberOfPagesLiked];
    for(int i = 0; i < this->numberOfPagesLiked; i++)
    {
        this->LikedPagesList[i] = new string(*rhs.LikedPagesList[i]);
    }

    if(this->ListOfPostsShared)
    {
        for(int i = 0;i<this->numberOfPosts;i++)
        {
            delete this->ListOfPostsShared[i];
        }
        delete[] this->ListOfPostsShared;
        this->ListOfPostsShared = 0;
    }
    this->numberOfPosts = rhs.numberOfPosts;
    this->ListOfPostsShared = new Post* [this->numberOfPosts];
    for(int i = 0; i < this->numberOfPosts; i++)
    {
        this->ListOfPostsShared[i] = new Post(*rhs.ListOfPostsShared[i]);
    }
    return *this;
}

void User::displayFriendsList()
{
    cout << "Friends List :\n";
    for (int i = 0; i < numberOfFriends; i++)
    {
        cout << friendsList[i]<<endl;
    }
}

void User::displayTimeLine()
{
    for (int i = 0; i < numberOfPosts; i++)
    {
        cout << "POST # " << i + 1 << endl;
        //ListOfPostsShared[i]->displayPost();
    }
}


void User::changePassword()
{
    cout << "Do you want to change Password?";
    bool decision;
    cin >> decision;
    if (decision == true)
    {
        string temp;
        cout << "Enter Old Password : ";
        cin >> temp;
        while (temp != password)
        {
            cout << "Invalid Password\n";
            cout << "Enter Old Password : ";
            cin >> temp;
        }
        if (temp == password)
        {
            cout << "Enter new password:" << endl;
            cin >> password;
        }
    }
}

void User::setUserId(string id)
{
    this->userId = id;
}

void User::setUserName(string username)
{
    this->userName = username;
}

void User::setPassword(string pass)
{
    this->password = pass;
}

string User::getUserId()
{
    return userId;
}

string User::getUserName()
{
    return userName;
}

string User::getPassword()
{
    return password;
}

void User::AddPost(Post * temp)
{
    Post ** tempPosts = 0;
    tempPosts = new Post* [this->numberOfPosts];
    for(int i = 0;i<this->numberOfPosts;i++)
    {
        tempPosts[i] = this->ListOfPostsShared[i];
    }
    delete[] this->ListOfPostsShared;
    this->ListOfPostsShared = 0;
    this->numberOfPosts++;
    ListOfPostsShared = new Post* [this->numberOfPosts];
    for(int i = 0;i<this->numberOfPosts-1;i++)
    {
        this->ListOfPostsShared[i] = tempPosts[i];
    }
    Post* postPtr = dynamic_cast<Post*>(temp);
    Memory* memoryPtr = dynamic_cast<Memory*>(temp);
    Activity* activityPtr = dynamic_cast<Activity*>(temp);
    if(postPtr)
    {
        this->ListOfPostsShared[this->numberOfPosts-1] = new Post(*postPtr);
    }
    if(memoryPtr)
    {
        this->ListOfPostsShared[this->numberOfPosts-1] = new Memory(*memoryPtr);
    }
    if(activityPtr)
    {
        this->ListOfPostsShared[this->numberOfPosts-1] = new Activity(*activityPtr);
    }
    delete[] tempPosts;
    tempPosts = 0;
}

////////////////////////////////////////////////////////////////////////////////////
//POST CLASS

void Post::removeLikePost(User* tempUser)
{
    if(likesList)
    {
        string ** temp = new string*[noOfLikes-1];
        int index = 0;
        for(int i = 0;i<noOfLikes;i++)
        {
            if(*this->likesList[i]!=tempUser->getUserId())
            {
                temp[index++] = new string(*this->likesList[i]);
            }
            delete this->likesList[i];
            this->likesList[i] = 0;
        }
        delete[] this->likesList;
        this->likesList = 0;
        this->noOfLikes--;
        likesList = new string*[noOfLikes];
        for(int i = 0;i<noOfLikes;i++)
        {
            this->likesList[i] = new string(*temp[i]);
            delete temp[i];
        }
        delete[] temp;
        temp = 0;
    }
}

void Post::removeLikePost(Page* tempPage)
{
    if(likesList)
    {
        string ** temp = new string*[noOfLikes-1];
        int index = 0;
        for(int i = 0;i<noOfLikes;i++)
        {
            if(*this->likesList[i]!=tempPage->getPageId())
            {
                temp[index++] = new string(*this->likesList[i]);
            }
            delete this->likesList[i];
            this->likesList[i] = 0;
        }
        delete[] this->likesList;
        this->likesList = 0;
        this->noOfLikes--;
        likesList = new string*[noOfLikes];
        for(int i = 0;i<noOfLikes;i++)
        {
            this->likesList[i] = new string(*temp[i]);
            delete temp[i];
        }
        delete[] temp;
        temp = 0;
    }
}

bool Post::isLiked(string id)
{
    for(int i = 0;i<this->noOfLikes;i++)
    {
        if(*this->likesList[i] == id)
        {
            return true;
        }
    }
    return false;
}

void Post::likePost(User* tempUser)
{
    if (likesList)
    {
        string ** temp = new string*[noOfLikes];
        for(int i = 0;i<noOfLikes;i++)
        {
            temp[i] = new string(*likesList[i]);
            delete likesList[i];
            likesList[i] = 0;
        }
        delete[] likesList;
        likesList = 0;
        likesList = new string*[noOfLikes+1];
        for(int i = 0;i<noOfLikes;i++)
        {
            likesList[i] = new string(*temp[i]);
            delete temp[i];
        }
        delete[] temp;
        temp = 0;
        likesList[noOfLikes] = new string(tempUser->getUserId());
        noOfLikes++;
    }
    else
    {
        noOfLikes++;
        likesList = new string*[noOfLikes];
        likesList[0] = new string(tempUser->getUserId());
    }

}

void Post::likePost(Page* tempPage)
{
    if (likesList)
    {
        string ** temp = new string*[noOfLikes];
        for(int i = 0;i<noOfLikes;i++)
        {
            temp[i] = new string(*likesList[i]);
            delete likesList[i];
            likesList[i] = 0;
        }
        delete[] likesList;
        likesList = 0;
        likesList = new string*[noOfLikes+1];
        for(int i = 0;i<noOfLikes;i++)
        {
            likesList[i] = new string(*temp[i]);
            delete temp[i];
        }
        delete[] temp;
        temp = 0;
        likesList[noOfLikes] = new string(tempPage->getPageId());
        noOfLikes++;
    }
    else
    {
        noOfLikes++;
        likesList = new string*[noOfLikes];
        likesList[0] = new string(tempPage->getPageId());
    }
}

Post::Post(Post& rhs)
{
    this->postId = rhs.postId;
    this->description = rhs.description;
    this->noOfLikes = rhs.noOfLikes;
    this->displayName = rhs.displayName;
    this->likesList = new string * [this->noOfLikes];
    this->sharedDate = rhs.sharedDate;
    for (int i = 0; i < this->noOfLikes; i++)
    {
        this->likesList[i] = new string(*rhs.likesList[i]);
    }
    this->noOfComments = rhs.noOfComments;
    this->commentsOnPost = new Comment * [this->noOfComments];
    for (int i = 0; i < this->noOfComments; i++)
    {
        this->commentsOnPost[i] = new Comment(*rhs.commentsOnPost[i]);
    }
}
Post Post::operator=(Post& rhs)
{
    this->postId = rhs.postId;
    this->description = rhs.description;
    this->sharedDate = rhs.sharedDate;
    this->displayName = rhs.displayName;
    if (likesList)
    {
        for (int i = 0; i < this->noOfLikes; i++)
        {
            delete likesList[i];
            likesList[i] = 0;
        }
        delete[] likesList;
        likesList = 0;
        this->noOfLikes = rhs.noOfLikes;
        this->likesList = new string * [this->noOfLikes];
        for (int i = 0; i < this->noOfLikes; i++)
        {
            this->likesList[i] = new string(*rhs.likesList[i]);
        }
    }
    if (commentsOnPost)
    {
        for (int i = 0; i < noOfComments; i++)
        {
            delete commentsOnPost[i];
            commentsOnPost[i] = 0;
        }
        delete[] commentsOnPost;
        commentsOnPost = 0;
        this->noOfComments = rhs.noOfComments;
        this->commentsOnPost = new Comment * [this->noOfComments];
        for (int i = 0; i < this->noOfComments; i++)
        {
            this->commentsOnPost[i] = new Comment;
            this->commentsOnPost[i] = rhs.commentsOnPost[i];
        }
    }
    return *this;
}

void Post::commentOnPost(string author, string content, Date date)
{
    if (commentsOnPost)
    {
        Comment** temp = new Comment * [noOfComments];
        for (int i = 0; i < noOfComments; i++)
        {
            temp[i] = new Comment(commentsOnPost[i]->getAuthor(), commentsOnPost[i]->getContent(),commentsOnPost[i]->getDate());
            delete commentsOnPost[i];
            commentsOnPost[i] = 0;
        }
        delete[] commentsOnPost;
        commentsOnPost = 0;
        noOfComments++;
        commentsOnPost = new  Comment * [noOfComments];
        for (int i = 0; i < noOfComments-1; i++)
        {
            commentsOnPost[i] = new Comment(temp[i]->getAuthor(), temp[i]->getContent(), temp[i]->getDate());
        }
        commentsOnPost[noOfComments-1] = new Comment(author, content, date);
        for (int i = 0; i < noOfComments-1; i++)
        {
            delete temp[i];
            temp[i] = 0;
        }
        delete[] temp;
        temp = 0;
    }
    if (!commentsOnPost)
    {
        noOfComments++;
        commentsOnPost = new Comment* [noOfComments];
        commentsOnPost[0] = new Comment(author, content, date);
    }
}


string Post::getPostId()
{
    return postId;
}

string Post::getDescription()
{
    return description;
}

Date Post::getSharedDate()
{
    return sharedDate;
}

void Post::setPostId(string id)
{
    postId = id;
}

void Post::setDescription(string des)
{
    description = des;
}

void Post::setSharedDate(Date d)
{
    sharedDate = d;
}

Post::Post(string id, string des, Date d)
{
    postId = id;
    description = des;
    noOfLikes = 0;
    likesList = 0;
    noOfComments = 0;
    commentsOnPost = 0;
    sharedDate = d;
}

string Post::getDisplayName()
{
    return displayName;
}

void Post::setDisplayName(string d)
{
    this->displayName = d;
}

Post::Post()
{
    postId = "p00";
    description = "description";
    displayName = "Name";
    noOfLikes = 0;
    likesList = 0;
    noOfComments = 0;
    commentsOnPost = 0;
    sharedDate;
}
Post::~Post()
{
    for (int i = 0; i < noOfLikes; i++)
    {
        delete likesList[i];
    }
    delete[] likesList;
    likesList = 0;
    for (int i = 0; i < noOfComments; i++)
    {
        delete commentsOnPost[i];
    }
    delete[] commentsOnPost;
    commentsOnPost = 0;
}

string Post::getPost()
{
    string post = this->displayName;
    post+=" shared ";
    post+="\" ";
    post+=this->description;
    post+=" \"\n\t";
    post+=this->sharedDate.getDate();
    return post;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//COMMENT CLASS

Comment::Comment(Comment& rhs)
{
    this->author = rhs.author;
    this->content = rhs.content;
    this->dateCommented = rhs.dateCommented;
}

Comment Comment::operator=(Comment& rhs)
{
    this->author = rhs.author;
    this->content = rhs.content;
    this->dateCommented = rhs.dateCommented;
    return *this;
}

string Comment::displayComment()
{
    string display = author;
    display+=" : ";
    display+=content;
    display+="\n";
    display+=dateCommented.getDate();
    return display;
}

string Comment::getAuthor()
{
    return author;
}

string Comment::getContent()
{
    return content;
}

Date Comment::getDate()
{
    return dateCommented;
}

Comment::Comment()
{
    author = "author";
    content = "content";
    dateCommented;
    dateCommented.setDate(0,0,0,0,0,"00/00/0000 00:00");
}

Comment::Comment(string author, string content, Date d)
{
    this->author = author;
    this->content = content;
    this->dateCommented = d;
}

//////////////////////////////////////////////////////////////////////////////
//ACTIVITY CLASS

string Activity::getPost()
{
    string post = this->displayName;
    post += " is ";
    post+=this->type;
    post+=" ";
    post+=this->value;
    post+="\n\" ";
    post+=this->description;
    post+=" \"\n";
    post+=this->sharedDate.getDate();
    return post;
}

Activity::~Activity()
{
    for (int i = 0; i < 4; i++)
    {
        delete totalTypes[i];
        delete feeling[i];
        delete making[i];
        delete thinkingAbout[i];
        delete celebrating[i];
    }
    delete[] totalTypes;
    delete[] feeling;
    delete[] making;
    delete[] thinkingAbout;
    delete[] celebrating;
    totalTypes = 0;
    feeling = 0;
    making = 0;
    thinkingAbout = 0;
    celebrating = 0;
}

Activity::Activity() : Post()
{
    totalTypes = 0;
    type = "type";
    totalTypes = new string * [4];
    totalTypes[0] = new string("Feeling");
    totalTypes[1] = new string("Thinking About");
    totalTypes[2] = new string("Making");
    totalTypes[3] = new string("Celebrating");

    feeling = new string * [4];
    feeling[0] = new string("Happy");
    feeling[1] = new string("Sad");
    feeling[2] = new string("Excited");
    feeling[3] = new string("Tired");

    thinkingAbout = new string * [4];
    thinkingAbout[0] = new string("Life");
    thinkingAbout[1] = new string("Future");
    thinkingAbout[2] = new string("Someone Special");
    thinkingAbout[3] = new string("Making a Change");

    making = new string * [4];
    making[0] = new string("Money");
    making[1] = new string("Art");
    making[2] = new string("Memories");
    making[3] = new string("Something Delicious");

    celebrating = new string * [4];
    celebrating[0] = new string("A Birthday");
    celebrating[1] = new string("Halloween");
    celebrating[2] = new string("Success");
    celebrating[3] = new string("Eid");
}

Activity::Activity(string postId, string description, Date dateShared ,string type,string value) : Post(postId,description,dateShared)
{
    this->type = type;
    this->value = value;
    totalTypes = new string * [4];
    totalTypes[0] = new string("Feeling");
    totalTypes[1] = new string("Thinking About");
    totalTypes[2] = new string("Making");
    totalTypes[3] = new string("Celebrating");

    feeling = new string * [4];
    feeling[0] = new string("Happy");
    feeling[1] = new string("Sad");
    feeling[2] = new string("Excited");
    feeling[3] = new string("Tired");

    thinkingAbout = new string * [4];
    thinkingAbout[0] = new string("Life");
    thinkingAbout[1] = new string("Future");
    thinkingAbout[2] = new string("Someone Special");
    thinkingAbout[3] = new string("Making a Change");

    making = new string * [4];
    making[0] = new string("Money");
    making[1] = new string("Art");
    making[2] = new string("Memories");
    making[3] = new string("Something Delicious");

    celebrating = new string * [4];
    celebrating[0] = new string("A Birthday");
    celebrating[1] = new string("Halloween");
    celebrating[2] = new string("Success");
    celebrating[3] = new string("Eid");
}

string Activity::getType()
{
    return type;
}
void Activity::setType(string t)
{
    this->type = t;
}

string Activity::getValue()
{
    return value;
}
void Activity::setValue(string v)
{
    this->value = v;
}

Activity::Activity(Activity& rhs)
{
    this->postId = rhs.postId;
    this->value = rhs.value;
    this->type = rhs.type;
    this->description = rhs.description;
    this->sharedDate = rhs.sharedDate;
    this->displayName = rhs.displayName;
    totalTypes = new string * [4];
    totalTypes[0] = new string("Feeling");
    totalTypes[1] = new string("Thinking About");
    totalTypes[2] = new string("Making");
    totalTypes[3] = new string("Celebrating");

    feeling = new string * [4];
    feeling[0] = new string("Happy");
    feeling[1] = new string("Sad");
    feeling[2] = new string("Excited");
    feeling[3] = new string("Tired");

    thinkingAbout = new string * [4];
    thinkingAbout[0] = new string("Life");
    thinkingAbout[1] = new string("Future");
    thinkingAbout[2] = new string("Someone Special");
    thinkingAbout[3] = new string("Making a Change");

    making = new string * [4];
    making[0] = new string("Money");
    making[1] = new string("Art");
    making[2] = new string("Memories");
    making[3] = new string("Something Delicious");

    celebrating = new string * [4];
    celebrating[0] = new string("A Birthday");
    celebrating[1] = new string("Halloween");
    celebrating[2] = new string("Success");
    celebrating[3] = new string("Eid");
    this->noOfLikes = rhs.noOfLikes;
    this->likesList = new string * [this->noOfLikes];
    for (int i = 0; i < this->noOfLikes; i++)
    {
        this->likesList[i] = new string(*rhs.likesList[i]);
    }
    this->noOfComments = rhs.noOfComments;
    this->commentsOnPost = new Comment * [this->noOfComments];
    for (int i = 0; i < this->noOfComments; i++)
    {
        this->commentsOnPost[i] = new Comment;
        this->commentsOnPost[i] = rhs.commentsOnPost[i];
    }
}

Activity Activity::operator=(Activity& rhs)
{

    this->value = rhs.value;
    this->type = rhs.type;
    totalTypes = new string * [4];
    totalTypes[0] = new string("Feeling");
    totalTypes[1] = new string("Thinking About");
    totalTypes[2] = new string("Making");
    totalTypes[3] = new string("Celebrating");

    feeling = new string * [4];
    feeling[0] = new string("Happy");
    feeling[1] = new string("Sad");
    feeling[2] = new string("Excited");
    feeling[3] = new string("Tired");

    thinkingAbout = new string * [4];
    thinkingAbout[0] = new string("Life");
    thinkingAbout[1] = new string("Future");
    thinkingAbout[2] = new string("Someone Special");
    thinkingAbout[3] = new string("Making a Change");

    making = new string * [4];
    making[0] = new string("Money");
    making[1] = new string("Art");
    making[2] = new string("Memories");
    making[3] = new string("Something Delicious");

    celebrating = new string * [4];
    celebrating[0] = new string("A Birthday");
    celebrating[1] = new string("Halloween");
    celebrating[2] = new string("Success");
    celebrating[3] = new string("Eid");
    this->postId = rhs.postId;
    this->description = rhs.description;
    this->sharedDate = rhs.sharedDate;
    this->displayName = rhs.displayName;
    if (likesList)
    {
        for (int i = 0; i < this->noOfLikes; i++)
        {
            delete likesList[i];
            likesList[i] = 0;
        }
        delete[] likesList;
        likesList = 0;
        this->noOfLikes = rhs.noOfLikes;
        this->likesList = new string * [this->noOfLikes];
        for (int i = 0; i < this->noOfLikes; i++)
        {
            this->likesList[i] = new string(*rhs.likesList[i]);
        }
    }
    if (commentsOnPost)
    {
        for (int i = 0; i < noOfComments; i++)
        {
            delete commentsOnPost[i];
            commentsOnPost[i] = 0;
        }
        delete[] commentsOnPost;
        commentsOnPost = 0;
        this->noOfComments = rhs.noOfComments;
        this->commentsOnPost = new Comment * [this->noOfComments];
        for (int i = 0; i < this->noOfComments; i++)
        {
            this->commentsOnPost[i] = new Comment;
            this->commentsOnPost[i] = rhs.commentsOnPost[i];
        }
    }
    return *this;
}

/////////////////////////////////////////////////////////
//PAGE CLASS

Page::Page(Page& rhs)
{
    this->pageId = rhs.pageId;
    this->title = rhs.title;
    this->pageOwner = rhs.pageOwner;
    this->numberOfFollowers = rhs.numberOfFollowers;
    this->followersList = new string * [numberOfFollowers];
    for (int i = 0; i < numberOfFollowers; i++)
    {
        this->followersList[i] = new string(*rhs.followersList[i]);
    }
    this->numberOfPosts = rhs.numberOfPosts;
    this->ListOfPostsShared = new Post * [this->numberOfPosts];
    for (int i = 0; i < this->numberOfPosts; i++)
    {
        this->ListOfPostsShared[i] = new Post;
        this->ListOfPostsShared[i] = rhs.ListOfPostsShared[i];
    }
}

void Page::AddFollower(string id)
{
    string** tempPtr = new string*[this->numberOfFollowers];
    for(int i = 0;i<this->numberOfFollowers;i++)
    {
        tempPtr[i] = this->followersList[i];
    }
    delete[] this->followersList;
    this->followersList = 0;
    this->followersList = new string*[this->numberOfFollowers+1];
    for(int i = 0;i<this->numberOfFollowers;i++)
    {
        this->followersList[i]  = tempPtr[i];
    }
    this->followersList[this->numberOfFollowers] = new string(id);
    this->numberOfFollowers++;
    delete[] tempPtr;
    tempPtr = 0;
}

void Page::RemoveFollower(string id)
{
    string** tempPtr = new string*[this->numberOfFollowers-1];
    int index = 0;
    for(int i = 0;i<this->numberOfFollowers;i++)
    {
        if(*this->followersList[i]!=id)
        {
            tempPtr[index++] = this->followersList[i];
        }
    }
    delete[] this->followersList;
    this->followersList = 0;
    this->numberOfFollowers--;
    this->followersList = new string*[this->numberOfFollowers];
    for(int i = 0;i<this->numberOfFollowers;i++)
    {
        this->followersList[i]  = tempPtr[i];
    }
    delete[] tempPtr;
    tempPtr = 0;
}

bool Page::isAFollower(string id)
{
    for(int i = 0; i<this->numberOfFollowers;i++)
    {
        if(id == *this->followersList[i])
            return true;
    }
    return false;
}

void Page::AddPost(Post * temp)
{
    Post ** tempPosts = 0;
    tempPosts = new Post* [this->numberOfPosts];
    for(int i = 0;i<this->numberOfPosts;i++)
    {
        tempPosts[i] = this->ListOfPostsShared[i];
    }
    delete[] this->ListOfPostsShared;
    this->ListOfPostsShared = 0;
    this->numberOfPosts++;
    ListOfPostsShared = new Post* [this->numberOfPosts];
    for(int i = 0;i<this->numberOfPosts-1;i++)
    {
        this->ListOfPostsShared[i] = tempPosts[i];
    }
    Post* postPtr = dynamic_cast<Post*>(temp);
    Memory* memoryPtr = dynamic_cast<Memory*>(temp);
    Activity* activityPtr = dynamic_cast<Activity*>(temp);
    if(postPtr)
    {
        this->ListOfPostsShared[this->numberOfPosts-1] = new Post(*postPtr);
    }
    if(memoryPtr)
    {
        this->ListOfPostsShared[this->numberOfPosts-1] = new Memory(*memoryPtr);
    }
    if(activityPtr)
    {
        this->ListOfPostsShared[this->numberOfPosts-1] = new Activity(*activityPtr);
    }
    delete[] tempPosts;
    tempPosts = 0;
}

Page Page::operator=(Page& rhs)
{
    this->pageId = rhs.pageId;
    this->title = rhs.title;
    this->pageOwner = rhs.pageOwner;
    if (followersList)
    {
        for (int i = 0; i < this->numberOfFollowers; i++)
        {
            delete this->followersList[i];
            this->followersList[i] = 0;
        }
        delete[] this->followersList;
        this->followersList = 0;
    }
    this->numberOfFollowers = rhs.numberOfFollowers;
    this->followersList = new string * [numberOfFollowers];
    for (int i = 0; i < numberOfFollowers; i++)
    {
        this->followersList[i] = new string(*rhs.followersList[i]);
    }
    if (ListOfPostsShared)
    {
        for (int i = 0; i < this->numberOfPosts; i++)
        {
            delete this->ListOfPostsShared[i];
            this->ListOfPostsShared[i] = 0;
        }
        delete[] this->ListOfPostsShared;
        this->ListOfPostsShared = 0;
    }
    this->numberOfPosts = rhs.numberOfPosts;
    this->ListOfPostsShared = new Post * [this->numberOfPosts];
    for (int i = 0; i < this->numberOfPosts; i++)
    {
        this->ListOfPostsShared[i] = new Post;
        this->ListOfPostsShared[i] = rhs.ListOfPostsShared[i];
    }
    return *this;
}




Page::~Page()
{
    if (followersList)
    {
        for (int i = 0; i < numberOfFollowers; i++)
        {
            delete followersList[i];
            followersList[i] = 0;
        }
        delete[] followersList;
        followersList = 0;
    }
    if (ListOfPostsShared)
    {
        for (int i = 0; i < numberOfPosts; i++)
        {
            delete ListOfPostsShared[i];
            ListOfPostsShared[i] = 0;
        }
        delete[] ListOfPostsShared;
        ListOfPostsShared = 0;
    }
}

Page::Page()
{
    this->pageId = "pageId";
    this->title = "title";
    this->pageOwner = "Page Owner";
    this->followersList = 0;
    this->numberOfFollowers = 0;
    this->ListOfPostsShared = 0;
    this->numberOfPosts = 0;
}

Page::Page(string id,string t, string owner)
{
    this->pageId = id;
    this->title = t;
    this->pageOwner = owner;
    this->followersList = 0;
    this->numberOfFollowers = 0;
    this->ListOfPostsShared = 0;
    this->numberOfPosts = 0;
}

string Page::getPageId()
{
    return pageId;
}
string Page::getTitle()
{
    return title;
}
string Page::getPageOwner()
{
    return pageOwner;
}
void Page::setPageId(string id)
{
    this->pageId = id;
}
void Page::setTitle(string t)
{
    this->title = t;
}
void Page::setPageOwner(string o)
{
    this->pageOwner = o;
}


/////////////////////////////////////////////////////////////////////
Memory::Memory():Post ()
{
    this->memoryDescription = "MemoryDescription";
}

Memory::Memory(Memory& rhs)
{
    this->memoryDescription = rhs.memoryDescription;
    this->postId = rhs.postId;
    this->description = rhs.description;
    this->displayName = rhs.displayName;
    this->noOfLikes = rhs.noOfLikes;
    this->likesList = new string * [this->noOfLikes];
    this->sharedDate = rhs.sharedDate;
    for (int i = 0; i < this->noOfLikes; i++)
    {
        this->likesList[i] = new string(*rhs.likesList[i]);
    }
    this->noOfComments = rhs.noOfComments;
    this->commentsOnPost = new Comment * [this->noOfComments];
    for (int i = 0; i < this->noOfComments; i++)
    {
        this->commentsOnPost[i] = new Comment;
        this->commentsOnPost[i] = rhs.commentsOnPost[i];
    }
}

Memory Memory::operator=(Memory& rhs)
{
    this->memoryDescription = rhs.memoryDescription;
    this->postId = rhs.postId;
    this->description = rhs.description;
    this->sharedDate = rhs.sharedDate;
    this->displayName = rhs.displayName;
    if (likesList)
    {
        for (int i = 0; i < this->noOfLikes; i++)
        {
            delete likesList[i];
            likesList[i] = 0;
        }
        delete[] likesList;
        likesList = 0;
        this->noOfLikes = rhs.noOfLikes;
        this->likesList = new string * [this->noOfLikes];
        for (int i = 0; i < this->noOfLikes; i++)
        {
            this->likesList[i] = new string(*rhs.likesList[i]);
        }
    }
    if (commentsOnPost)
    {
        for (int i = 0; i < noOfComments; i++)
        {
            delete commentsOnPost[i];
            commentsOnPost[i] = 0;
        }
        delete[] commentsOnPost;
        commentsOnPost = 0;
        this->noOfComments = rhs.noOfComments;
        this->commentsOnPost = new Comment * [this->noOfComments];
        for (int i = 0; i < this->noOfComments; i++)
        {
            this->commentsOnPost[i] = new Comment;
            this->commentsOnPost[i] = rhs.commentsOnPost[i];
        }
    }
    return *this;
}

string Memory::getPost()
{
    string post = "~~~ "+this->getDisplayName()+" shared a Memory ~~~...";
    post+=sharedDate.getDate();
    post+="\n\" ";
    post+=this->description;
    post+=" \"\n\t";
    post+=this->getMemoryDescription();
    return post;
}
