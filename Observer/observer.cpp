#include "observer.h"

#include <iostream>
#include <list>
#include <string>


Subject::~Subject() {
    std::cout << "Goodbye, I was the Subject.\n";
}

void Subject::Attach(std::shared_ptr<IObserver> observer) {
    list_observer_.push_back(observer);
}

void Subject::Detach(std::shared_ptr<IObserver> observer) {
    list_observer_.remove(observer);
}

void Subject::Notify(){
    std::list<std::shared_ptr<IObserver>>::iterator iterator = list_observer_.begin();
    HowManyObserver();
    while (iterator != list_observer_.end()) {
    (*iterator)->Update(message_);
    ++iterator;
    }
}

void Subject::CreateMessage(std::string message ) {
    this->message_ = message;
    Notify();
}
void Subject::HowManyObserver() {
    std::cout << "There are " << list_observer_.size() << " observers in the list.\n";
}

void Subject::SomeBusinessLogic() {
    this->message_ = "change message message";
    Notify();
    std::cout << "I'm about to do some thing important\n";
}


Observer::Observer(Subject &subject) : subject_(subject) {
    this->subject_.Attach(std::make_shared<Observer>(this));
    std::cout << "Hi, I'm the Observer \"" << ++Observer::static_number_ << "\".\n";
    this->number_ = Observer::static_number_;
}

Observer::~Observer() {
    std::cout << "Goodbye, I was the Observer \"" << this->number_ << "\".\n";
}

void Observer::Update(const std::string &message_from_subject){
    message_from_subject_ = message_from_subject;
    PrintInfo();
}
void Observer::RemoveMeFromTheList() {
    subject_.Detach(std::make_shared<Observer>(this));
    std::cout << "Observer \"" << number_ << "\" removed from the list.\n";
}
void Observer::PrintInfo() {
    std::cout << "Observer \"" << this->number_ << "\": a new message is available --> " << this->message_from_subject_ << "\n";
}


int Observer::static_number_ = 0;
