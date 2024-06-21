#ifndef MEMORYWINDOW_H
#define MEMORYWINDOW_H
#include <QString>
#include <string.h>
#include "project.h"
#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MemoryWindow;
}

class User;
class Memory;

class MemoryWindow : public QMainWindow
{
    Q_OBJECT

signals:
    void backToProfile();
    void backToPage();

public:
    explicit MemoryWindow(char parentCh,QWidget *parent = nullptr);
    ~MemoryWindow();
    void setUser(User*&,int);
    void setUpThePage();

private slots:
    void on_pushButton_goBack_clicked();

    void on_pushButton_shareMemory_clicked();

private:
    Ui::MemoryWindow *ui;
    User * userPtr;
    char parentCh;
    int indexOfPost;
    Memory * newMemoryPtr;
};

#endif // MEMORYWINDOW_H
