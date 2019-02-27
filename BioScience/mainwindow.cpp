#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPushButton"
#include "QString"
#include "QFileDialog"
#include "QAction"
#include "QDebug"
#include "QFileInfo"
#include "QDialog"
#include "QMessageBox"
#include <iostream>
#include "open_cv_process_image_.h"
#include "QAction"
#include <fstream>
using namespace std;
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    File_Path = "";
    Init_File();
    Set_Menu_Upload_Image();
    upload();
    Process_Type_1();
    Process_Type_2();
    Analysis_Windows();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::upload()
{
    string str_;

    connect(ui->Myupload, &QPushButton::released,
            [=]()
            {

                QString str = QFileDialog::getOpenFileName(Q_NULLPTR, "open", "../Image_Source/Testing_Image");
                SetImage_Label(str);
                File_Path = str;
                qDebug() << File_Path;
                QFileInfo File_info = QFileInfo(str);
                File_Name = File_info.fileName();
                qDebug() << File_Name;
            }
            );
}

string MainWindow::QString_to_String(QString str)
{
    return str.toStdString();
}

void MainWindow::Process_Type_1()
{
    connect(ui->process_button_1, &QPushButton::released,
     [=]()
     {
        if(File_Path.isEmpty())
        {
            qDebug() << " ERROR";
            QMessageBox::about(this, "Attention", "Please upload the image first");

        }
        else
        {
            static int num = 0;
            qDebug() << "Running";
            string str_ = QString_to_String(File_Path);
            process_image MyImage(str_);
            MyImage.WithoutDealingNoise();
            count = MyImage.Counter();
            MyImage.Drawing();
            string name = QString_to_String(File_Name);
            MyImage.Save_Process_File_Type_1(name);
            MyImage.Save_Result_File_Type_1(name);
            SetProcess_Result_Image_Type_1();
            SetCount();
            Sava_Data_Set_Type_1(num, count);
            num++;
        }
     }
    );
}


void MainWindow::Process_Type_2()
{
    connect(ui->process_button_2, &QPushButton::released,
            [=]()
            {

                if(File_Path.isEmpty())
                {
                    qDebug() << " ERROR";
                    QMessageBox::about(this, "Attention", "Please upload the image first");

                }
                else
                {
                    static int num = 0;
                    qDebug() << "Running";
                    string str_ = QString_to_String(File_Path);
                    process_image MyImage(str_);
                    MyImage.WithDealingNoise();
                    count = MyImage.Counter();
                    MyImage.Drawing();
                    string name = QString_to_String(File_Name);
                    MyImage.Save_Process_File_Type_2(name);
                    MyImage.Save_Result_File_Type_2(name);
                    SetProcess_Result_Image_Type_1();
                    SetCount();
                    Save_Data_Set_Type_2(num, count);
                    num++;
                }

            }

            );
}
void MainWindow::SetImage_Label(QString str)
{
    ui->orginal_image->setPixmap(QPixmap(str));
    ui->orginal_image->setScaledContents(true);
}

QString MainWindow::getPath()
{
    return this->File_Path;
}

void MainWindow::SetProcess_Result_Image_Type_1()
{
    QString process_file = "G:/QTcode/Image_Source/Process_Image/Type_1/" + File_Name;
    ui->process_image->setPixmap(process_file);

    QString result_file = "G:/QTcode/Image_Source/Result_Image/Type_1/" + File_Name;
    ui->result_image->setPixmap(result_file);
}

void MainWindow::SetProcess_Result_Image_Type_2()
{
    QString process_file = "G:/QTcode/Image_Source/Process_Image/Type_2/" + File_Name;
    ui->process_image->setPixmap(process_file);

    QString result_file = "G:/QTcode/Image_Source/Result_Image/Type_2/" + File_Name;
    ui->result_image->setPixmap(result_file);
}

void MainWindow::SetCount()
{
    string str = std::to_string(count);
    QString ct = String_to_QString(str);
    ui->counter->setText(ct);
}

QString MainWindow::String_to_QString(string str)
{
    return QString::fromStdString(str);
}


void MainWindow::Sava_Data_Set_Type_1(int num, int count)
{
    ofstream file_out("G:\\QTcode\\DataSet\\Data_Set_Type_1.txt", ios::app);
    if(!file_out)
    {
        qDebug() << "Unable to open Type 1 output file";
    }
    file_out << num << "-" << count << endl;

    file_out.close();

}


void MainWindow::Save_Data_Set_Type_2(int num, int count)
{
    ofstream file_out("G:\\QTcode\\DataSet\\Data_Set_Type_2.txt", ios::app);
    if(!file_out)
    {
        qDebug() << "Unable to open Type 2 output file";
    }
    file_out << num << "-" << count << endl;
    file_out.close();
}


void MainWindow::Init_File()
{
    ofstream file_out1("G:\\QTcode\\DataSet\\Data_Set_Type_1.txt");
    if(!file_out1)
    {
        qDebug() << "Unable to open Type 1 output file";
    }
    ofstream file_out2("G:\\QTcode\\DataSet\\Data_Set_Type_2.txt");
    if(!file_out2)
    {
        qDebug() << "Unable to open Type 2 output file";
    }
}

void MainWindow::Set_Menu_Upload_Image()
{
    connect(ui->actionupload_image, &QAction::triggered,
            [=]()
            {
                QString str = QFileDialog::getOpenFileName(Q_NULLPTR, "open", "../Image_Source/Testing_Image");
                SetImage_Label(str);
                File_Path = str;
                qDebug() << File_Path;
                QFileInfo File_info = QFileInfo(str);
                File_Name = File_info.fileName();
                qDebug() << File_Name;
            }
            );
}



void MainWindow::Analysis_Windows()
{
    connect(ui->actionAnalysis_graph, &QAction::triggered,
            [=]()
            {
                analysis_w.show();
            }
            );
}
