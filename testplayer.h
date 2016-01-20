#ifndef TESTPLAYER_H
#define TESTPLAYER_H

#include <QObject>

class TestPlayer : public QObject
{
    Q_OBJECT
public:
    explicit TestPlayer(QObject *parent = 0);

signals:

public slots:
};

#endif // TESTPLAYER_H
