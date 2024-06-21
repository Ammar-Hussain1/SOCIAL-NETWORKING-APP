/********************************************************************************
** Form generated from reading UI file 'likeswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIKESWINDOW_H
#define UI_LIKESWINDOW_H

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

class Ui_LikesWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_goBack;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_status;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_like;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *LikesWindow)
    {
        if (LikesWindow->objectName().isEmpty())
            LikesWindow->setObjectName("LikesWindow");
        LikesWindow->resize(800, 600);
        LikesWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(31,31,31);"));
        centralwidget = new QWidget(LikesWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_goBack = new QPushButton(centralwidget);
        pushButton_goBack->setObjectName("pushButton_goBack");
        pushButton_goBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"	margin-top:20px;\n"
"	margin-left:20px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_goBack, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
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

        verticalLayout_5->addWidget(listWidget);


        verticalLayout_2->addLayout(verticalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_status = new QLabel(centralwidget);
        label_status->setObjectName("label_status");
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        label_status->setFont(font1);
        label_status->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:#333333;"));

        verticalLayout_7->addWidget(label_status, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_2->addLayout(verticalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        horizontalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
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

        horizontalLayout_8->addWidget(pushButton_like, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_5->setStretch(0, 2);
        horizontalLayout_5->setStretch(1, 2);
        horizontalLayout_5->setStretch(2, 2);

        verticalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_2->setStretch(0, 4);
        verticalLayout_2->setStretch(2, 2);
        verticalLayout_2->setStretch(4, 2);

        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(2, 9);
        LikesWindow->setCentralWidget(centralwidget);

        retranslateUi(LikesWindow);

        QMetaObject::connectSlotsByName(LikesWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LikesWindow)
    {
        LikesWindow->setWindowTitle(QCoreApplication::translate("LikesWindow", "MainWindow", nullptr));
        pushButton_goBack->setText(QCoreApplication::translate("LikesWindow", "PROFILE", nullptr));
        label->setText(QCoreApplication::translate("LikesWindow", "LIKES LIST", nullptr));
        label_status->setText(QString());
        pushButton_like->setText(QCoreApplication::translate("LikesWindow", "LIKE THIS POST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LikesWindow: public Ui_LikesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIKESWINDOW_H
