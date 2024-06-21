/********************************************************************************
** Form generated from reading UI file 'mypage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPAGE_H
#define UI_MYPAGE_H

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

class Ui_MyPage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_Profile;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_18;
    QPushButton *pushButton_addActivity;
    QVBoxLayout *verticalLayout_15;
    QPushButton *pushButton_addPost;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_title;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_16;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_10;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_20;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_Post;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_previousPost;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton_like;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_likesCount;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_addComment;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_commentsCount;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *pushButton_memory;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_nextPost;

    void setupUi(QMainWindow *MyPage)
    {
        if (MyPage->objectName().isEmpty())
            MyPage->setObjectName("MyPage");
        MyPage->resize(877, 600);
        MyPage->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31);"));
        centralwidget = new QWidget(MyPage);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_Profile = new QPushButton(centralwidget);
        pushButton_Profile->setObjectName("pushButton_Profile");
        pushButton_Profile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_3->addWidget(pushButton_Profile, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName("verticalLayout_18");
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

        verticalLayout_18->addWidget(pushButton_addActivity, 0, Qt::AlignRight|Qt::AlignBottom);


        verticalLayout_14->addLayout(verticalLayout_18);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
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

        verticalLayout_15->addWidget(pushButton_addPost, 0, Qt::AlignRight|Qt::AlignTop);


        verticalLayout_14->addLayout(verticalLayout_15);


        horizontalLayout_2->addLayout(verticalLayout_14);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_title = new QLabel(centralwidget);
        label_title->setObjectName("label_title");
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        label_title->setFont(font1);
        label_title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(label_title);


        horizontalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_5->setStretch(0, 2);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_4);


        horizontalLayout_16->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_19->addWidget(label_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_16->addLayout(horizontalLayout_19);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_3);


        horizontalLayout_16->addLayout(horizontalLayout_17);

        horizontalLayout_16->setStretch(0, 1);
        horizontalLayout_16->setStretch(1, 3);
        horizontalLayout_16->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_16);


        verticalLayout_7->addLayout(verticalLayout_11);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
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
        listWidget->setItemAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(listWidget);


        verticalLayout_7->addLayout(verticalLayout_10);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 3);

        verticalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_6);


        horizontalLayout_20->addLayout(horizontalLayout_21);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_23->addWidget(label_6, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_20->addLayout(horizontalLayout_23);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_5);


        horizontalLayout_20->addLayout(horizontalLayout_22);

        horizontalLayout_20->setStretch(0, 1);
        horizontalLayout_20->setStretch(1, 3);
        horizontalLayout_20->setStretch(2, 1);

        verticalLayout_13->addLayout(horizontalLayout_20);


        verticalLayout_6->addLayout(verticalLayout_13);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        label_Post = new QLabel(centralwidget);
        label_Post->setObjectName("label_Post");
        label_Post->setFont(font2);
        label_Post->setStyleSheet(QString::fromUtf8("background-color:#333333;\n"
"color: rgb(255, 255, 255);"));
        label_Post->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_Post);


        verticalLayout_6->addLayout(verticalLayout_12);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 3);

        verticalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
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

        horizontalLayout_10->addWidget(pushButton_previousPost, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_8->addLayout(horizontalLayout_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
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

        horizontalLayout_13->addWidget(pushButton_like, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_8->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_likesCount = new QLabel(centralwidget);
        label_likesCount->setObjectName("label_likesCount");
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label_likesCount->setFont(font3);
        label_likesCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_14->addWidget(label_likesCount, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_8->addLayout(horizontalLayout_14);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
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

        horizontalLayout_12->addWidget(pushButton_addComment, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_8->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_commentsCount = new QLabel(centralwidget);
        label_commentsCount->setObjectName("label_commentsCount");
        label_commentsCount->setFont(font3);
        label_commentsCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(label_commentsCount, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_8->addLayout(horizontalLayout_11);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
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

        horizontalLayout_15->addWidget(pushButton_memory, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_8->addLayout(horizontalLayout_15);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
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

        horizontalLayout_9->addWidget(pushButton_nextPost, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_8->addLayout(horizontalLayout_9);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 1);
        horizontalLayout_8->setStretch(2, 1);
        horizontalLayout_8->setStretch(3, 1);
        horizontalLayout_8->setStretch(4, 1);
        horizontalLayout_8->setStretch(5, 1);
        horizontalLayout_8->setStretch(6, 1);

        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 3);
        verticalLayout_2->setStretch(2, 4);
        verticalLayout_2->setStretch(3, 1);

        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 10);
        MyPage->setCentralWidget(centralwidget);

        retranslateUi(MyPage);

        QMetaObject::connectSlotsByName(MyPage);
    } // setupUi

    void retranslateUi(QMainWindow *MyPage)
    {
        MyPage->setWindowTitle(QCoreApplication::translate("MyPage", "MainWindow", nullptr));
        pushButton_Profile->setText(QCoreApplication::translate("MyPage", "PROFILE", nullptr));
        label->setText(QCoreApplication::translate("MyPage", "MY PAGE", nullptr));
        pushButton_addActivity->setText(QCoreApplication::translate("MyPage", "ADD ACTIVITY", nullptr));
        pushButton_addPost->setText(QCoreApplication::translate("MyPage", "ADD POST", nullptr));
        label_title->setText(QCoreApplication::translate("MyPage", "TITLE : ", nullptr));
        label_3->setText(QCoreApplication::translate("MyPage", "FOLLOWERS LIST", nullptr));
        label_6->setText(QCoreApplication::translate("MyPage", "POSTS", nullptr));
        label_Post->setText(QString());
        pushButton_previousPost->setText(QCoreApplication::translate("MyPage", "PREVIOUS POST", nullptr));
        pushButton_like->setText(QCoreApplication::translate("MyPage", "LIKE", nullptr));
        label_likesCount->setText(QCoreApplication::translate("MyPage", "LIKES : ", nullptr));
        pushButton_addComment->setText(QCoreApplication::translate("MyPage", "COMMENT", nullptr));
        label_commentsCount->setText(QCoreApplication::translate("MyPage", "COMMENTS : ", nullptr));
        pushButton_memory->setText(QCoreApplication::translate("MyPage", "MEMORY", nullptr));
        pushButton_nextPost->setText(QCoreApplication::translate("MyPage", "NEXT POST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyPage: public Ui_MyPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPAGE_H
