#pragma once

#include <memory>

class Command {
public:
    virtual ~Command() {}
    virtual void execute() = 0;
};


class Receiver {
public:
    void performAction();
};


class ConcreteCommand : public Command {
public:
    explicit ConcreteCommand(std::shared_ptr<Receiver> r);
    void execute() override;

private:
    std::shared_ptr<Receiver> receiver;
};


class Invoker {
public:
    void setCommand(std::shared_ptr<Command> cmd);
    void invoke();

private:
    std::shared_ptr<Command> command;
};



