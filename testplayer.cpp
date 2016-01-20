#include "testplayer.h"


TestPlayer::TestPlayer(QObject *parent)
    : QObject(parent)
{
    player = new PSndPlayer(this);
    //map<int,OutDevice> outputDevices;
    //outputDevices = player->audioOutPut()->getOutputDevices();
    //OutDevice *currentDevice = player->audioOutPut()->getCurrentOutputDevice();
    player->audioOutPut()->setOutputDevice(2);
    QString sr = "48000";
    player->audioOutPut()->setOutpuDeviceSamplerate(sr.toStdString().c_str());
    QString file = "Z:/Users/admin/music/wav/Test_Time_16_48_Mono.wav";
    player->addFile(file.psnd_toStdString().c_str());

}

TestPlayer::~TestPlayer(){

}

void TestPlayer::play(){
    player->play();
}

void TestPlayer::stop(){
    player->stop();
}

void TestPlayer::destroy(){
    player->stop();
    delete player;
    player = NULL;
}
