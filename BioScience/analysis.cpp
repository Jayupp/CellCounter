#include "QDialog"

#include "ui_ana.h"
#include "analysis.h"
#include "iostream"
#include "qcustomplot.h"
#include <fstream>
#include <sstream>
#include "QDebug"
#include "iostream"
using namespace std;
analysis::analysis(QWidget *parent):
  QDialog(parent),
  Myui(new Ui::Dialog)
{
    Myui->setupUi(this);
    click_p_1();
    click_p_2();

}

void analysis::click_p_1()
{
    connect(Myui->analysis_1, &QPushButton::released,
            [=]()
            {
                Load_Data_Count_Type_1();
                Draw_Type_1_Graph();
            }

            );
}

void analysis::click_p_2()
{
    connect(Myui->analysis_2, &QPushButton::released,
            [=]()
            {
                Load_Data_Count_Type_2();
                Draw_Type_2_Graph();
            }

            );
}

void analysis::Load_Data_Count_Type_1()
{
    ifstream inFile;
    char sign;
    int f, s;
    string str;
    qDebug() << "start";
    inFile.open("G:\\QTcode\\DataSet\\Data_Set_Type_1.txt");
    if(inFile.fail())
    {
        qDebug() << "Error to load file";
    }
    inFile >> str;
    while(inFile)
    {
        f = 0;
        s = 0;
        sign = '-';
        qDebug() << "process";
        stringstream(str) >>  f >> sign >> s;
        qDebug() << f << " " << s;
        Data_Type_1.push_back(f);
        Count_Type_1.push_back(s);
        inFile >> str;

    }
    inFile.close();
    for(int i = 0; i < Count_Type_1.size(); i++)
    {
        qDebug() << Data_Type_1[i] << " " << Count_Type_1[i];
    }
}


void analysis::Load_Data_Count_Type_2()
{
    ifstream inFile;
    char sign;
    int f, s;
    string str;
    qDebug() << "start";
    inFile.open("G:\\QTcode\\DataSet\\Data_Set_Type_2.txt");
    if(inFile.fail())
    {
        qDebug() << "Error to load file";
    }
    inFile >> str;
    while(inFile)
    {
        f = 0;
        s = 0;
        sign = '-';
        qDebug() << "process";
        stringstream(str) >>  f >> sign >> s;
        qDebug() << f << " " << s;
        Data_Type_2.push_back(f);
        Count_Type_2.push_back(s);
        inFile >> str;

    }
    inFile.close();
    for(int i = 0; i < Count_Type_2.size(); i++)
    {
        qDebug() << Data_Type_2[i] << " " << Count_Type_2[i];
    }
}

void analysis::Draw_Type_1_Graph()
{
    // generate some data:
    QVector<double> x(Data_Type_1.size()), y(Data_Type_1.size()); // initialize with entries 0..100
    for (int i=0; i<Data_Type_1.size(); i++)
    {
      x[i] = Data_Type_1[i]; // x goes from -1 to 1
      y[i] = Count_Type_1[i]; // let's plot a quadratic function
    }
    // create graph and assign data to it:
    Myui->qcustomplot_1->addGraph();
    Myui->qcustomplot_1->graph(0)->setData(x, y);
    // give the axes some labels:
    Myui->qcustomplot_1->xAxis->setLabel("Time Points");
    Myui->qcustomplot_1->yAxis->setLabel("Cell Numbers");
    // set axes ranges, so we see all data:
    Myui->qcustomplot_1->xAxis->setRange(0, Data_Type_1.size());
    int max_count = find_max_count_type_1();
    Myui->qcustomplot_1->yAxis->setRange(0,max_count);
    Myui->qcustomplot_1->replot();
}

int analysis::find_max_count_type_1()
{
    int max = 0;
    for(int i = 0; i < Count_Type_1.size(); i++)
    {
        if(max < Count_Type_1[i])
            max = Count_Type_1[i];
    }
    return max;
}

int analysis::find_max_count_type_2()
{
    int max = 0;
    for(int i = 0; i < Count_Type_2.size(); i++)
    {
        if(max < Count_Type_2[i])
            max = Count_Type_2[i];
    }
    return max;
}

void analysis::Draw_Type_2_Graph()
{
    // generate some data:
    QVector<double> x(Data_Type_2.size()), y(Data_Type_2.size()); // initialize with entries 0..100
    for (int i=0; i<Data_Type_2.size(); i++)
    {
      x[i] = Data_Type_2[i]; // x goes from -1 to 1
      y[i] = Count_Type_2[i]; // let's plot a quadratic function
    }
    // create graph and assign data to it:
    Myui->qcustomplot_1->addGraph();
    Myui->qcustomplot_1->graph(0)->setData(x, y);
    // give the axes some labels:
    Myui->qcustomplot_1->xAxis->setLabel("Time Points");
    Myui->qcustomplot_1->yAxis->setLabel("Cell Numbers");
    // set axes ranges, so we see all data:
    Myui->qcustomplot_1->xAxis->setRange(0, Data_Type_1.size());
    int max_count = find_max_count_type_2();
    Myui->qcustomplot_1->yAxis->setRange(0,max_count);
    Myui->qcustomplot_1->replot();
}
