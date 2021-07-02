#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "node.h"

namespace Ui {
class mainWindow;
}

class mainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit mainWindow(QWidget *parent = 0);
    ~mainWindow();

private:
    Ui::mainWindow *ui;
    QGraphicsScene *scene;
    node *n1;
};

#endif // MAINWINDOW_H
