#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "signup.h"
#include "home.h"
#include <QString>
#include <QFile>
#include <QDebug>
#include <QDir>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_userName->text();
    QString password = ui->lineEdit_password->text();
    QString id,pass,name;
    QMessageBox msgBox;
    msgBox.setWindowTitle("LOG IN");
    msgBox.setText("User Not Found!");
    msgBox.setIcon(QMessageBox::Information);
    QString customStyle = "QMessageBox { background-color: #ffff; color: #333333; } QPushButton { background-color: #007BFF; color: white; border: none; padding: 5px; }QPushButton:hover { background-color: #0056b3; }";
    msgBox.setStyleSheet(customStyle);
    QDir dir("Users");
    if (dir.exists())
    {
        QString address = "Users/";
        address+=username;
        address+=".txt";
        QFile file(address);
        if(file.open(QIODevice::ReadOnly))
        {
            QTextStream stream(&file);
            while(stream.atEnd()==false)
            {
                id = stream.readLine();
                name = stream.readLine();
                pass = stream.readLine();
                if(username == id && password == pass)
                {
                    Home * h = new Home();
                    h->setUserId(username,name,pass);
                    h->setUpThePage();
                    h->showMaximized();
                    this->hide();
                }
            }
        }
        else
        {
            msgBox.exec();
        }
        file.close();
    }
}

void MainWindow::backToMainWindowFromSignUp()
{
    signupPtr->hide();
    this->showMaximized();
    disconnect(signupPtr,&SignUp::backToLogin,this,&MainWindow::backToMainWindowFromSignUp);
    signupPtr->~SignUp();
    signupPtr = 0;
}

void MainWindow::on_pushButton_signUp_clicked()
{
    signupPtr = new SignUp();
    connect(signupPtr,&SignUp::backToLogin,this,&MainWindow::backToMainWindowFromSignUp);
    signupPtr->showMaximized();
    this->hide();
}
