#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "signup.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_signUp_clicked();

    void backToMainWindowFromSignUp();

private:
    Ui::MainWindow *ui;
    SignUp * signupPtr;
};
#endif // MAINWINDOW_H
