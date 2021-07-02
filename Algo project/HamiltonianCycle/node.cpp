#include "node.h"

node::node(double X, double Y, QGraphicsItem *parent = 0, double width = 10.0, double height = 10.0) : QGraphicsEllipseItem(X-width/2, -Y-height/2, width, height, parent)
{

}
