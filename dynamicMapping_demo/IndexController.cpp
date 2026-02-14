#include "IndexController.h"

IndexController::IndexController()
{

}

QString IndexController::index()
{
    return "hello world";
}

QString IndexController::hello(QString name)
{
    return "hello " + name;
}
