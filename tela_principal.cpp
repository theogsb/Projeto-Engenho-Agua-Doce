#include "tela_principal.h"
#include "ui_tela_principal.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QStandardItemModel>

tela_principal::tela_principal(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_principal)
{
    ui->setupUi(this);
}


tela_principal::~tela_principal()
{
    delete ui;
}


void tela_principal::on_pushButton_cadastrar_clicked()
{
    // tela cadastro
    tela_cadastro *tela3 = new tela_cadastro(this);
    tela3->show();
}


void tela_principal::on_pushButton_adicionar_clicked()
{
    // tela de adicionar
    tela_adicionar *tela4 = new tela_adicionar(this);
    tela4->show();
}


void tela_principal::on_pushButton_retirar_clicked()
{
    // tela de retirar
    tela_retirar *tela5 = new tela_retirar(this);
    tela5->show();
}


void tela_principal::on_pushButton_editar_clicked()
{
    tela_editar_nome *tela6 = new tela_editar_nome(this);
    tela6->show();
}


void tela_principal::on_pushButton_atualizar_tabela_clicked()
{
    // recupera a conexao com o banco de dados
    QSqlDatabase db = QSqlDatabase::database();

    // check novamente no banco de dados
    if (!db.isOpen()) {
        QMessageBox::warning(this, "Erro", "Banco de dados não está aberto");
        return;
    } else {
        qDebug() << "Conexao com o banco de dados mantida....";
    }

    // cria da query
    QSqlQuery query;

    query.prepare("SELECT * FROM produtos");
    if (!query.exec()) {
        QMessageBox::warning(this, "Erro", "Falha ao executar a consulta: " + query.lastError().text());
        return;
    }

    // cria um modelo de tabela
    QStandardItemModel *model = new QStandardItemModel(this);

    model->setHorizontalHeaderLabels({"ID", "NOME", "SABOR", "QUANTIDADE"});

    int row = 0;
    while (query.next()) {
        model->setItem(row, 0, new QStandardItem(query.value(0).toString()));
        model->setItem(row, 1, new QStandardItem(query.value(1).toString()));
        model->setItem(row, 2, new QStandardItem(query.value(2).toString()));
        model->setItem(row, 3, new QStandardItem(query.value(3).toString()));
        row++;
    }

    ui->tableView->setModel(model);
}

