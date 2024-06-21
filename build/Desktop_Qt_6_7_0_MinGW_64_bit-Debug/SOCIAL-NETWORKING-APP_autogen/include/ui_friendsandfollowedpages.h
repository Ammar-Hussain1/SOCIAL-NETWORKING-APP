/********************************************************************************
** Form generated from reading UI file 'friendsandfollowedpages.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDSANDFOLLOWEDPAGES_H
#define UI_FRIENDSANDFOLLOWEDPAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendsAndFollowedPages
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_heading;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_id;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_type;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_name;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_Follow;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_status;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_22;
    QHBoxLayout *horizontalLayout_24;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_post;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *pushButton_previousPost;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *pushButton_like;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_likesCount;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *pushButton_addComment;
    QHBoxLayout *horizontalLayout_commentsCount;
    QLabel *label_commentsCount;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *pushButton_nextPost;

    void setupUi(QMainWindow *FriendsAndFollowedPages)
    {
        if (FriendsAndFollowedPages->objectName().isEmpty())
            FriendsAndFollowedPages->setObjectName("FriendsAndFollowedPages");
        FriendsAndFollowedPages->resize(800, 600);
        FriendsAndFollowedPages->setStyleSheet(QString::fromUtf8("background-color:rgb(31,31,31);"));
        centralwidget = new QWidget(FriendsAndFollowedPages);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
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

        horizontalLayout_3->addWidget(pushButton, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_heading = new QLabel(centralwidget);
        label_heading->setObjectName("label_heading");
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label_heading->setFont(font);
        label_heading->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_heading, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_id = new QLabel(centralwidget);
        label_id->setObjectName("label_id");
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label_id->setFont(font1);
        label_id->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"margin-right:20px;"));

        horizontalLayout_2->addWidget(label_id, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_type = new QLabel(centralwidget);
        label_type->setObjectName("label_type");
        label_type->setFont(font1);
        label_type->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(label_type, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_name = new QLabel(centralwidget);
        label_name->setObjectName("label_name");
        label_name->setFont(font1);
        label_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(label_name, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_6->addLayout(horizontalLayout_9);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        horizontalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(1, 2);
        horizontalLayout_6->setStretch(2, 5);
        horizontalLayout_6->setStretch(3, 5);

        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        pushButton_Follow = new QPushButton(centralwidget);
        pushButton_Follow->setObjectName("pushButton_Follow");
        pushButton_Follow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_12->addWidget(pushButton_Follow, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_10->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_status = new QLabel(centralwidget);
        label_status->setObjectName("label_status");
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        label_status->setFont(font2);
        label_status->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_13->addWidget(label_status);


        horizontalLayout_10->addLayout(horizontalLayout_13);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);


        horizontalLayout_10->addLayout(horizontalLayout_11);

        horizontalLayout_10->setStretch(0, 2);
        horizontalLayout_10->setStretch(1, 4);
        horizontalLayout_10->setStretch(2, 7);
        horizontalLayout_10->setStretch(3, 2);

        verticalLayout_8->addLayout(horizontalLayout_10);


        verticalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_3);


        horizontalLayout_22->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_25->addWidget(label_4);


        horizontalLayout_22->addLayout(horizontalLayout_25);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_4);


        horizontalLayout_22->addLayout(horizontalLayout_23);


        verticalLayout_7->addLayout(horizontalLayout_22);


        verticalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_post = new QLabel(centralwidget);
        label_post->setObjectName("label_post");
        label_post->setFont(font1);
        label_post->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color:#333333;"));
        label_post->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_post);


        verticalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
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

        horizontalLayout_17->addWidget(pushButton_previousPost, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_15->addLayout(horizontalLayout_17);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_6);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
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

        horizontalLayout_21->addWidget(pushButton_like, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_15->addLayout(horizontalLayout_21);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_likesCount = new QLabel(centralwidget);
        label_likesCount->setObjectName("label_likesCount");
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label_likesCount->setFont(font3);
        label_likesCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_20->addWidget(label_likesCount, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_15->addLayout(horizontalLayout_20);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
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

        horizontalLayout_19->addWidget(pushButton_addComment, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_15->addLayout(horizontalLayout_19);

        horizontalLayout_commentsCount = new QHBoxLayout();
        horizontalLayout_commentsCount->setObjectName("horizontalLayout_commentsCount");
        label_commentsCount = new QLabel(centralwidget);
        label_commentsCount->setObjectName("label_commentsCount");
        label_commentsCount->setFont(font3);
        label_commentsCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_commentsCount->addWidget(label_commentsCount, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_15->addLayout(horizontalLayout_commentsCount);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_7);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
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

        horizontalLayout_16->addWidget(pushButton_nextPost, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_15->addLayout(horizontalLayout_16);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 4);
        horizontalLayout_15->setStretch(2, 1);
        horizontalLayout_15->setStretch(3, 2);
        horizontalLayout_15->setStretch(4, 1);
        horizontalLayout_15->setStretch(5, 2);
        horizontalLayout_15->setStretch(6, 4);
        horizontalLayout_15->setStretch(7, 1);

        horizontalLayout_14->addLayout(horizontalLayout_15);


        verticalLayout_5->addLayout(horizontalLayout_14);


        verticalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 2);
        verticalLayout_2->setStretch(3, 5);
        verticalLayout_2->setStretch(4, 2);

        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 9);
        FriendsAndFollowedPages->setCentralWidget(centralwidget);

        retranslateUi(FriendsAndFollowedPages);

        QMetaObject::connectSlotsByName(FriendsAndFollowedPages);
    } // setupUi

    void retranslateUi(QMainWindow *FriendsAndFollowedPages)
    {
        FriendsAndFollowedPages->setWindowTitle(QCoreApplication::translate("FriendsAndFollowedPages", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("FriendsAndFollowedPages", "HOME", nullptr));
        label_heading->setText(QCoreApplication::translate("FriendsAndFollowedPages", "PAGE", nullptr));
        label_id->setText(QCoreApplication::translate("FriendsAndFollowedPages", "ID : ", nullptr));
        label_type->setText(QCoreApplication::translate("FriendsAndFollowedPages", "TITLE : ", nullptr));
        label_name->setText(QCoreApplication::translate("FriendsAndFollowedPages", "title", nullptr));
        pushButton_Follow->setText(QCoreApplication::translate("FriendsAndFollowedPages", "FOLLOW", nullptr));
        label_status->setText(QCoreApplication::translate("FriendsAndFollowedPages", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("FriendsAndFollowedPages", "POSTS", nullptr));
        label_post->setText(QString());
        pushButton_previousPost->setText(QCoreApplication::translate("FriendsAndFollowedPages", "PREVIOUS POST", nullptr));
        pushButton_like->setText(QCoreApplication::translate("FriendsAndFollowedPages", "LIKE", nullptr));
        label_likesCount->setText(QCoreApplication::translate("FriendsAndFollowedPages", "LIKES : ", nullptr));
        pushButton_addComment->setText(QCoreApplication::translate("FriendsAndFollowedPages", "COMMENT", nullptr));
        label_commentsCount->setText(QCoreApplication::translate("FriendsAndFollowedPages", "COMMENTS : ", nullptr));
        pushButton_nextPost->setText(QCoreApplication::translate("FriendsAndFollowedPages", "NEXT POST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FriendsAndFollowedPages: public Ui_FriendsAndFollowedPages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDSANDFOLLOWEDPAGES_H
