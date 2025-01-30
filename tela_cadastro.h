#ifndef TELA_CADASTRO_H
#define TELA_CADASTRO_H

#include <QDialog>

namespace Ui {
class tela_cadastro;
}

class tela_cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit tela_cadastro(QWidget *parent = nullptr);
    ~tela_cadastro();

private slots:
    void on_pushButton_cadastrar_produto_clicked();

private:
    Ui::tela_cadastro *ui;
};

#endif // TELA_CADASTRO_H
