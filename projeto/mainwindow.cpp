#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // cria conexão com o banco de dados
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:database.db"); //seu caminho para o banco de dados | voce deve copiar e colar o endereço do diretorio do arquivo do banco de dados

    // check na abertura do banco de dados
    if (!db.open()) {
        qDebug() << "Falha ao abrir o banco de dados: " << db.lastError().text();
    } else {
        qDebug() << "Banco de Dados aberto com sucesso";

        // Criando a tabela 'produtos' caso ainda não exista
        QSqlQuery query;
        QString createTableQuery = R"(
            CREATE TABLE IF NOT EXISTS produtos (
                id INTEGER PRIMARY KEY,
                nome TEXT,
                sabor TEXT,
                quantidade INTEGER
            );
        )";

        // check na criação ou verificação da tabela
        if (!query.exec(createTableQuery)) {
            qDebug() << "Falha ao criar a tabela: " << query.lastError().text();
        } else {
            qDebug() << "Tabela 'produtos' criada/verificada com sucesso!";
        }
    }
}

MainWindow::~MainWindow()
{
    if (db.isOpen()) {
        db.close();
    }
    qDebug() << "Conexao fechada....";
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // tela principal
    tela_principal *tela2 = new tela_principal(this);
    tela2->show();
}

