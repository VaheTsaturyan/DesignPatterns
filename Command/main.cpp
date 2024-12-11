#include "command.h"

#include <memory>

int main() {
    Receiver receiver;
    ConcreteCommand command(std::make_shared<Receiver>(receiver));
    Invoker invoker;

    invoker.setCommand(std::make_shared<ConcreteCommand>(command));
    invoker.invoke();

    return 0;
}