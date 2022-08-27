#include "interface.h"
#include "network/network.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Network::getObject()->connectToServer("114.55.107.225", 8888);
    Interface::getObject()->show();

    return a.exec();
}
