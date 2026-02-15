#include <core/application/IApplication.h>
#include <http/IHttpServer.h>
#include <http/assets/IHttpAssetsAnnomacro.h>

$SetHttpAssetsEnabled(true)
$SetHttpAssetsPath(":/www")
int main(int argc, char *argv[])
{
    IApplication app(argc, argv);

    IHttpServer server;
    server.listen();

    return app.exec();
}
