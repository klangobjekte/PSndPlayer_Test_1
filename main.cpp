
#include <QCoreApplication>
#include <QObject>
#include <QString>
#include <QTimer>

//#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <csignal>
#include "testplayer.h"

//! https://msdn.microsoft.com/de-de/library/x98tx3cf.aspx
#ifdef _DEBUG
   #ifndef DBG_NEW
      #define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
      #define new DBG_NEW
   #endif
#endif  // _DEBUG

using namespace std;
using namespace psndplayer;

struct CleanExit{
    CleanExit() {
        signal(SIGINT, &CleanExit::exitQt);
        signal(SIGTERM, &CleanExit::exitQt);
        signal(SIGBREAK, &CleanExit::exitQt) ;
    }

    static void exitQt(int sig) {
        QCoreApplication::exit(0);
    }
};










int main(int argc, char *argv[])
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    CleanExit cleanExit;
    QCoreApplication a(argc, argv);
    TestPlayer *player = new TestPlayer(&a);
    //player->play();

    //Sleep(9000);
    //player->stop();
    //Sleep(1000);
    //delete player;
    //a.quit();
    QTimer::singleShot(1500, player, SLOT(play()));
    QTimer::singleShot(3000, player, SLOT(stop()));
    QTimer::singleShot(5000, player, SLOT(destroy()));
    QTimer::singleShot(6000, qApp, SLOT(quit()));

    return a.exec();
}
