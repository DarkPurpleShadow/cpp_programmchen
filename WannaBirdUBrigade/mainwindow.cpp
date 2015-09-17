#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->randomButton, SIGNAL(clicked()), this, SLOT(displayRandomQuote()));
    connect(ui->nextButton, SIGNAL(clicked()), this, SLOT(displayNextQuote()));

    current_quote = rand() % NUM_QUOTES;
    ui->textBrowser->setText(quotes[current_quote]);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayRandomQuote()
{
    current_quote = rand() % NUM_QUOTES;
    ui->textBrowser->setText(quotes[current_quote]);
}

void MainWindow::displayNextQuote()
{
    (current_quote ++) % NUM_QUOTES;
    ui->textBrowser->setText(quotes[current_quote]);
}
