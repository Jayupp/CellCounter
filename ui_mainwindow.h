/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionupload_image;
    QAction *action_3;
    QAction *actionAnalysis_graph;
    QWidget *centralWidget;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *orginal_image;
    QLabel *process_image;
    QLabel *result_image;
    QPushButton *Myupload;
    QPushButton *process_button_1;
    QLabel *label_4;
    QLabel *counter;
    QPushButton *process_button_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAnalysis;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(783, 497);
        actionupload_image = new QAction(MainWindow);
        actionupload_image->setObjectName(QStringLiteral("actionupload_image"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        actionAnalysis_graph = new QAction(MainWindow);
        actionAnalysis_graph->setObjectName(QStringLiteral("actionAnalysis_graph"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(40, 0, 691, 41));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(40, 40, 691, 211));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        orginal_image = new QLabel(frame_2);
        orginal_image->setObjectName(QStringLiteral("orginal_image"));

        horizontalLayout_2->addWidget(orginal_image);

        process_image = new QLabel(frame_2);
        process_image->setObjectName(QStringLiteral("process_image"));

        horizontalLayout_2->addWidget(process_image);

        result_image = new QLabel(frame_2);
        result_image->setObjectName(QStringLiteral("result_image"));

        horizontalLayout_2->addWidget(result_image);

        Myupload = new QPushButton(centralWidget);
        Myupload->setObjectName(QStringLiteral("Myupload"));
        Myupload->setGeometry(QRect(40, 260, 75, 23));
        process_button_1 = new QPushButton(centralWidget);
        process_button_1->setObjectName(QStringLiteral("process_button_1"));
        process_button_1->setGeometry(QRect(40, 300, 161, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 360, 101, 16));
        counter = new QLabel(centralWidget);
        counter->setObjectName(QStringLiteral("counter"));
        counter->setGeometry(QRect(170, 360, 54, 12));
        process_button_2 = new QPushButton(centralWidget);
        process_button_2->setObjectName(QStringLiteral("process_button_2"));
        process_button_2->setGeometry(QRect(280, 300, 161, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 783, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAnalysis = new QMenu(menuBar);
        menuAnalysis->setObjectName(QStringLiteral("menuAnalysis"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAnalysis->menuAction());
        menuFile->addAction(actionupload_image);
        menuFile->addSeparator();
        menuAnalysis->addAction(actionAnalysis_graph);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionupload_image->setText(QApplication::translate("MainWindow", "upload image", 0));
        action_3->setText(QApplication::translate("MainWindow", "save image as", 0));
        actionAnalysis_graph->setText(QApplication::translate("MainWindow", "Analysis graph", 0));
        label->setText(QApplication::translate("MainWindow", "Original Cell Image", 0));
        label_2->setText(QApplication::translate("MainWindow", "Processing Cell Image", 0));
        label_3->setText(QApplication::translate("MainWindow", "Result Cell Image", 0));
        orginal_image->setText(QApplication::translate("MainWindow", "Original Cell Image", 0));
        process_image->setText(QApplication::translate("MainWindow", "Process Cell Image", 0));
        result_image->setText(QApplication::translate("MainWindow", "Result Cell Image", 0));
        Myupload->setText(QApplication::translate("MainWindow", "upload", 0));
        process_button_1->setText(QApplication::translate("MainWindow", "process with TYPE 1 cell", 0));
        label_4->setText(QApplication::translate("MainWindow", "number of cells:", 0));
        counter->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        process_button_2->setText(QApplication::translate("MainWindow", "process with TYPE 2 cell", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuAnalysis->setTitle(QApplication::translate("MainWindow", "Analysis", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
