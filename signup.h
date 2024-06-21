#pragma once
#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>

namespace Ui {
class SignUp;
}

class SignUp : public QMainWindow
{
    Q_OBJECT

signals:
    void backToLogin();

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

private slots:

    void on_pushButton_login_clicked();

    void on_pushButton_createUser_clicked();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
