/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_viewProfile;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_currentUser;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_search;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_8;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_name;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_post;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *pushButton_previousPost;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *pushButton_like;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_likesCount;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *pushButton_addComment;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_commentsCount;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *pushButton_nextPost;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName("Home");
        Home->resize(836, 600);
        Home->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31);\n"
""));
        centralwidget = new QWidget(Home);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_viewProfile = new QPushButton(centralwidget);
        pushButton_viewProfile->setObjectName("pushButton_viewProfile");
        pushButton_viewProfile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_4->addWidget(pushButton_viewProfile, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignTop);


        horizontalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_currentUser = new QLabel(centralwidget);
        label_currentUser->setObjectName("label_currentUser");
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        label_currentUser->setFont(font1);
        label_currentUser->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_currentUser, 0, Qt::AlignRight);


        horizontalLayout->addLayout(horizontalLayout_5);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(2, 3);

        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        horizontalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #333333; \n"
"    border-radius: 10px;\n"
"    padding: 8px 12px;\n"
"    font-size: 16px;\n"
"    color: #FFFFFF; \n"
"    background-color: #555555; \n"
"    height: 40px; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #4CAF50; \n"
"    background-color: #666666; \n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #AAAAAA; \n"
"}"));

        horizontalLayout_12->addWidget(lineEdit);


        horizontalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_search = new QPushButton(centralwidget);
        pushButton_search->setObjectName("pushButton_search");
        pushButton_search->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_3->addWidget(pushButton_search, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 4);
        horizontalLayout_2->setStretch(2, 2);

        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);


        horizontalLayout_8->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(label_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_8->addLayout(horizontalLayout_11);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        horizontalLayout_8->addLayout(horizontalLayout_9);

        horizontalLayout_8->setStretch(0, 2);
        horizontalLayout_8->setStretch(1, 4);
        horizontalLayout_8->setStretch(2, 2);

        verticalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(verticalLayout_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
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

        verticalLayout_8->addWidget(listWidget);


        verticalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_name = new QLabel(centralwidget);
        label_name->setObjectName("label_name");
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label_name->setFont(font2);
        label_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_name);


        horizontalLayout_13->addLayout(horizontalLayout_15);

        horizontalLayout_13->setStretch(0, 3);

        verticalLayout_7->addLayout(horizontalLayout_13);


        verticalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_post = new QLabel(centralwidget);
        label_post->setObjectName("label_post");
        label_post->setFont(font2);
        label_post->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:#333333;"));
        label_post->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_post);


        verticalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
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

        horizontalLayout_19->addWidget(pushButton_previousPost, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_17->addLayout(horizontalLayout_19);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_6);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
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

        horizontalLayout_23->addWidget(pushButton_like, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_17->addLayout(horizontalLayout_23);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        label_likesCount = new QLabel(centralwidget);
        label_likesCount->setObjectName("label_likesCount");
        label_likesCount->setFont(font1);
        label_likesCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_22->addWidget(label_likesCount, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_17->addLayout(horizontalLayout_22);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
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

        horizontalLayout_21->addWidget(pushButton_addComment, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_17->addLayout(horizontalLayout_21);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_commentsCount = new QLabel(centralwidget);
        label_commentsCount->setObjectName("label_commentsCount");
        label_commentsCount->setFont(font1);
        label_commentsCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_20->addWidget(label_commentsCount, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_17->addLayout(horizontalLayout_20);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_5);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
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

        horizontalLayout_18->addWidget(pushButton_nextPost, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_17->addLayout(horizontalLayout_18);

        horizontalLayout_17->setStretch(0, 1);
        horizontalLayout_17->setStretch(3, 1);
        horizontalLayout_17->setStretch(4, 2);
        horizontalLayout_17->setStretch(5, 1);
        horizontalLayout_17->setStretch(6, 2);
        horizontalLayout_17->setStretch(9, 1);

        verticalLayout_4->addLayout(horizontalLayout_17);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 2);
        verticalLayout_2->setStretch(3, 1);
        verticalLayout_2->setStretch(4, 4);
        verticalLayout_2->setStretch(5, 2);

        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);
        Home->setCentralWidget(centralwidget);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "MainWindow", nullptr));
        pushButton_viewProfile->setText(QCoreApplication::translate("Home", "VIEW PROFILE", nullptr));
        label->setText(QCoreApplication::translate("Home", "SOCIAL APP", nullptr));
        label_currentUser->setText(QCoreApplication::translate("Home", "CURRENT USER : ", nullptr));
        pushButton_search->setText(QCoreApplication::translate("Home", "SEARCH", nullptr));
        label_3->setText(QCoreApplication::translate("Home", "LIST OF USERS AND PAGES", nullptr));
        label_name->setText(QCoreApplication::translate("Home", "NAME", nullptr));
        label_post->setText(QCoreApplication::translate("Home", "POST", nullptr));
        pushButton_previousPost->setText(QCoreApplication::translate("Home", "PREVIOUS POST", nullptr));
        pushButton_like->setText(QCoreApplication::translate("Home", "LIKE", nullptr));
        label_likesCount->setText(QCoreApplication::translate("Home", "LIKES : ", nullptr));
        pushButton_addComment->setText(QCoreApplication::translate("Home", "COMMENT", nullptr));
        label_commentsCount->setText(QCoreApplication::translate("Home", "COMMENTS : ", nullptr));
        pushButton_nextPost->setText(QCoreApplication::translate("Home", "NEXT POST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
