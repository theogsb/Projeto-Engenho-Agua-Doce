#ifndef TELA_RETIRAR_H
#define TELA_RETIRAR_H

#include <QDialog>

namespace Ui {
class tela_retirar;
}

class tela_retirar : public QDialog
{
    Q_OBJECT

public:
    explicit tela_retirar(QWidget *parent = nullptr);
    ~tela_retirar();

private slots:
    void on_pushButton_retirar_quantidade_clicked();

private:
    Ui::tela_retirar *ui;
};

#endif // TELA_RETIRAR_H
