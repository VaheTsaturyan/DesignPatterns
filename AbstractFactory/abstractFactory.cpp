#include "abstractFactory.h"

ATable *ModernFactory::createTable()
{
    return new modernTable();
}

AChear *ModernFactory::createChear()
{
    return new modernChear();
}

ASofa *ModernFactory::createSofa()
{
    return new modernSofa();
}
