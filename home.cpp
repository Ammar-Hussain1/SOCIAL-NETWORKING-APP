#include "home.h"
#include "ui_home.h"
Home::Home(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Home)
{
    ui->setupUi(this);
    currentUser = new User();
    this->friendUser = 0;
    this->followedPage = 0;
    friendUser = new User();
    followedPage =  new Page();
    indexOfPost = 0;
    countOfPosts = 0;
}

Home::~Home()
{
    delete ui;
    if(this->friendsDataList)
    {
        for(int i = 0;i<this->currentUser->numberOfFriends;i++)
        {
            if(this->friendsDataList[i])
            {
                delete friendsDataList[i];
                friendsDataList[i] = 0;
            }
        }
        delete[] friendsDataList;
        friendsDataList = 0;
    }

    if(this->pagesFollowedDataList)
    {
        for(int i = 0;i<this->currentUser->numberOfPagesLiked;i++)
        {
            if(this->pagesFollowedDataList[i])
            {
                delete pagesFollowedDataList[i];
                pagesFollowedDataList[i] = 0;
            }
        }
        delete[] pagesFollowedDataList;
        pagesFollowedDataList = 0;
    }
    if(this->indexAgainstThePost)
    {
        delete indexAgainstThePost;
        indexAgainstThePost = 0;
    }
    if(this->indexOfUser)
    {
        delete indexOfUser;
        indexOfUser = 0;
    }
    if(newLikePtr)
    {
        delete newLikePtr;
        newLikePtr= 0;
    }
    if(newCommentPtr)
    {
        delete newCommentPtr;
        newCommentPtr= 0;
    }

}

void Home::setUserId(QString id,QString name,QString pass)
{
    this->currentUser->setUserId(id.toStdString());
    this->currentUser->setUserName(name.toStdString());
    this->currentUser->setPassword(pass.toStdString());
    ui->label_currentUser->setText("UserId : "+id);
    QFile check("Users/PageOf"+QString::fromStdString(this->currentUser->getUserId())+".txt");
    if(check.exists())
    {
        this->currentUser->pageOwned = new Page();
    }
}

void Home::sort()
{
    for(int i = 0;i < this->countOfPosts -1;i++)
    {
        for(int j = i+1;j < this->countOfPosts ;j++)
        {
            if(*authorOfPosts[i] == "USER" && *authorOfPosts[j] == "USER")
            {
                if(!((this->friendsDataList[indexOfUser[i]]->ListOfPostsShared[this->indexAgainstThePost[i]]->getSharedDate()) > (this->friendsDataList[indexOfUser[j]]->ListOfPostsShared[this->indexAgainstThePost[j]]->getSharedDate())))
                {
                    int tempNum = indexAgainstThePost[i];
                    indexAgainstThePost[i] = indexAgainstThePost[j];
                    indexAgainstThePost[j] = tempNum;
                    tempNum = indexOfUser[i];
                    indexOfUser[i] = indexOfUser[j];
                    indexOfUser[j] = tempNum;
                }
            }
            if(*authorOfPosts[i] == "PAGE" && *authorOfPosts[j] == "USER")
            {
                if(!((this->pagesFollowedDataList[indexOfUser[i]]->ListOfPostsShared[this->indexAgainstThePost[i]]->getSharedDate()) > (this->friendsDataList[indexOfUser[j]]->ListOfPostsShared[this->indexAgainstThePost[j]]->getSharedDate())))
                {
                    string temp = *authorOfPosts[i];
                    *authorOfPosts[i] = *authorOfPosts[j];
                    *authorOfPosts[j] = temp;
                    int tempNum = indexAgainstThePost[i];
                    indexAgainstThePost[i] = indexAgainstThePost[j];
                    indexAgainstThePost[j] = tempNum;
                    tempNum = indexOfUser[i];
                    indexOfUser[i] = indexOfUser[j];
                    indexOfUser[j] = tempNum;
                }
            }
            if(*authorOfPosts[i] == "USER" && *authorOfPosts[j] == "PAGE")
            {
                if(!((this->friendsDataList[indexOfUser[i]]->ListOfPostsShared[this->indexAgainstThePost[i]]->getSharedDate()) > (this->pagesFollowedDataList[indexOfUser[j]]->ListOfPostsShared[this->indexAgainstThePost[j]]->getSharedDate())))
                {
                    string temp = *authorOfPosts[i];
                    *authorOfPosts[i] = *authorOfPosts[j];
                    *authorOfPosts[j] = temp;
                    int tempNum = indexAgainstThePost[i];
                    indexAgainstThePost[i] = indexAgainstThePost[j];
                    indexAgainstThePost[j] = tempNum;
                    tempNum = indexOfUser[i];
                    indexOfUser[i] = indexOfUser[j];
                    indexOfUser[j] = tempNum;
                }
            }
            if(*authorOfPosts[i] == "PAGE" && *authorOfPosts[j] == "PAGE")
            {
                if(!((this->pagesFollowedDataList[indexOfUser[i]]->ListOfPostsShared[this->indexAgainstThePost[i]]->getSharedDate()) > (this->pagesFollowedDataList[indexOfUser[j]]->ListOfPostsShared[this->indexAgainstThePost[j]]->getSharedDate())))
                {
                    int tempNum = indexAgainstThePost[i];
                    indexAgainstThePost[i] = indexAgainstThePost[j];
                    indexAgainstThePost[j] = tempNum;
                    tempNum = indexOfUser[i];
                    indexOfUser[i] = indexOfUser[j];
                    indexOfUser[j] = tempNum;
                }
            }
        }
    }
}

void Home::setUpThePage()
{
    readDataOfUser(this->currentUser->getUserId(),this->currentUser);
    if(this->currentUser->pageOwned)
    {
        readDataOfPage("PageOf"+this->currentUser->getUserId(),this->currentUser->pageOwned);
    }
    ui->listWidget->clear();
    countOfPosts = 0;
    friendsDataList = new User*[this->currentUser->numberOfFriends];
    for(int i = 0;i<this->currentUser->numberOfFriends;i++)
    {
        friendsDataList[i] = new User();
        readDataOfUser(*this->currentUser->friendsList[i],this->friendsDataList[i]);
        countOfPosts+=friendsDataList[i]->numberOfPosts;
    }
    this->pagesFollowedDataList = new Page*[this->currentUser->numberOfPagesLiked];
    for(int i = 0;i<this->currentUser->numberOfPagesLiked;i++)
    {
        this->pagesFollowedDataList[i] = new Page();
        readDataOfPage(*this->currentUser->LikedPagesList[i],this->pagesFollowedDataList[i]);
        countOfPosts+=pagesFollowedDataList[i]->numberOfPosts;
    }
    this->indexAgainstThePost = new int[countOfPosts];
    this->authorOfPosts = new string*[countOfPosts];
    this->indexOfUser = new int[countOfPosts];

    int index = 0;
    for(int i = 0;i<this->currentUser->numberOfFriends;i++)
    {
        for(int k = 0;k<this->friendsDataList[i]->numberOfPosts;k++)
        {
            this->indexAgainstThePost[index] = k;
            this->indexOfUser[index] = i;
            this->authorOfPosts[index] = new string("USER");
            index++;
        }
    }
    for(int i = 0;i<this->currentUser->numberOfPagesLiked;i++)
    {
        for(int k = 0;k<this->pagesFollowedDataList[i]->numberOfPosts;k++)
        {
            this->indexAgainstThePost[index] = k;
            this->indexOfUser[index] = i;
            this->authorOfPosts[index] = new string("PAGE");
            index++;
        }
    }
    sort();

    QDir dir("Users");
    if (dir.exists())
    {
        QFile readingUsersList("Users/ListOfUsersIdAndPasswords.txt");
        if(readingUsersList.exists())
        {
            if(readingUsersList.open(QIODevice::ReadOnly))
            {
                QTextStream stream(&readingUsersList);
                while(stream.atEnd()==false)
                {
                    QString temp = stream.readLine();
                    ui->listWidget->addItem(temp);
                    if(temp!=QString::fromStdString(this->currentUser->getUserId()))
                    {
                        this->friendUser->setUserId(temp.toStdString());
                    }
                }
            }
            readingUsersList.close();
        }
        QFile readingPagesList("Users/ListOfPages.txt");
        if(readingPagesList.exists())
        {
            if(readingPagesList.open(QIODevice::ReadOnly))
            {
                QTextStream stream(&readingPagesList);
                while(stream.atEnd()==false)
                {
                    ui->listWidget->addItem(stream.readLine());
                }
            }
            readingPagesList.close();
        }
    }
    if(this->friendUser->getUserId() != "")
    {
        if(this->friendUser->ListOfPostsShared)
        {
            ui->label_post->setText(QString::fromStdString(this->friendUser->ListOfPostsShared[indexOfPost]->getPost()));
        }
    }
    if(countOfPosts>0)
    {
        if(*this->authorOfPosts[indexOfPost] == "USER")
        {
            ui->label_post->setText(QString::fromStdString(this->friendsDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->getPost()));
            ui->label_likesCount->setText("LIKES :  " + QString::number(this->friendsDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->noOfLikes));
            ui->label_commentsCount->setText("COMMENTS :  " + QString::number(this->friendsDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->noOfComments));
            ui->label_name->setText(QString::fromStdString(this->friendsDataList[indexOfUser[indexOfPost]]->getUserName()));
        }
        if(*this->authorOfPosts[indexOfPost] == "PAGE")
        {
            ui->label_post->setText(QString::fromStdString(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->getPost()));
            ui->label_likesCount->setText("LIKES :  " + QString::number(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->noOfLikes));
            ui->label_commentsCount->setText("COMMENTS :  " + QString::number(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->noOfComments));
            ui->label_name->setText(QString::fromStdString(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->getTitle()));
        }
    }
    else
    {
        ui->label_post->setText("THERE ARE NO POSTS TO SHOW!");
    }
}

void Home::backToHomeFromProfile()
{
    myProfilePtr->hide();
    if(myProfilePtr)
    {
        delete myProfilePtr;
        myProfilePtr = 0;
    }
    disconnect(myProfilePtr,&MyProfile::backToHome,this,&Home::backToHomeFromProfile);
    this->showMaximized();
}

void Home::on_pushButton_viewProfile_clicked()
{
    this->hide();
    myProfilePtr = new MyProfile();
    myProfilePtr->setUser(this->currentUser);
    connect(myProfilePtr,&MyProfile::backToHome,this,&Home::backToHomeFromProfile);
    myProfilePtr->showMaximized();
}

void Home::on_pushButton_search_clicked()
{
    QString searchText = ui->lineEdit->text();
    bool found = false;
    bool friends = false;
    QDir dir("Users");
    if (dir.exists())
    {
        QFile readingUsersList("Users/ListOfUsersIdAndPasswords.txt");
        if(readingUsersList.exists())
        {
            if(readingUsersList.open(QIODevice::ReadOnly))
            {
                QTextStream stream(&readingUsersList);
                while(stream.atEnd()==false)
                {
                    QString read = stream.readLine();
                    if(read == searchText||read.toUpper() == searchText.toUpper()||read.toLower() == searchText.toLower())
                    {
                        found = true;
                        friends = true;
                        searchText = read;
                    }
                }
            }
            readingUsersList.close();
        }
        QFile readingPagesList("Users/ListOfPages.txt");
        if(readingPagesList.exists())
        {
            if(readingPagesList.open(QIODevice::ReadOnly))
            {
                QTextStream stream(&readingPagesList);
                while(stream.atEnd()==false)
                {
                    QString read = stream.readLine();
                    if(read == searchText||read.toUpper() == searchText.toUpper()||read.toLower() == searchText.toLower())
                    {
                        found = true;
                        friends = false;
                        searchText = read;
                    }
                }
            }
            readingPagesList.close();
        }
    }
    if(found)
    {
        if(friends)
        {
            this->readDataOfUser((ui->lineEdit->text()).toStdString(),this->friendUser);
            friendsAndFollowedPagesPtr = new FriendsAndFollowedPages('F');
            connect(friendsAndFollowedPagesPtr,&FriendsAndFollowedPages::backToHome,this,&Home::backToHomeFromFriendAndFollowedPage);
            friendsAndFollowedPagesPtr->setCurrentUser(this->currentUser);
            friendsAndFollowedPagesPtr->setFriendUser(this->friendUser);
            friendsAndFollowedPagesPtr->setUpThepage();
            this->hide();
            friendsAndFollowedPagesPtr->showMaximized();
        }
        else
        {
            this->readDataOfPage((ui->lineEdit->text().toStdString()),this->followedPage);
            friendsAndFollowedPagesPtr = new FriendsAndFollowedPages('f');
            connect(friendsAndFollowedPagesPtr,&FriendsAndFollowedPages::backToHome,this,&Home::backToHomeFromFriendAndFollowedPage);
            friendsAndFollowedPagesPtr->setCurrentUser(this->currentUser);
            friendsAndFollowedPagesPtr->setPage(this->followedPage);
            friendsAndFollowedPagesPtr->setUpThepage();
            this->hide();
            friendsAndFollowedPagesPtr->showMaximized();
        }
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("SEARCH RESULT");
        msgBox.setText("USER NOT FOUND!");
        msgBox.setIcon(QMessageBox::Information);
        QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
        msgBox.setStyleSheet(customStyle);
        msgBox.exec();
    }
}

void Home::backToHomeFromFriendAndFollowedPage()
{
    friendsAndFollowedPagesPtr->hide();
    disconnect(friendsAndFollowedPagesPtr,&FriendsAndFollowedPages::backToHome,this,&Home::backToHomeFromFriendAndFollowedPage);
    if(friendsAndFollowedPagesPtr)
    {
        delete friendsAndFollowedPagesPtr;
        friendsAndFollowedPagesPtr = 0;
    }
    this->showMaximized();
}

void Home::readDataOfUser(string id, User*& u)
{
    QFile file("Users/"+QString::fromStdString(id)+".txt");
    if(file.exists())
    {
        file.open(QIODevice::ReadOnly);
        QTextStream stream(&file);
            u->setUserId(stream.readLine().toStdString());
            u->setUserName(stream.readLine().toStdString());
            u->setPassword(stream.readLine().toStdString());
            file.close();
    }
    QFile postsCount("POSTS/"+QString::fromStdString(id) + ".txt");
    if(postsCount.exists())
    {
        postsCount.open(QIODevice::ReadOnly);
        QTextStream streama(&postsCount);
        u->numberOfPosts = std::stoi(streama.readLine().toStdString());
        u->ListOfPostsShared = new Post*[u->numberOfPosts];
        for(int i = 0;i<u->numberOfPosts;i++)
        {
            QString postId = streama.readLine();
            QFile posts("POSTS/"+postId+".txt");
            QTextStream streamb(&posts);
            posts.open(QIODevice::ReadOnly);
            QString typeOfPost = streamb.readLine();
            Post * temp;
            if(typeOfPost == "P")
            {
                temp = new Post();
                temp->setPostId(streamb.readLine().toStdString());
                temp->setDisplayName(streamb.readLine().toStdString());
                Date d;
                d.setcurrentDate(streamb.readLine().toStdString());
                temp->setSharedDate(d);
                QString readContent;
                readContent=streamb.readLine();
                while(!streamb.atEnd())
                {
                    readContent+=streamb.readLine();
                }
                temp->setDescription(readContent.toStdString());
            }
            if(typeOfPost == "A")
            {
                Activity * tempActivityPtr = new Activity();
                tempActivityPtr->setPostId(streamb.readLine().toStdString());
                tempActivityPtr->setDisplayName(streamb.readLine().toStdString());
                Date d;
                d.setcurrentDate(streamb.readLine().toStdString());
                tempActivityPtr->setSharedDate(d);
                tempActivityPtr->setType(streamb.readLine().toStdString());
                tempActivityPtr->setValue(streamb.readLine().toStdString());
                QString readContent;
                readContent=streamb.readLine();
                while(!streamb.atEnd())
                {
                    readContent+=streamb.readLine();
                }
                tempActivityPtr->setDescription(readContent.toStdString());
                temp = tempActivityPtr;
            }
            if(typeOfPost == "M")
            {
                Memory * tempMemoryPtr = new Memory();
                tempMemoryPtr->setPostId(streamb.readLine().toStdString());
                tempMemoryPtr->setDisplayName(streamb.readLine().toStdString());
                Date d;
                d.setcurrentDate(streamb.readLine().toStdString());
                tempMemoryPtr->setSharedDate(d);
                QString readDescription;
                QString tempRead;
                readDescription=streamb.readLine();
                while(tempRead!="1")
                {
                    tempRead = streamb.readLine();
                    if(tempRead!="1")
                        readDescription+=tempRead;
                }
                tempMemoryPtr->setDescription(readDescription.toStdString());
                QString readContent;
                readContent=streamb.readLine();
                while(!streamb.atEnd())
                {
                    readContent+=streamb.readLine();
                }
                tempMemoryPtr->setMemoryDescription(readContent.toStdString());
                temp = tempMemoryPtr;
            }
            posts.close();
            if(typeOfPost == "P")
            {
                u->ListOfPostsShared[i] = new Post(*temp);
            }
            else if(typeOfPost == "A")
            {
                Activity * tempActivityPtr = dynamic_cast<Activity*>(temp);
                u->ListOfPostsShared[i] = new Activity(*tempActivityPtr);
            }
            else
            {
                Memory * tempMemoryPtr = dynamic_cast<Memory*>(temp);
                u->ListOfPostsShared[i] = new Memory(*tempMemoryPtr);
            }
        }
    }
    for(int i = 0;i<u->numberOfPosts;i++)
    {
        QFile likesCount("Likes/"+QString::fromStdString(u->ListOfPostsShared[i]->getPostId())+".txt");
        if(likesCount.exists())
        {
            likesCount.open(QIODevice::ReadOnly);
            QTextStream s(&likesCount);
            u->ListOfPostsShared[i]->noOfLikes = stoi((s.readLine()).toStdString());
            u->ListOfPostsShared[i]->likesList = new string*[u->ListOfPostsShared[i]->noOfLikes];
            for(int j = 0;j<u->ListOfPostsShared[i]->noOfLikes;j++)
            {
                u->ListOfPostsShared[i]->likesList[j] = new string((s.readLine()).toStdString());
            }
            likesCount.close();
        }
        QFile cCount("Comments/"+QString::fromStdString(u->ListOfPostsShared[i]->getPostId())+".txt");
        if(cCount.exists())
        {
            cCount.open(QIODevice::ReadOnly);
            QTextStream p(&cCount);
            u->ListOfPostsShared[i]->noOfComments = stoi((p.readLine()).toStdString());
            u->ListOfPostsShared[i]->commentsOnPost = new Comment*[u->ListOfPostsShared[i]->noOfComments];
            for(int j = 0;j<u->ListOfPostsShared[i]->noOfComments;j++)
            {
                QString idd,c,d;
                idd = (p.readLine());
                c = p.readLine();
                d = p.readLine();
                Date dd;
                dd.setcurrentDate(d.toStdString());
                u->ListOfPostsShared[i]->commentsOnPost[j] = new Comment(idd.toStdString(),c.toStdString(),dd);
            }
            cCount.close();
        }
    }
    QFile friendsCount("Friends And Followers/FriendsOf"+QString::fromStdString(id) + ".txt");
    if(friendsCount.exists())
    {
        friendsCount.open(QIODevice::ReadOnly);
        QTextStream s(&friendsCount);
        u->numberOfFriends = stoi((s.readLine()).toStdString());
        u->friendsList = new string*[u->numberOfFriends];
        for(int j = 0;j<u->numberOfFriends;j++)
        {
            u->friendsList[j] = new string((s.readLine()).toStdString());
        }
        friendsCount.close();
    }
    QFile pagesFollowedCount("Friends And Followers/PagesLikedBy"+QString::fromStdString(id) + ".txt");
    if(pagesFollowedCount.exists())
    {
        pagesFollowedCount.open(QIODevice::ReadOnly);
        QTextStream s(&pagesFollowedCount);
        u->numberOfPagesLiked = stoi((s.readLine()).toStdString());
        u->LikedPagesList = new string*[u->numberOfPagesLiked];
        for(int j = 0;j<u->numberOfPagesLiked;j++)
        {
            u->LikedPagesList[j] = new string((s.readLine()).toStdString());
        }
        pagesFollowedCount.close();
    }
}

void Home::readDataOfPage(string id, Page*& u)
{
    QFile file("Users/"+QString::fromStdString(id) + ".txt");
    if(file.exists())
    {
        QTextStream a(&file);
        file.open(QIODevice::ReadOnly);
        u->setPageId(a.readLine().toStdString());
        u->setPageOwner(a.readLine().toStdString());
        u->setTitle(a.readLine().toStdString());
        file.close();
        QFile postsCount("POSTS/"+QString::fromStdString(id) + ".txt");
        if(postsCount.exists())
        {
            postsCount.open(QIODevice::ReadOnly);
            QTextStream streama(&postsCount);
            u->numberOfPosts = std::stoi(streama.readLine().toStdString());
            u->ListOfPostsShared = new Post*[u->numberOfPosts];
            for(int i = 0;i<u->numberOfPosts;i++)
            {
                QString postId = streama.readLine();
                QFile posts("POSTS/"+postId+".txt");
                QTextStream streamb(&posts);
                posts.open(QIODevice::ReadOnly);
                QString typeOfPost = streamb.readLine();
                Post * temp;
                if(typeOfPost == "P")
                {
                    temp = new Post();
                    temp->setPostId(streamb.readLine().toStdString());
                    temp->setDisplayName(streamb.readLine().toStdString());
                    Date d;
                    d.setcurrentDate(streamb.readLine().toStdString());
                    temp->setSharedDate(d);
                    QString readContent;
                    readContent=streamb.readLine();
                    while(!streamb.atEnd())
                    {
                        readContent+=streamb.readLine();
                    }
                    temp->setDescription(readContent.toStdString());
                }
                if(typeOfPost == "A")
                {
                    Activity * tempActivityPtr = new Activity();
                    tempActivityPtr->setPostId(streamb.readLine().toStdString());
                    tempActivityPtr->setDisplayName(streamb.readLine().toStdString());
                    Date d;
                    d.setcurrentDate(streamb.readLine().toStdString());
                    tempActivityPtr->setSharedDate(d);
                    tempActivityPtr->setType(streamb.readLine().toStdString());
                    tempActivityPtr->setValue(streamb.readLine().toStdString());
                    QString readContent;
                    readContent=streamb.readLine();
                    while(!streamb.atEnd())
                    {
                        readContent+=streamb.readLine();
                    }
                    tempActivityPtr->setDescription(readContent.toStdString());
                    temp = tempActivityPtr;
                }
                if(typeOfPost == "M")
                {
                    Memory * tempMemoryPtr = new Memory();
                    tempMemoryPtr->setPostId(streamb.readLine().toStdString());
                    tempMemoryPtr->setDisplayName(streamb.readLine().toStdString());
                    Date d;
                    d.setcurrentDate(streamb.readLine().toStdString());
                    tempMemoryPtr->setSharedDate(d);
                    QString readDescription;
                    QString tempRead;
                    readDescription=streamb.readLine();
                    while(tempRead!="1")
                    {
                        tempRead = streamb.readLine();
                        if(tempRead!="1")
                            readDescription+=tempRead;
                    }
                    tempMemoryPtr->setDescription(readDescription.toStdString());
                    QString readContent;
                    readContent=streamb.readLine();
                    while(!streamb.atEnd())
                    {
                        readContent+=streamb.readLine();
                    }
                    tempMemoryPtr->setMemoryDescription(readContent.toStdString());
                    temp = tempMemoryPtr;
                }
                posts.close();
                if(typeOfPost == "P")
                {
                    u->ListOfPostsShared[i] = new Post(*temp);
                }
                else if(typeOfPost == "A")
                {
                    Activity * tempActivityPtr = dynamic_cast<Activity*>(temp);
                    u->ListOfPostsShared[i] = new Activity(*tempActivityPtr);
                }
                else
                {
                    Memory * tempMemoryPtr = dynamic_cast<Memory*>(temp);
                    u->ListOfPostsShared[i] = new Memory(*tempMemoryPtr);
                }
            }
        }
        for(int i = 0;i<u->numberOfPosts;i++)
        {
            QFile likesCount("Likes/"+QString::fromStdString(u->ListOfPostsShared[i]->getPostId())+".txt");
            if(likesCount.exists())
            {
                likesCount.open(QIODevice::ReadOnly);
                QTextStream s(&likesCount);
                u->ListOfPostsShared[i]->noOfLikes = std::stoi(s.readLine().toStdString());
                u->ListOfPostsShared[i]->likesList = new string*[u->ListOfPostsShared[i]->noOfLikes];
                for(int j = 0;j<u->ListOfPostsShared[i]->noOfLikes;j++)
                {
                    u->ListOfPostsShared[i]->likesList[j] = new string((s.readLine()).toStdString());
                }
                likesCount.close();
            }
            QFile cCount("Comments/"+QString::fromStdString(u->ListOfPostsShared[i]->getPostId())+".txt");
            if(cCount.exists())
            {
                cCount.open(QIODevice::ReadOnly);
                QTextStream p(&cCount);
                u->ListOfPostsShared[i]->noOfComments = std::stoi((p.readLine()).toStdString());
                u->ListOfPostsShared[i]->commentsOnPost = new Comment*[u->ListOfPostsShared[i]->noOfComments];
                for(int j = 0;j<u->ListOfPostsShared[i]->noOfComments;j++)
                {
                    QString idd,c,d;
                    idd = (p.readLine());
                    c = p.readLine();
                    d = p.readLine();
                    Date dd;
                    dd.setcurrentDate(d.toStdString());
                    u->ListOfPostsShared[i]->commentsOnPost[j] = new Comment(idd.toStdString(),c.toStdString(),dd);
                }
                cCount.close();
            }
        }
        QFile friendsCount("Friends And Followers/FollowersOf"+QString::fromStdString(id) + ".txt");
        if(friendsCount.exists())
        {
            friendsCount.open(QIODevice::ReadOnly);
            QTextStream s(&friendsCount);
            u->numberOfFollowers = std::stoi((s.readLine()).toStdString());
            u->followersList = new string*[u->numberOfFollowers];
            for(int j = 0;j<u->numberOfFollowers;j++)
            {
                u->followersList[j] = new string((s.readLine()).toStdString());
            }
            friendsCount.close();
        }
    }
}

void Home::on_pushButton_nextPost_clicked()
{
    if(this->indexOfPost<this->countOfPosts)
    {
        indexOfPost++;
        if(*this->authorOfPosts[indexOfPost] == "USER")
        {
            ui->label_post->setText(QString::fromStdString(this->friendsDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->getPost()));
            ui->label_likesCount->setText("LIKES :  " + QString::number(this->friendsDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->noOfLikes));
            ui->label_commentsCount->setText("COMMENTS :  " + QString::number(this->friendsDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->noOfComments));
            ui->label_name->setText(QString::fromStdString(this->friendsDataList[indexOfUser[indexOfPost]]->getUserName()));
        }
        if(*this->authorOfPosts[indexOfPost] == "PAGE")
        {
            ui->label_post->setText(QString::fromStdString(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->getPost()));
            ui->label_likesCount->setText("LIKES :  " + QString::number(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->noOfLikes));
            ui->label_commentsCount->setText("COMMENTS :  " + QString::number(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->noOfComments));
            ui->label_name->setText(QString::fromStdString(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->getTitle()));
        }
    }
    if(this->indexOfPost==this->countOfPosts-1)
    {
        ui->pushButton_nextPost->setDisabled(true);
    }
    if(this->indexOfPost != 0)
    {
        ui->pushButton_previousPost->setDisabled(false);
    }
}


void Home::on_pushButton_previousPost_clicked()
{
    if(this->indexOfPost>0)
    {
        indexOfPost--;
        if(*this->authorOfPosts[indexOfPost] == "USER")
        {
            ui->label_post->setText(QString::fromStdString(this->friendsDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->getPost()));
            ui->label_likesCount->setText("LIKES :  " + QString::number(this->friendsDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->noOfLikes));
            ui->label_commentsCount->setText("COMMENTS :  " + QString::number(this->friendsDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->noOfComments));
            ui->label_name->setText(QString::fromStdString(this->friendsDataList[indexOfUser[indexOfPost]]->getUserName()));
        }
        if(*this->authorOfPosts[indexOfPost] == "PAGE")
        {
            ui->label_post->setText(QString::fromStdString(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->getPost()));
            ui->label_likesCount->setText("LIKES :  " + QString::number(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->noOfLikes));
            ui->label_commentsCount->setText("COMMENTS :  " + QString::number(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->ListOfPostsShared[indexAgainstThePost[indexOfPost]]->noOfComments));
            ui->label_name->setText(QString::fromStdString(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->getTitle()));
        }
    }
    if(this->indexOfPost==0)
    {
        ui->pushButton_previousPost->setDisabled(true);
    }
    if(this->indexOfPost != this->countOfPosts-1)
    {
        ui->pushButton_nextPost->setDisabled(false);
    }
}

void Home::on_pushButton_like_clicked()
{
    if(*this->authorOfPosts[indexOfPost] == "USER")
    {
        if(this->friendsDataList[indexOfUser[indexOfPost]]->ListOfPostsShared)
        {
            newLikePtr = new LikesWindow('H');
            newLikePtr->setUser(this->currentUser,this->indexAgainstThePost[indexOfPost]);
            newLikePtr->setFriendUser(this->friendsDataList[indexOfUser[indexOfPost]],this->indexAgainstThePost[indexOfPost]);
            connect(newLikePtr,&LikesWindow::backToHome,this,&Home::backToHomeFromAddLike);
            newLikePtr->setUpThePage();
            this->hide();
            newLikePtr->showMaximized();
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setWindowTitle("LIKE WINDOW");
            msgBox.setText("NO POST FOUND!");
            msgBox.setIcon(QMessageBox::Warning);
            QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
            msgBox.setStyleSheet(customStyle);
            msgBox.exec();
        }
    }
    if(*this->authorOfPosts[indexOfPost] == "PAGE")
    {
        if(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->ListOfPostsShared)
        {
            newLikePtr = new LikesWindow('h');
            newLikePtr->setUser(this->currentUser,this->indexAgainstThePost[indexOfPost]);
            newLikePtr->setPage(this->pagesFollowedDataList[indexOfUser[indexOfPost]],this->indexAgainstThePost[indexOfPost]);
            connect(newLikePtr,&LikesWindow::backToHome,this,&Home::backToHomeFromAddLike);
            newLikePtr->setUpThePage();
            this->hide();
            newLikePtr->showMaximized();
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setWindowTitle("LIKE WINDOW");
            msgBox.setText("NO POST FOUND!");
            msgBox.setIcon(QMessageBox::Warning);
            QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
            msgBox.setStyleSheet(customStyle);
            msgBox.exec();
        }
    }
}


void Home::backToHomeFromAddLike()
{
    newLikePtr->hide();
    this->showMaximized();
    this->setUpThePage();
    if(newLikePtr)
    {
        delete newLikePtr;
        newLikePtr = 0;
    }
    disconnect(newLikePtr,&LikesWindow::backToHome,this,&Home::backToHomeFromAddLike);
}

void Home::backToHomeFromAddComment()
{
    newCommentPtr->show();
    this->showMaximized();
    this->setUpThePage();
    if(newCommentPtr)
    {
        delete newCommentPtr;
        this->newCommentPtr = 0;
    }
    disconnect(newCommentPtr,&CommentsWindow::backToHome,this,&Home::backToHomeFromAddComment);
}

void Home::on_pushButton_addComment_clicked()
{
    if(*this->authorOfPosts[indexOfPost] == "USER")
    {
        if(this->friendsDataList[indexOfUser[indexOfPost]]->ListOfPostsShared)
        {
            newCommentPtr = new CommentsWindow('H');
            newCommentPtr->setUser(this->currentUser,this->indexAgainstThePost[indexOfPost]);
            newCommentPtr->setFriendUser(this->friendsDataList[indexOfUser[indexOfPost]],this->indexAgainstThePost[indexOfPost]);
            connect(newCommentPtr,&CommentsWindow::backToHome,this,&Home::backToHomeFromAddComment);
            newCommentPtr->setPage();
            this->hide();
            newCommentPtr->showMaximized();
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setWindowTitle("COMMENTS WINDOW");
            msgBox.setText("NO POST FOUND!");
            msgBox.setIcon(QMessageBox::Warning);
            QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
            msgBox.setStyleSheet(customStyle);
            msgBox.exec();
        }
    }
    if(*this->authorOfPosts[indexOfPost] == "PAGE")
    {
        if(this->pagesFollowedDataList[indexOfUser[indexOfPost]]->ListOfPostsShared)
        {
            newCommentPtr = new CommentsWindow('h');
            newCommentPtr->setUser(this->currentUser,this->indexAgainstThePost[indexOfPost]);
            newCommentPtr->setPagePtr(this->pagesFollowedDataList[indexOfUser[indexOfPost]],this->indexAgainstThePost[indexOfPost]);
            connect(newCommentPtr,&CommentsWindow::backToHome,this,&Home::backToHomeFromAddComment);
            newCommentPtr->setPage();
            this->hide();
            newCommentPtr->showMaximized();
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setWindowTitle("COMMENTS WINDOW");
            msgBox.setText("NO POST FOUND!");
            msgBox.setIcon(QMessageBox::Warning);
            QString customStyle = "QMessageBox {background-color: #ffff;color: #333333;}QPushButton {background-color: #007BFF;color: white;border: none;padding: 5px;}QPushButton:hover {background-color: #0056b3;}";
            msgBox.setStyleSheet(customStyle);
            msgBox.exec();
        }
    }
}


void Home::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    ui->lineEdit->setText(item->text());
}

