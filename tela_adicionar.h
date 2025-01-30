#ifndef TELA_ADICIONAR_H
#define TELA_ADICIONAR_H

#include <QDialog>

namespace Ui {
class tela_adicionar;
}

class tela_adicionar : public QDialog
{
    Q_OBJECT

public:
    explicit tela_adicionar(QWidget *parent = nullptr);
    ~tela_adicionar();

private slots:
    void on_pushButton_adicionar_quantidade_clicked();

private:
    Ui::tela_adicionar *ui;
};

#endif // TELA_ADICIONAR_H
