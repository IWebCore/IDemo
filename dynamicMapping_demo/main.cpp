#include <core/application/IApplication.h>
#include <http/IHttpServer.h>

int main(int argc, char *argv[])
{
    IApplication a(argc, argv);

    IHttpServer server;
    server.listen();

    return a.exec();
}
