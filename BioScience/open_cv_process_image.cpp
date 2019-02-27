#include "open_cv_process_image_.h"
#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>
using namespace std;
using namespace cv;
process_image::process_image(string path)
{
    this->path = path;
    orginal_image = imread(path, 0);
    frame = Mat::zeros(orginal_image.size(), CV_8SC3);
    middle_image = Mat::zeros(orginal_image.size(), CV_8SC3);
    result_image = Mat::zeros(orginal_image.size(), CV_8SC3);
}

void process_image::Load_File(string Mypath)
{
    path = Mypath;
}

QString process_image::Convert()
{
    QString qstr = QString::fromStdString(path);
    return qstr;
}

void process_image::WithDealingNoise()
{
    threshold(orginal_image, middle_image, 150, 255, CV_THRESH_BINARY_INV);
    medianBlur(middle_image, result_image,3);

}

void process_image::WithoutDealingNoise()
{
    //Thresholding the image to transfer the image with only black and white
    threshold(orginal_image, middle_image, 150, 255, CV_THRESH_BINARY_INV);
    Mat element1 = getStructuringElement(MORPH_ELLIPSE, Size(2,2), Point(-1, -1));
    morphologyEx(middle_image, result_image, MORPH_OPEN, element1, Point(-1,-1));
}

size_t process_image::Counter()
{
    cv::findContours(result_image, myVector, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));
    return myVector.size();
}

void process_image::Drawing()
{
    for(size_t i = 0; i < myVector.size(); i++)
    {
        cv::drawContours(frame, myVector, i, Scalar(0, 0, 255), 1);
    }
}

void process_image::Save_Process_File_Type_1(string File_Name)
{
    string path = "G:\\QTcode\\Image_Source\\Process_Image\\Type_1\\" + File_Name;
    imwrite(path, middle_image);
}

void process_image::Save_Result_File_Type_1(string File_Name)
{
    string path = "G:\\QTcode\\Image_Source\\Result_Image\\Type_1\\" + File_Name;
    imwrite(path, frame);
}

void process_image::Save_Process_File_Type_2(string File_Name)
{
    string path = "G:\\QTcode\\Image_Source\\Process_Image\\Type_2\\" + File_Name;
    imwrite(path, frame);
}

void process_image::Save_Result_File_Type_2(string File_Name)
{
    string path = "G:\\QTcode\\Image_Source\\Result_Image\\Type_2\\" + File_Name;
    imwrite(path, frame);
}

//for testing
void process_image::Show_Windows()
{
    imshow("orginal", orginal_image);
    imshow("process", middle_image);
    imshow("result", frame);
    waitKey(0);
}

void process_image::Show_Original_Image()
{
    imshow("orginal", orginal_image);
    waitKey(0);
}

void process_image::Show_Windows_Process_Image()
{
    imshow("process", middle_image);
    waitKey(0);
}

void process_image::Show_Windows_Result_Image()
{
    imshow("result", frame);
    waitKey(0);
}

