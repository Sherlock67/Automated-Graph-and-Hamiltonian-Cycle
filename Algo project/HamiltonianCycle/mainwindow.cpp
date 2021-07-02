#include "mainwindow.h"
#include "ui_mainwindow.h"

mainWindow::mainWindow(QWidget *parent) : QWidget(parent), ui(new Ui::mainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    n1 = new node(20.0, 20.0);
    scene->addItem(n1);

    ui->canvas->setScene(scene);
}

mainWindow::~mainWindow()
{
    delete ui;
}
