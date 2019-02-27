#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vector>
#include <QMainWindow>
#include "iostream"
#include "analysis.h"
using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void upload();
    void Process_Type_1();
    void Process_Type_2();
    string QString_to_String(QString);
    QString String_to_QString(string);
    void SetImage_Label(QString);
    void SetProcess_Result_Image_Type_1();
    void SetProcess_Result_Image_Type_2();
    QString getPath();
    void SetCount();
    void Sava_Data_Set_Type_1(int, int);
    void Save_Data_Set_Type_2(int, int);
    void Init_File();
    void Set_Menu_Upload_Image();
    void Analysis_Windows();
private:
    analysis analysis_w;
    int count;
    QString File_Path;
    QString File_Name;
    Ui::MainWindow *ui;

    //vector<QString> vec;
};

#endif // MAINWINDOW_H
