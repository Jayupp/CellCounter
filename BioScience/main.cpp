#include "mainwindow.h"
#include "open_cv_process_image_.h"
#include <QApplication>
#include <opencv2/opencv.hpp>
#include <vector>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //qDebug() << w.path;


/*
    string str = "C:\\Users\\Administrator\\Desktop\\notebooks\\test2.jpg";
    process_image myImage(str);
    //myImage.Load_File();
    myImage.WithoutDealingNoise();
    size_t count = myImage.Counter();
    cout << count << endl;
    myImage.Drawing();
    myImage.Show_Windows();
*/
    w.show();
    return a.exec();
}
