#include <QCoreApplication>
#include "network/network.h"
#include "dataHandle/datahandle.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    if (Network::getObject()->startServer(8888)){
        qDebug() << "Server is working, listening the port of 8888.";
    }
    else {
        qDebug() << "Server strat failed";
        return a.exec();
    }

    DataHandle::getObject();

    return a.exec();
}
