#ifndef TIMER_H
#define TIMER_H

#include <QTimer>

class MyTimer : public QObject
{
    Q_OBJECT
public:
    MyTimer();
    QTimer *timer;

public slots:
    void MyTimerSlot();
};

#endif // TIMER_H
