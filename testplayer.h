#ifndef TESTPLAYER_H
#define TESTPLAYER_H

#include <QObject>
#include <psndplayer.h>

using namespace psndplayer;

class TestPlayer : public QObject
{
    Q_OBJECT
public:
    explicit TestPlayer(QObject *parent = 0);
    virtual ~TestPlayer();


signals:

public slots:
    void play();
    void stop();
    void destroy();

private:
    PSndPlayer *player;
};

#endif // TESTPLAYER_H
