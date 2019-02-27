#ifndef ANALYSIS_H
#define ANALYSIS_H
#include "ui_ana.h"
#include <QWidget>
#include "QDialog"
#include "QVector"
#include "qcustomplot.h"
namespace Ui {
class Dialog;
}
class analysis : public QDialog
{
    Q_OBJECT
public:
    explicit analysis(QWidget *parent = nullptr);
    void Load_Data_Count_Type_1();
    void Load_Data_Count_Type_2();
    void click_p_1();
    void click_p_2();
    int find_max_count_type_1();
    int find_max_count_type_2();
signals:

public slots:

private slots:
    void Draw_Type_1_Graph();
    void Draw_Type_2_Graph();
private:
    Ui::Dialog *Myui;
    QVector<int> Data_Type_1;
    QVector<int> Count_Type_1;
    QVector<int> Data_Type_2;
    QVector<int> Count_Type_2;
};

#endif // ANALYSIS_H
