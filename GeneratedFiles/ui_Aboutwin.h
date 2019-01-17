/********************************************************************************
** Form generated from reading UI file 'Aboutwin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWIN_H
#define UI_ABOUTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Aboutwin
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Aboutwin)
    {
        if (Aboutwin->objectName().isEmpty())
            Aboutwin->setObjectName(QStringLiteral("Aboutwin"));
        Aboutwin->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        Aboutwin->setWindowIcon(icon);
        label = new QLabel(Aboutwin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 40, 301, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(Aboutwin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 120, 361, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(16);
        label_2->setFont(font1);

        retranslateUi(Aboutwin);

        QMetaObject::connectSlotsByName(Aboutwin);
    } // setupUi

    void retranslateUi(QDialog *Aboutwin)
    {
        Aboutwin->setWindowTitle(QApplication::translate("Aboutwin", "ABOUT", nullptr));
        label->setText(QApplication::translate("Aboutwin", "About np_viewer", nullptr));
        label_2->setText(QApplication::translate("Aboutwin", "  vesion_0.0.1 in SJTU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Aboutwin: public Ui_Aboutwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWIN_H
