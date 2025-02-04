#ifndef TELA_EDITAR_NOME_H
#define TELA_EDITAR_NOME_H

#include <QDialog>

namespace Ui {
class tela_editar_nome;
}

class tela_editar_nome : public QDialog
{
    Q_OBJECT

public:
    explicit tela_editar_nome(QWidget *parent = nullptr);
    ~tela_editar_nome();

private slots:
    void on_pushButton_editar_clicked();

private:
    Ui::tela_editar_nome *ui;
};

#endif // TELA_EDITAR_NOME_H
