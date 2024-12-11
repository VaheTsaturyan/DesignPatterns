#include "command.h"

#include <iostream>
#include <memory>

void Receiver::performAction() {
    std::cout << "Action performed by Receiver.\n";
}


ConcreteCommand::ConcreteCommand(std::shared_ptr<Receiver> r) : receiver(r) {}
    void ConcreteCommand::execute() {
        receiver->performAction();
}


void Invoker::setCommand(std::shared_ptr<Command> cmd) {
    command = cmd;
}

void Invoker::invoke() {
    if (command) {
        command->execute();
    }
}



