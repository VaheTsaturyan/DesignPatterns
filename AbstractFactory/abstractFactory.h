#pragma once
#include "praduct.h"

class AbstractFactory{
public:
    virtual ~AbstractFactory() = default;

    virtual ATable* createTable() = 0;
    virtual AChear* createChear() = 0; 
    virtual ASofa* createSofa() = 0;

private:
};

class ModernFactory : public AbstractFactory{
public:
    ATable* createTable() override;
    AChear* createChear() override; 
    ASofa* createSofa() override;
};