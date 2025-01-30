/********************************************************************************
** Form generated from reading UI file 'tela_cadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_CADASTRO_H
#define UI_TELA_CADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela_cadastro
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_nome;
    QLineEdit *lineEdit_sabor;
    QLineEdit *lineEdit_quantidade;
    QPushButton *pushButton_cadastrar_produto;

    void setupUi(QDialog *tela_cadastro)
    {
        if (tela_cadastro->objectName().isEmpty())
            tela_cadastro->setObjectName(QString::fromUtf8("tela_cadastro"));
        tela_cadastro->resize(240, 320);
        groupBox = new QGroupBox(tela_cadastro);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 221, 291));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 49, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 49, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 120, 49, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 160, 71, 16));
        lineEdit_id = new QLineEdit(groupBox);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(90, 40, 113, 22));
        lineEdit_nome = new QLineEdit(groupBox);
        lineEdit_nome->setObjectName(QString::fromUtf8("lineEdit_nome"));
        lineEdit_nome->setGeometry(QRect(90, 80, 113, 22));
        lineEdit_sabor = new QLineEdit(groupBox);
        lineEdit_sabor->setObjectName(QString::fromUtf8("lineEdit_sabor"));
        lineEdit_sabor->setGeometry(QRect(90, 120, 113, 22));
        lineEdit_quantidade = new QLineEdit(groupBox);
        lineEdit_quantidade->setObjectName(QString::fromUtf8("lineEdit_quantidade"));
        lineEdit_quantidade->setGeometry(QRect(90, 160, 113, 22));
        pushButton_cadastrar_produto = new QPushButton(groupBox);
        pushButton_cadastrar_produto->setObjectName(QString::fromUtf8("pushButton_cadastrar_produto"));
        pushButton_cadastrar_produto->setGeometry(QRect(10, 210, 191, 31));

        retranslateUi(tela_cadastro);

        QMetaObject::connectSlotsByName(tela_cadastro);
    } // setupUi

    void retranslateUi(QDialog *tela_cadastro)
    {
        tela_cadastro->setWindowTitle(QCoreApplication::translate("tela_cadastro", "Tela de Cadastro", nullptr));
        groupBox->setTitle(QCoreApplication::translate("tela_cadastro", "Cadastro", nullptr));
        label->setText(QCoreApplication::translate("tela_cadastro", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("tela_cadastro", "Nome", nullptr));
        label_3->setText(QCoreApplication::translate("tela_cadastro", "Sabor", nullptr));
        label_4->setText(QCoreApplication::translate("tela_cadastro", "Quantidade", nullptr));
        pushButton_cadastrar_produto->setText(QCoreApplication::translate("tela_cadastro", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_cadastro: public Ui_tela_cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_CADASTRO_H
