#include "client.h"
#include <iostream>

QGSClient::QGSClient()
{
  QObject::connect(&mSocket, SIGNAL(connected()), this, SLOT(connectionOK()));
  QObject:: connect(&mSocket, SIGNAL(readyRead()), this, SLOT(readData()));
}

void QGSClient::connectToServer(const QString& IP, int port)
{
  mSocket.connectToHost(IP, port);
}

void QGSClient::connectionOK()
{
  std::cout << "Connection with server OK" << std::endl;
}

void QGSClient::readData()
{
  QString line;
  while(mSocket.canReadLine())
  {
    line = mSocket.readLine();
    std::cout << "Message received from server: " << line.toStdString() << std::endl;

    if ( line == "BEGIN\n" )
      emit clean();
    else if ( line == "END\n" )
      emit done();
    else
      emit wkt( line );
  }
}
