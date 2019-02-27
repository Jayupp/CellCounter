#ifndef OPEN_CV_PROCESS_IMAGE__H
#define OPEN_CV_PROCESS_IMAGE__H
#include <iostream>
#include <QString>
#include <vector>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
class process_image
{
public:
    process_image();
    process_image(string);
    QString Convert();
    void Load_File(string);
    void WithoutDealingNoise();
    void WithDealingNoise();
    void Drawing();
    void Save_Process_File_Type_1(string);
    void Save_Result_File_Type_1(string);
    void Save_Process_File_Type_2(string);
    void Save_Result_File_Type_2(string);
    size_t Counter();
    void Show_Windows();
    void Show_Original_Image();
    void Show_Windows_Process_Image();
    void Show_Windows_Result_Image();
private:
    string path;
    Mat frame;
    Mat orginal_image;
    Mat middle_image;
    Mat result_image;
    vector<vector<Point>> myVector;
};

#endif // OPEN_CV_PROCESS_IMAGE__H
