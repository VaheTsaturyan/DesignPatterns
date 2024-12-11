#pragma once

#include <memory>

class IState{
public:
    virtual ~IState() = default;
    virtual std::shared_ptr<IState> on() = 0;
    virtual std::shared_ptr<IState> off() = 0;    
};


class SwitchOnState : public IState{
public:
    std::shared_ptr<IState> on() override;
    std::shared_ptr<IState> off() override;    
};


class SwitchOffState : public IState{
public:
    std::shared_ptr<IState> on() override;
    std::shared_ptr<IState> off() override;    
};


class Equipment{
public:
    Equipment(std::shared_ptr<IState> state);
    void on();
    void off();
    
private:
    void setState(std::shared_ptr<IState> state);

private:    
    std::shared_ptr<IState> state_;
};