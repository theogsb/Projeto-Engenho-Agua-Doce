#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "tela_principal.h"
#include "tela_cadastro.h"
#include "tela_adicionar.h"
#include "tela_retirar.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    QSqlDatabase db;
    Ui::MainWindow *ui;
    tela_principal *tela2; // ponteiro para tela principal
};
#endif // MAINWINDOW_H
