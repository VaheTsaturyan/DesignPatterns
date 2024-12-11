#include "abstractFactory.h"

int main(){
    AbstractFactory* aFactory= new ModernFactory();
    auto chear = aFactory->createChear();
    auto table = aFactory->createTable();
    auto sofa = aFactory->createSofa();
    
    chear->chear();
    table->table();
    sofa->sofa();

    delete chear;
    delete table;
    delete sofa;

    return 0;
}