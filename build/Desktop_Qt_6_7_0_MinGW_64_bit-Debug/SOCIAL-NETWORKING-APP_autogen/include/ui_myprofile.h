/********************************************************************************
** Form generated from reading UI file 'myprofile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPROFILE_H
#define UI_MYPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyProfile
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_goToPage;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_userId;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_name;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_13;
    QListWidget *listWidget_friends;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_15;
    QListWidget *listWidget_likedPages;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *pushButton_addPost;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *pushButton_addActivity;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *pushButton_memory;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *pushButton_addCreatePage;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_Post;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_26;
    QHBoxLayout *horizontalLayout_28;
    QPushButton *pushButton_previousPost;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_like;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_likesCount;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_addComment;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_commentsCount;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *pushButton_nextPost;

    void setupUi(QMainWindow *MyProfile)
    {
        if (MyProfile->objectName().isEmpty())
            MyProfile->setObjectName("MyProfile");
        MyProfile->resize(877, 600);
        MyProfile->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31);\n"
""));
        centralwidget = new QWidget(MyProfile);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"	margin-top:10px;\n"
"	margin-left:10px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignTop);


        horizontalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_goToPage = new QPushButton(centralwidget);
        pushButton_goToPage->setObjectName("pushButton_goToPage");
        pushButton_goToPage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"	margin-top:10px;\n"
"	margin-left:10px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_goToPage, 0, Qt::AlignRight|Qt::AlignTop);


        horizontalLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_12->addWidget(label_2);


        horizontalLayout_9->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_userId = new QLabel(centralwidget);
        label_userId->setObjectName("label_userId");
        QFont font2;
        font2.setPointSize(18);
        label_userId->setFont(font2);
        label_userId->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(label_userId);


        horizontalLayout_9->addLayout(horizontalLayout_11);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 9);

        verticalLayout_11->addLayout(horizontalLayout_9);


        verticalLayout_8->addLayout(verticalLayout_11);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_16->addWidget(label_3, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_13->addLayout(horizontalLayout_16);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_name = new QLabel(centralwidget);
        label_name->setObjectName("label_name");
        label_name->setFont(font2);
        label_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_14->addWidget(label_name);


        horizontalLayout_13->addLayout(horizontalLayout_14);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 9);

        verticalLayout_10->addLayout(horizontalLayout_13);


        verticalLayout_8->addLayout(verticalLayout_10);


        verticalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_5, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        listWidget_friends = new QListWidget(centralwidget);
        listWidget_friends->setObjectName("listWidget_friends");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        listWidget_friends->setFont(font4);
        listWidget_friends->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: #333333;\n"
"    border: 1px solid #666666;\n"
"    color: #CCCCCC;\n"
"    font-family: Arial;\n"
"    font-size: 12px;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    background-color: #444444;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: #555555;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    background-color: #007ACC;\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"QListWidget::item:selected:!active {\n"
"    background-color: #007ACC;\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"QListWidget::item:selected:active {\n"
"    background-color: #005C99;\n"
"}\n"
""));
        listWidget_friends->setItemAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(listWidget_friends);


        verticalLayout_5->addLayout(verticalLayout_13);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 3);

        horizontalLayout_10->addLayout(verticalLayout_5);


        horizontalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_17->addWidget(label_6, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_14->addLayout(verticalLayout_17);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        listWidget_likedPages = new QListWidget(centralwidget);
        listWidget_likedPages->setObjectName("listWidget_likedPages");
        listWidget_likedPages->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: #333333;\n"
"    border: 1px solid #666666;\n"
"    color: #CCCCCC;\n"
"    font-family: Arial;\n"
"    font-size: 12px;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    background-color: #444444;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: #555555;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    background-color: #007ACC;\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"QListWidget::item:selected:!active {\n"
"    background-color: #007ACC;\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"QListWidget::item:selected:active {\n"
"    background-color: #005C99;\n"
"}\n"
""));
        listWidget_likedPages->setItemAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(listWidget_likedPages);


        verticalLayout_14->addLayout(verticalLayout_15);

        verticalLayout_14->setStretch(0, 1);
        verticalLayout_14->setStretch(1, 3);

        horizontalLayout_7->addLayout(verticalLayout_14);


        horizontalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_5->setStretch(0, 5);
        horizontalLayout_5->setStretch(1, 5);

        verticalLayout_9->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName("verticalLayout_19");
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        pushButton_addPost = new QPushButton(centralwidget);
        pushButton_addPost->setObjectName("pushButton_addPost");
        pushButton_addPost->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;\n"
"}"));

        horizontalLayout_21->addWidget(pushButton_addPost, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_19->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        pushButton_addActivity = new QPushButton(centralwidget);
        pushButton_addActivity->setObjectName("pushButton_addActivity");
        pushButton_addActivity->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;\n"
"}"));

        horizontalLayout_22->addWidget(pushButton_addActivity, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_19->addLayout(horizontalLayout_22);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        pushButton_memory = new QPushButton(centralwidget);
        pushButton_memory->setObjectName("pushButton_memory");
        pushButton_memory->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;\n"
"}"));

        horizontalLayout_17->addWidget(pushButton_memory, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_19->addLayout(horizontalLayout_17);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        pushButton_addCreatePage = new QPushButton(centralwidget);
        pushButton_addCreatePage->setObjectName("pushButton_addCreatePage");
        pushButton_addCreatePage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;\n"
"}"));

        horizontalLayout_20->addWidget(pushButton_addCreatePage, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_19->addLayout(horizontalLayout_20);


        verticalLayout_19->addLayout(horizontalLayout_19);


        verticalLayout_7->addLayout(verticalLayout_19);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName("verticalLayout_21");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        label_Post = new QLabel(centralwidget);
        label_Post->setObjectName("label_Post");
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(true);
        label_Post->setFont(font5);
        label_Post->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #333333;"));
        label_Post->setAlignment(Qt::AlignCenter);

        horizontalLayout_25->addWidget(label_Post);


        horizontalLayout_18->addLayout(horizontalLayout_25);

        horizontalLayout_18->setStretch(0, 10);

        verticalLayout_21->addLayout(horizontalLayout_18);


        verticalLayout_18->addLayout(verticalLayout_21);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName("verticalLayout_20");
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        pushButton_previousPost = new QPushButton(centralwidget);
        pushButton_previousPost->setObjectName("pushButton_previousPost");
        pushButton_previousPost->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;\n"
"}"));

        horizontalLayout_28->addWidget(pushButton_previousPost, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_26->addLayout(horizontalLayout_28);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_like = new QPushButton(centralwidget);
        pushButton_like->setObjectName("pushButton_like");
        pushButton_like->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_like, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_26->addLayout(horizontalLayout_3);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        label_likesCount = new QLabel(centralwidget);
        label_likesCount->setObjectName("label_likesCount");
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        label_likesCount->setFont(font6);
        label_likesCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_29->addWidget(label_likesCount);


        horizontalLayout_26->addLayout(horizontalLayout_29);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton_addComment = new QPushButton(centralwidget);
        pushButton_addComment->setObjectName("pushButton_addComment");
        pushButton_addComment->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;\n"
"}"));

        horizontalLayout_8->addWidget(pushButton_addComment, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_26->addLayout(horizontalLayout_8);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName("horizontalLayout_30");
        label_commentsCount = new QLabel(centralwidget);
        label_commentsCount->setObjectName("label_commentsCount");
        label_commentsCount->setFont(font6);
        label_commentsCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_30->addWidget(label_commentsCount);


        horizontalLayout_26->addLayout(horizontalLayout_30);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_2);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        pushButton_nextPost = new QPushButton(centralwidget);
        pushButton_nextPost->setObjectName("pushButton_nextPost");
        pushButton_nextPost->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;\n"
"}"));

        horizontalLayout_27->addWidget(pushButton_nextPost, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_26->addLayout(horizontalLayout_27);

        horizontalLayout_26->setStretch(0, 1);
        horizontalLayout_26->setStretch(2, 1);
        horizontalLayout_26->setStretch(3, 1);
        horizontalLayout_26->setStretch(4, 1);
        horizontalLayout_26->setStretch(5, 1);
        horizontalLayout_26->setStretch(7, 1);

        verticalLayout_20->addLayout(horizontalLayout_26);


        verticalLayout_18->addLayout(verticalLayout_20);

        verticalLayout_18->setStretch(0, 5);
        verticalLayout_18->setStretch(1, 2);

        verticalLayout_7->addLayout(verticalLayout_18);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 5);

        verticalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_4->setStretch(0, 2);
        verticalLayout_4->setStretch(1, 4);
        verticalLayout_4->setStretch(2, 8);

        verticalLayout_2->addLayout(verticalLayout_4);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);
        MyProfile->setCentralWidget(centralwidget);

        retranslateUi(MyProfile);

        QMetaObject::connectSlotsByName(MyProfile);
    } // setupUi

    void retranslateUi(QMainWindow *MyProfile)
    {
        MyProfile->setWindowTitle(QCoreApplication::translate("MyProfile", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MyProfile", "GO TO HOME", nullptr));
        label->setText(QCoreApplication::translate("MyProfile", "PROFILE", nullptr));
        pushButton_goToPage->setText(QCoreApplication::translate("MyProfile", "GO TO MY PAGE", nullptr));
        label_2->setText(QCoreApplication::translate("MyProfile", "USER ID : ", nullptr));
        label_userId->setText(QCoreApplication::translate("MyProfile", "USER00", nullptr));
        label_3->setText(QCoreApplication::translate("MyProfile", "NAME : ", nullptr));
        label_name->setText(QCoreApplication::translate("MyProfile", "Name", nullptr));
        label_5->setText(QCoreApplication::translate("MyProfile", "FRIENDS LIST", nullptr));
        label_6->setText(QCoreApplication::translate("MyProfile", "LIKED PAGES", nullptr));
        pushButton_addPost->setText(QCoreApplication::translate("MyProfile", "ADD POST", nullptr));
        pushButton_addActivity->setText(QCoreApplication::translate("MyProfile", "ADD ACTIVITY", nullptr));
        pushButton_memory->setText(QCoreApplication::translate("MyProfile", "MEMORY", nullptr));
        pushButton_addCreatePage->setText(QCoreApplication::translate("MyProfile", "CREATE A PAGE", nullptr));
        label_Post->setText(QString());
        pushButton_previousPost->setText(QCoreApplication::translate("MyProfile", "PREVIOUS POST", nullptr));
        pushButton_like->setText(QCoreApplication::translate("MyProfile", "LIKE", nullptr));
        label_likesCount->setText(QCoreApplication::translate("MyProfile", "LIKES : ", nullptr));
        pushButton_addComment->setText(QCoreApplication::translate("MyProfile", "COMMENT", nullptr));
        label_commentsCount->setText(QCoreApplication::translate("MyProfile", "COMMENTS :", nullptr));
        pushButton_nextPost->setText(QCoreApplication::translate("MyProfile", "NEXT POST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyProfile: public Ui_MyProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPROFILE_H
