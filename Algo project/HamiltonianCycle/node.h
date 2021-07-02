#ifndef NODE_H
#define NODE_H
#include <QGraphicsEllipseItem>

class node : public QGraphicsEllipseItem{
private:

public:
    double x;
    double y;

    node(double X, double Y, QGraphicsItem *parent, double wid, double height);
};
#endif // NODE_H
