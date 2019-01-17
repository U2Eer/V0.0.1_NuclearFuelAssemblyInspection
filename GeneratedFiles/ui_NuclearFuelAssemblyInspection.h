/********************************************************************************
** Form generated from reading UI file 'NuclearFuelAssemblyInspection.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUCLEARFUELASSEMBLYINSPECTION_H
#define UI_NUCLEARFUELASSEMBLYINSPECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NuclearFuelAssemblyInspectionClass
{
public:
    QAction *action_File_New;
    QAction *action_File_Open;
    QAction *action_File_Close;
    QAction *action_File_Exit;
    QAction *action_Measure_Connect;
    QAction *action_Measure_Reconnect;
    QAction *action_Measure_Disconnect;
    QAction *action_Measure_3D_Measurement;
    QAction *action_View_Fit_All;
    QAction *action_File_Save;
    QAction *action_File_Save_As;
    QAction *action_Measure_System_Calibration;
    QAction *action_Help_About;
    QAction *action_View_Zoom_to_Data;
    QAction *action_View_Front;
    QAction *action_View_Back;
    QAction *action_View_Left;
    QAction *action_View_Right;
    QAction *action_View_Top;
    QAction *action_View_Bottom;
    QAction *action_View_Isometric;
    QAction *action_Report_Excel;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_Image_Visualization;
    QWidget *tab_3D_Visualization;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Measure;
    QMenu *menu_Report;
    QMenu *menu_Help;
    QMenu *menu_View;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_Sensor;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QTreeWidget *treeWidget_Sensor_List;
    QDockWidget *dockWidget_Results;
    QWidget *dockWidgetContents_2;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget_Measurement_Results;
    QToolBar *toolBar_File;
    QToolBar *toolBar_View;
    QToolBar *toolBar_Measure;
    QToolBar *toolBar_Output;

    void setupUi(QMainWindow *NuclearFuelAssemblyInspectionClass)
    {
        if (NuclearFuelAssemblyInspectionClass->objectName().isEmpty())
            NuclearFuelAssemblyInspectionClass->setObjectName(QStringLiteral("NuclearFuelAssemblyInspectionClass"));
        NuclearFuelAssemblyInspectionClass->resize(1366, 816);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        NuclearFuelAssemblyInspectionClass->setFont(font);
        NuclearFuelAssemblyInspectionClass->setIconSize(QSize(48, 48));
        action_File_New = new QAction(NuclearFuelAssemblyInspectionClass);
        action_File_New->setObjectName(QStringLiteral("action_File_New"));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/images/document-new (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        action_File_New->setIcon(icon);
        action_File_Open = new QAction(NuclearFuelAssemblyInspectionClass);
        action_File_Open->setObjectName(QStringLiteral("action_File_Open"));
        action_File_Open->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral("Resources/images/open-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_File_Open->setIcon(icon1);
        action_File_Close = new QAction(NuclearFuelAssemblyInspectionClass);
        action_File_Close->setObjectName(QStringLiteral("action_File_Close"));
        action_File_Close->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral("Resources/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_File_Close->setIcon(icon2);
        action_File_Exit = new QAction(NuclearFuelAssemblyInspectionClass);
        action_File_Exit->setObjectName(QStringLiteral("action_File_Exit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("Resources/images/system-log-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_File_Exit->setIcon(icon3);
        action_Measure_Connect = new QAction(NuclearFuelAssemblyInspectionClass);
        action_Measure_Connect->setObjectName(QStringLiteral("action_Measure_Connect"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("Resources/images/connected.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Measure_Connect->setIcon(icon4);
        action_Measure_Reconnect = new QAction(NuclearFuelAssemblyInspectionClass);
        action_Measure_Reconnect->setObjectName(QStringLiteral("action_Measure_Reconnect"));
        action_Measure_Reconnect->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral("Resources/images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Measure_Reconnect->setIcon(icon5);
        action_Measure_Disconnect = new QAction(NuclearFuelAssemblyInspectionClass);
        action_Measure_Disconnect->setObjectName(QStringLiteral("action_Measure_Disconnect"));
        action_Measure_Disconnect->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral("Resources/images/disconnected.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Measure_Disconnect->setIcon(icon6);
        action_Measure_3D_Measurement = new QAction(NuclearFuelAssemblyInspectionClass);
        action_Measure_3D_Measurement->setObjectName(QStringLiteral("action_Measure_3D_Measurement"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("Resources/images/photo-camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Measure_3D_Measurement->setIcon(icon7);
        action_View_Fit_All = new QAction(NuclearFuelAssemblyInspectionClass);
        action_View_Fit_All->setObjectName(QStringLiteral("action_View_Fit_All"));
        action_View_Fit_All->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QStringLiteral("Resources/images/blue-magnifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_View_Fit_All->setIcon(icon8);
        action_File_Save = new QAction(NuclearFuelAssemblyInspectionClass);
        action_File_Save->setObjectName(QStringLiteral("action_File_Save"));
        action_File_Save->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QStringLiteral("Resources/images/save-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_File_Save->setIcon(icon9);
        action_File_Save_As = new QAction(NuclearFuelAssemblyInspectionClass);
        action_File_Save_As->setObjectName(QStringLiteral("action_File_Save_As"));
        action_File_Save_As->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QStringLiteral("Resources/images/save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_File_Save_As->setIcon(icon10);
        action_Measure_System_Calibration = new QAction(NuclearFuelAssemblyInspectionClass);
        action_Measure_System_Calibration->setObjectName(QStringLiteral("action_Measure_System_Calibration"));
        QIcon icon11;
        icon11.addFile(QStringLiteral("Resources/images/color-balance.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Measure_System_Calibration->setIcon(icon11);
        action_Help_About = new QAction(NuclearFuelAssemblyInspectionClass);
        action_Help_About->setObjectName(QStringLiteral("action_Help_About"));
        QIcon icon12;
        icon12.addFile(QStringLiteral("Resources/images/yes-v3.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Help_About->setIcon(icon12);
        action_View_Zoom_to_Data = new QAction(NuclearFuelAssemblyInspectionClass);
        action_View_Zoom_to_Data->setObjectName(QStringLiteral("action_View_Zoom_to_Data"));
        action_View_Zoom_to_Data->setEnabled(false);
        QIcon icon13;
        icon13.addFile(QStringLiteral("Resources/images/ZoomToData.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_View_Zoom_to_Data->setIcon(icon13);
        action_View_Front = new QAction(NuclearFuelAssemblyInspectionClass);
        action_View_Front->setObjectName(QStringLiteral("action_View_Front"));
        action_View_Front->setEnabled(false);
        QIcon icon14;
        icon14.addFile(QStringLiteral("Resources/images/front-side.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_View_Front->setIcon(icon14);
        action_View_Back = new QAction(NuclearFuelAssemblyInspectionClass);
        action_View_Back->setObjectName(QStringLiteral("action_View_Back"));
        action_View_Back->setEnabled(false);
        QIcon icon15;
        icon15.addFile(QStringLiteral("Resources/images/back-side.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_View_Back->setIcon(icon15);
        action_View_Left = new QAction(NuclearFuelAssemblyInspectionClass);
        action_View_Left->setObjectName(QStringLiteral("action_View_Left"));
        action_View_Left->setEnabled(false);
        QIcon icon16;
        icon16.addFile(QStringLiteral("Resources/images/left-side.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_View_Left->setIcon(icon16);
        action_View_Right = new QAction(NuclearFuelAssemblyInspectionClass);
        action_View_Right->setObjectName(QStringLiteral("action_View_Right"));
        action_View_Right->setEnabled(false);
        QIcon icon17;
        icon17.addFile(QStringLiteral("Resources/images/right-side.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_View_Right->setIcon(icon17);
        action_View_Top = new QAction(NuclearFuelAssemblyInspectionClass);
        action_View_Top->setObjectName(QStringLiteral("action_View_Top"));
        action_View_Top->setEnabled(false);
        QIcon icon18;
        icon18.addFile(QStringLiteral("Resources/images/top-side.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_View_Top->setIcon(icon18);
        action_View_Bottom = new QAction(NuclearFuelAssemblyInspectionClass);
        action_View_Bottom->setObjectName(QStringLiteral("action_View_Bottom"));
        action_View_Bottom->setEnabled(false);
        QIcon icon19;
        icon19.addFile(QStringLiteral("Resources/images/bottom-side.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_View_Bottom->setIcon(icon19);
        action_View_Isometric = new QAction(NuclearFuelAssemblyInspectionClass);
        action_View_Isometric->setObjectName(QStringLiteral("action_View_Isometric"));
        action_View_Isometric->setEnabled(false);
        QIcon icon20;
        icon20.addFile(QStringLiteral("Resources/images/cube.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_View_Isometric->setIcon(icon20);
        action_Report_Excel = new QAction(NuclearFuelAssemblyInspectionClass);
        action_Report_Excel->setObjectName(QStringLiteral("action_Report_Excel"));
        QIcon icon21;
        icon21.addFile(QStringLiteral("Resources/images/Blocnote.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Report_Excel->setIcon(icon21);
        centralWidget = new QWidget(NuclearFuelAssemblyInspectionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_Image_Visualization = new QWidget();
        tab_Image_Visualization->setObjectName(QStringLiteral("tab_Image_Visualization"));
        tabWidget->addTab(tab_Image_Visualization, QString());
        tab_3D_Visualization = new QWidget();
        tab_3D_Visualization->setObjectName(QStringLiteral("tab_3D_Visualization"));
        tabWidget->addTab(tab_3D_Visualization, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        NuclearFuelAssemblyInspectionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NuclearFuelAssemblyInspectionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1366, 33));
        menuBar->setFont(font);
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_File->setFont(font);
        menu_Measure = new QMenu(menuBar);
        menu_Measure->setObjectName(QStringLiteral("menu_Measure"));
        menu_Measure->setFont(font);
        menu_Report = new QMenu(menuBar);
        menu_Report->setObjectName(QStringLiteral("menu_Report"));
        menu_Report->setFont(font);
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        menu_Help->setFont(font);
        menu_View = new QMenu(menuBar);
        menu_View->setObjectName(QStringLiteral("menu_View"));
        menu_View->setFont(font);
        NuclearFuelAssemblyInspectionClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(NuclearFuelAssemblyInspectionClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        NuclearFuelAssemblyInspectionClass->setStatusBar(statusBar);
        dockWidget_Sensor = new QDockWidget(NuclearFuelAssemblyInspectionClass);
        dockWidget_Sensor->setObjectName(QStringLiteral("dockWidget_Sensor"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        treeWidget_Sensor_List = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("\346\225\260\345\200\274"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("\351\241\271\347\233\256"));
        treeWidget_Sensor_List->setHeaderItem(__qtreewidgetitem);
        QFont font1;
        font1.setPointSize(10);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget_Sensor_List);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget_Sensor_List);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget_Sensor_List);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem3);
        __qtreewidgetitem4->setFont(1, font1);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidget_Sensor_List);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        treeWidget_Sensor_List->setObjectName(QStringLiteral("treeWidget_Sensor_List"));
        treeWidget_Sensor_List->setFont(font);
        treeWidget_Sensor_List->setAutoExpandDelay(1);
        treeWidget_Sensor_List->setColumnCount(2);

        gridLayout_2->addWidget(treeWidget_Sensor_List, 0, 0, 1, 1);

        dockWidget_Sensor->setWidget(dockWidgetContents);
        NuclearFuelAssemblyInspectionClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_Sensor);
        dockWidget_Results = new QDockWidget(NuclearFuelAssemblyInspectionClass);
        dockWidget_Results->setObjectName(QStringLiteral("dockWidget_Results"));
        dockWidget_Results->setLayoutDirection(Qt::LeftToRight);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableWidget_Measurement_Results = new QTableWidget(dockWidgetContents_2);
        if (tableWidget_Measurement_Results->columnCount() < 5)
            tableWidget_Measurement_Results->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Measurement_Results->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget_Measurement_Results->rowCount() < 6)
            tableWidget_Measurement_Results->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setItem(0, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setItem(0, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setItem(0, 3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setItem(1, 1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setItem(1, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setItem(2, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setItem(2, 3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setItem(3, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setItem(3, 3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setItem(4, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_Measurement_Results->setItem(5, 1, __qtablewidgetitem21);
        tableWidget_Measurement_Results->setObjectName(QStringLiteral("tableWidget_Measurement_Results"));
        tableWidget_Measurement_Results->setFont(font);

        horizontalLayout->addWidget(tableWidget_Measurement_Results);

        dockWidget_Results->setWidget(dockWidgetContents_2);
        NuclearFuelAssemblyInspectionClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_Results);
        toolBar_File = new QToolBar(NuclearFuelAssemblyInspectionClass);
        toolBar_File->setObjectName(QStringLiteral("toolBar_File"));
        toolBar_File->setIconSize(QSize(64, 64));
        NuclearFuelAssemblyInspectionClass->addToolBar(Qt::TopToolBarArea, toolBar_File);
        toolBar_View = new QToolBar(NuclearFuelAssemblyInspectionClass);
        toolBar_View->setObjectName(QStringLiteral("toolBar_View"));
        toolBar_View->setIconSize(QSize(64, 64));
        NuclearFuelAssemblyInspectionClass->addToolBar(Qt::TopToolBarArea, toolBar_View);
        toolBar_Measure = new QToolBar(NuclearFuelAssemblyInspectionClass);
        toolBar_Measure->setObjectName(QStringLiteral("toolBar_Measure"));
        toolBar_Measure->setIconSize(QSize(64, 64));
        NuclearFuelAssemblyInspectionClass->addToolBar(Qt::TopToolBarArea, toolBar_Measure);
        toolBar_Output = new QToolBar(NuclearFuelAssemblyInspectionClass);
        toolBar_Output->setObjectName(QStringLiteral("toolBar_Output"));
        toolBar_Output->setIconSize(QSize(64, 64));
        NuclearFuelAssemblyInspectionClass->addToolBar(Qt::TopToolBarArea, toolBar_Output);
        dockWidget_Sensor->raise();

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_View->menuAction());
        menuBar->addAction(menu_Measure->menuAction());
        menuBar->addAction(menu_Report->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_File_New);
        menu_File->addAction(action_File_Open);
        menu_File->addAction(action_File_Save);
        menu_File->addAction(action_File_Save_As);
        menu_File->addAction(action_File_Close);
        menu_File->addSeparator();
        menu_File->addAction(action_File_Exit);
        menu_Measure->addAction(action_Measure_Connect);
        menu_Measure->addAction(action_Measure_Reconnect);
        menu_Measure->addAction(action_Measure_Disconnect);
        menu_Measure->addSeparator();
        menu_Measure->addAction(action_Measure_System_Calibration);
        menu_Measure->addAction(action_Measure_3D_Measurement);
        menu_Report->addAction(action_Report_Excel);
        menu_Help->addAction(action_Help_About);
        menu_View->addAction(action_View_Fit_All);
        menu_View->addAction(action_View_Zoom_to_Data);
        menu_View->addSeparator();
        menu_View->addAction(action_View_Front);
        menu_View->addAction(action_View_Back);
        menu_View->addAction(action_View_Left);
        menu_View->addAction(action_View_Right);
        menu_View->addAction(action_View_Top);
        menu_View->addAction(action_View_Bottom);
        menu_View->addAction(action_View_Isometric);
        toolBar_File->addAction(action_File_New);
        toolBar_File->addAction(action_File_Open);
        toolBar_File->addAction(action_File_Save);
        toolBar_File->addAction(action_File_Save_As);
        toolBar_File->addAction(action_File_Close);
        toolBar_View->addAction(action_View_Fit_All);
        toolBar_View->addAction(action_View_Zoom_to_Data);
        toolBar_View->addAction(action_View_Front);
        toolBar_View->addAction(action_View_Back);
        toolBar_View->addAction(action_View_Left);
        toolBar_View->addAction(action_View_Right);
        toolBar_View->addAction(action_View_Top);
        toolBar_View->addAction(action_View_Bottom);
        toolBar_View->addAction(action_View_Isometric);
        toolBar_Measure->addAction(action_Measure_Connect);
        toolBar_Measure->addAction(action_Measure_Reconnect);
        toolBar_Measure->addAction(action_Measure_Disconnect);
        toolBar_Measure->addAction(action_Measure_System_Calibration);
        toolBar_Measure->addAction(action_Measure_3D_Measurement);
        toolBar_Output->addAction(action_Report_Excel);

        retranslateUi(NuclearFuelAssemblyInspectionClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NuclearFuelAssemblyInspectionClass);
    } // setupUi

    void retranslateUi(QMainWindow *NuclearFuelAssemblyInspectionClass)
    {
        NuclearFuelAssemblyInspectionClass->setWindowTitle(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\347\207\203\346\226\231\347\273\204\344\273\266\345\275\242\345\217\230\345\234\250\344\275\215\346\265\213\351\207\217\347\263\273\347\273\237", nullptr));
        action_File_New->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\226\260\345\273\272\345\267\245\347\250\213(&N)", nullptr));
#ifndef QT_NO_SHORTCUT
        action_File_New->setShortcut(QApplication::translate("NuclearFuelAssemblyInspectionClass", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        action_File_Open->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\211\223\345\274\200\345\267\245\347\250\213(&O)", nullptr));
        action_File_Close->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\205\263\351\227\255\345\267\245\347\250\213(&C)", nullptr));
        action_File_Exit->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\351\200\200\345\207\272(&E)", nullptr));
        action_Measure_Connect->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\350\277\236\346\216\245\347\263\273\347\273\237", nullptr));
        action_Measure_Reconnect->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\351\207\215\350\277\236\347\263\273\347\273\237", nullptr));
        action_Measure_Disconnect->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\226\255\345\274\200\347\263\273\347\273\237", nullptr));
        action_Measure_3D_Measurement->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\344\270\211\347\273\264\346\265\213\351\207\217(&M)", nullptr));
        action_View_Fit_All->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\234\200\351\200\202\345\214\226(&F)", nullptr));
        action_File_Save->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\344\277\235\345\255\230\345\267\245\347\250\213(&S)", nullptr));
        action_File_Save_As->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\217\246\345\255\230\345\267\245\347\250\213(&A)", nullptr));
        action_Measure_System_Calibration->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\217\202\346\225\260\346\240\207\345\256\232(&C)", nullptr));
        action_Help_About->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\205\263\344\272\216(&A)", nullptr));
        action_View_Zoom_to_Data->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\351\200\202\345\220\210\346\224\276\345\244\247(&Z)", nullptr));
        action_View_Front->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\255\243\350\247\206\345\233\276(&F)", nullptr));
        action_View_Back->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\220\216\350\247\206\345\233\276(&B)", nullptr));
        action_View_Left->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\267\246\350\247\206\345\233\276(&L)", nullptr));
#ifndef QT_NO_TOOLTIP
        action_View_Left->setToolTip(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\267\246\350\247\206\345\233\276", nullptr));
#endif // QT_NO_TOOLTIP
        action_View_Right->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\217\263\350\247\206\345\233\276(&R)", nullptr));
        action_View_Top->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\344\277\257\350\247\206\345\233\276(&T)", nullptr));
        action_View_Bottom->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\344\273\260\350\247\206\345\233\276(&B)", nullptr));
        action_View_Isometric->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\350\275\264\350\247\206\345\233\276(&I)", nullptr));
        action_Report_Excel->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\350\276\223\345\207\272Excel(&E)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Image_Visualization), QApplication::translate("NuclearFuelAssemblyInspectionClass", "\344\272\214\347\273\264\345\233\276\345\203\217\346\230\276\347\244\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3D_Visualization), QApplication::translate("NuclearFuelAssemblyInspectionClass", "\344\270\211\347\273\264\346\250\241\345\236\213\346\230\276\347\244\272", nullptr));
        menu_File->setTitle(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\226\207\344\273\266(&F)", nullptr));
        menu_Measure->setTitle(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\265\213\351\207\217\347\263\273\347\273\237(&M)", nullptr));
        menu_Report->setTitle(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\212\245\350\241\250\350\276\223\345\207\272(&R)", nullptr));
        menu_Help->setTitle(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\270\256\345\212\251(&H)", nullptr));
        menu_View->setTitle(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\230\276\347\244\272(&D)", nullptr));
        dockWidget_Sensor->setWindowTitle(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\265\213\351\207\217\344\274\240\346\204\237\345\231\250", nullptr));

        const bool __sortingEnabled = treeWidget_Sensor_List->isSortingEnabled();
        treeWidget_Sensor_List->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_Sensor_List->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\221\230\345\267\245\344\277\241\346\201\257\357\274\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\247\223\345\220\215\357\274\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem->child(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\267\245\345\217\267\357\274\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget_Sensor_List->topLevelItem(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\267\245\347\250\213\344\277\241\346\201\257\357\274\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\267\245\344\273\266\345\236\213\345\217\267\357\274\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget_Sensor_List->topLevelItem(2);
        ___qtreewidgetitem5->setText(0, QApplication::translate("NuclearFuelAssemblyInspectionClass", "\344\274\240\346\204\237\345\231\2501\357\274\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\272\217\345\210\227\345\217\267\357\274\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem5->child(1);
        ___qtreewidgetitem7->setText(0, QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\233\235\345\205\211\357\274\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem5->child(2);
        ___qtreewidgetitem8->setText(0, QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\242\236\347\233\212\357\274\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidget_Sensor_List->topLevelItem(3);
        ___qtreewidgetitem9->setText(0, QApplication::translate("NuclearFuelAssemblyInspectionClass", "\344\274\240\346\204\237\345\231\2502\357\274\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem9->child(0);
        ___qtreewidgetitem10->setText(0, QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\272\217\345\210\227\345\217\267\357\274\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem9->child(1);
        ___qtreewidgetitem11->setText(0, QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\233\235\345\205\211\357\274\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem9->child(2);
        ___qtreewidgetitem12->setText(0, QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\242\236\347\233\212\357\274\232", nullptr));
        treeWidget_Sensor_List->setSortingEnabled(__sortingEnabled);

        dockWidget_Results->setWindowTitle(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\234\250\344\275\215\346\265\213\351\207\217\347\273\223\346\236\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Measurement_Results->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\225\260\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Measurement_Results->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\225\260\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Measurement_Results->horizontalHeaderItem(4);
        ___qtablewidgetitem2->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\225\260\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Measurement_Results->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "Part1.x", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Measurement_Results->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "Part1.y", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_Measurement_Results->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "Part1.z", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_Measurement_Results->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "Part1.x(\316\261)", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_Measurement_Results->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "Part1.y(\316\262)", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_Measurement_Results->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "Part1.z(\316\262)", nullptr));

        const bool __sortingEnabled1 = tableWidget_Measurement_Results->isSortingEnabled();
        tableWidget_Measurement_Results->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_Measurement_Results->item(0, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "Part2.x", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_Measurement_Results->item(0, 3);
        ___qtablewidgetitem10->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\346\211\255\346\221\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_Measurement_Results->item(1, 1);
        ___qtablewidgetitem11->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "Part2.y", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_Measurement_Results->item(1, 3);
        ___qtablewidgetitem12->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "\345\274\257\346\233\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_Measurement_Results->item(2, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "Part2.z", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_Measurement_Results->item(3, 1);
        ___qtablewidgetitem14->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "Part2.x(\316\261)", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_Measurement_Results->item(4, 1);
        ___qtablewidgetitem15->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "Part2.y(\316\262)", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_Measurement_Results->item(5, 1);
        ___qtablewidgetitem16->setText(QApplication::translate("NuclearFuelAssemblyInspectionClass", "Part2.z(\316\262)", nullptr));
        tableWidget_Measurement_Results->setSortingEnabled(__sortingEnabled1);

        toolBar_View->setWindowTitle(QApplication::translate("NuclearFuelAssemblyInspectionClass", "toolBar", nullptr));
        toolBar_Measure->setWindowTitle(QApplication::translate("NuclearFuelAssemblyInspectionClass", "toolBar", nullptr));
        toolBar_Output->setWindowTitle(QApplication::translate("NuclearFuelAssemblyInspectionClass", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NuclearFuelAssemblyInspectionClass: public Ui_NuclearFuelAssemblyInspectionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUCLEARFUELASSEMBLYINSPECTION_H
