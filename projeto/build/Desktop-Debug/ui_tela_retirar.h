/********************************************************************************
** Form generated from reading UI file 'tela_retirar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_RETIRAR_H
#define UI_TELA_RETIRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela_retirar
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *lineEdit_id_retirar;
    QLineEdit *lineEdit_quantidade_retirar;
    QPushButton *pushButton_retirar_quantidade;

    void setupUi(QDialog *tela_retirar)
    {
        if (tela_retirar->objectName().isEmpty())
            tela_retirar->setObjectName(QString::fromUtf8("tela_retirar"));
        tela_retirar->resize(240, 320);
        groupBox = new QGroupBox(tela_retirar);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 221, 291));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 49, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 49, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 110, 71, 16));
        lineEdit_id_retirar = new QLineEdit(groupBox);
        lineEdit_id_retirar->setObjectName(QString::fromUtf8("lineEdit_id_retirar"));
        lineEdit_id_retirar->setGeometry(QRect(90, 70, 113, 22));
        lineEdit_quantidade_retirar = new QLineEdit(groupBox);
        lineEdit_quantidade_retirar->setObjectName(QString::fromUtf8("lineEdit_quantidade_retirar"));
        lineEdit_quantidade_retirar->setGeometry(QRect(90, 100, 113, 22));
        pushButton_retirar_quantidade = new QPushButton(groupBox);
        pushButton_retirar_quantidade->setObjectName(QString::fromUtf8("pushButton_retirar_quantidade"));
        pushButton_retirar_quantidade->setGeometry(QRect(10, 180, 191, 31));

        retranslateUi(tela_retirar);

        QMetaObject::connectSlotsByName(tela_retirar);
    } // setupUi

    void retranslateUi(QDialog *tela_retirar)
    {
        tela_retirar->setWindowTitle(QCoreApplication::translate("tela_retirar", "Tela de Retirada", nullptr));
        groupBox->setTitle(QCoreApplication::translate("tela_retirar", "Retirar", nullptr));
        label->setText(QCoreApplication::translate("tela_retirar", "ID", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("tela_retirar", "Quantidade", nullptr));
        pushButton_retirar_quantidade->setText(QCoreApplication::translate("tela_retirar", "Retirar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_retirar: public Ui_tela_retirar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_RETIRAR_H
