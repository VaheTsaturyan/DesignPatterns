#include "decorator.h"


void Rect::drow(){
    std::cout << "Rect\n";
}

void Circle::drow(){
    std::cout << "Circle\n";
}


Decorator::Decorator(std::shared_ptr<Shape> shape) : shape_(shape){}
void Decorator::drow() {
    shape_->drow();  
}



Colored::Colored(std::shared_ptr<Shape> shape, std::string color) : Decorator(shape), color_(color) {}
void Colored::drow(){
    Decorator::drow();
    std::cout << "color is " << color_ << std::endl;
}
