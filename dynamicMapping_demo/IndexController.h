#pragma once

#include <http/controller/IHttpControllerInterface.h>

class IndexController : public IHttpControllerInterface<IndexController>
{
    Q_GADGET
    $AsController(/)
public:
    IndexController();

public:
    $GetMapping(index, /)
    QString index();

    $GetMapping(hello)
    QString hello(QString name);
};
