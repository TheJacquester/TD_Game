#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPathItem>
#include <QObject>
#include <QList> //list << element baie nice
#include <QPointF>

class Enemy: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(QGraphicsItem * parent =0);
    void rotateToPoint(QPointF p);
public slots:
    void move_forward();

private:
    QList<QPointF> points;
    QPointF dest;
    int point_index;
};

#endif // ENEMY_H
