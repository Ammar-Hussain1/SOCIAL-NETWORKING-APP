/********************************************************************************
** Form generated from reading UI file 'commentswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTSWINDOW_H
#define UI_COMMENTSWINDOW_H

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

class Ui_CommentsWindow
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
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_AddComment;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *CommentsWindow)
    {
        if (CommentsWindow->objectName().isEmpty())
            CommentsWindow->setObjectName("CommentsWindow");
        CommentsWindow->resize(800, 600);
        CommentsWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31);"));
        centralwidget = new QWidget(CommentsWindow);
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
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        listWidget->setFont(font1);
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
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setLayoutMode(QListView::Batched);
        listWidget->setBatchSize(100);

        verticalLayout_6->addWidget(listWidget);


        verticalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(label_2, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_9->addLayout(horizontalLayout_11);

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


        horizontalLayout_9->addLayout(horizontalLayout_12);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        horizontalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_9->setStretch(0, 2);
        horizontalLayout_9->setStretch(1, 8);
        horizontalLayout_9->setStretch(2, 2);

        verticalLayout_8->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        horizontalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton_AddComment = new QPushButton(centralwidget);
        pushButton_AddComment->setObjectName("pushButton_AddComment");
        pushButton_AddComment->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_8->addWidget(pushButton_AddComment, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_5->setStretch(0, 3);
        horizontalLayout_5->setStretch(1, 3);
        horizontalLayout_5->setStretch(2, 3);

        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_2->setStretch(0, 5);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 2);

        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 10);
        CommentsWindow->setCentralWidget(centralwidget);

        retranslateUi(CommentsWindow);

        QMetaObject::connectSlotsByName(CommentsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CommentsWindow)
    {
        CommentsWindow->setWindowTitle(QCoreApplication::translate("CommentsWindow", "MainWindow", nullptr));
        pushButton_Profile->setText(QCoreApplication::translate("CommentsWindow", "PROFILE", nullptr));
        label->setText(QCoreApplication::translate("CommentsWindow", "COMMENTS", nullptr));
        label_2->setText(QCoreApplication::translate("CommentsWindow", "COMMENT :", nullptr));
        lineEdit->setText(QString());
        pushButton_AddComment->setText(QCoreApplication::translate("CommentsWindow", "ADD COMMENT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommentsWindow: public Ui_CommentsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTSWINDOW_H
