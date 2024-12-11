#include "State.h"

#include <iostream>

std::shared_ptr<IState> SwitchOnState::on(){
    std::cout<<"Switch On State: nothing happened"<<std::endl;
    return std::make_shared<SwitchOnState>(*this);
}

std::shared_ptr<IState> SwitchOnState::off(){
    std::cout<<"Switch On State: Switch off"<<std::endl;
    return std::make_shared<SwitchOffState>();
}

std::shared_ptr<IState> SwitchOffState::on(){
    std::cout<<"Switch Off State: switch on"<<std::endl;
    return std::make_shared<SwitchOnState>();
}

std::shared_ptr<IState> SwitchOffState::off(){
    std::cout<<"Switch Off State: nothing happened"<<std::endl;
    return std::make_shared<SwitchOffState>(*this);
}

Equipment::Equipment(std::shared_ptr<IState> state){
    this->state_ = state;
}

void Equipment::on(){
    setState(state_->on());
}

void Equipment::off(){
    setState(state_->off());
}

void Equipment::setState(std::shared_ptr<IState> state){
    this->state_ = state;
}
