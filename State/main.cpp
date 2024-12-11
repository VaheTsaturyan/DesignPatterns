#include "State.h"


int main(){
    Equipment  equipment(std::make_shared<SwitchOffState>());
    equipment.on();
    equipment.off();
    equipment.off();
    equipment.on();
    equipment.on();
    equipment.off();
    return 0;
}