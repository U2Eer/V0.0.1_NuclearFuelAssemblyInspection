/********************************************************************************
** Form generated from reading UI file 'Password.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORD_H
#define UI_PASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Security
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *Security)
    {
        if (Security->objectName().isEmpty())
            Security->setObjectName(QStringLiteral("Security"));
        Security->resize(400, 236);
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/images/safe.png"), QSize(), QIcon::Normal, QIcon::Off);
        Security->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(Security);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(20, 180, 301, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Security);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 80, 72, 15));
        label_2 = new QLabel(Security);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 130, 72, 15));
        lineEdit = new QLineEdit(Security);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 80, 113, 21));
        lineEdit_2 = new QLineEdit(Security);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 130, 113, 21));

        retranslateUi(Security);
        QObject::connect(buttonBox, SIGNAL(accepted()), Security, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Security, SLOT(reject()));

        QMetaObject::connectSlotsByName(Security);
    } // setupUi

    void retranslateUi(QDialog *Security)
    {
        Security->setWindowTitle(QApplication::translate("Security", "Dialog", nullptr));
        label->setText(QApplication::translate("Security", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Security", "\345\257\206\347\240\201\347\241\256\350\256\244\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Security: public Ui_Security {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORD_H
