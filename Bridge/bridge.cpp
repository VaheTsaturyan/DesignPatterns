#include "bridge.h"

#include <iostream>



std::string Red::get_color(){
    return "red";
}

std::string Blue::get_color(){
    return "blue";
}


Shape::Shape():color_(nullptr){}

Shape::Shape(std::shared_ptr<Color> color): color_(color){}

Circle::Circle():Shape(){}

Circle::Circle(std::shared_ptr<Color> color): Shape(color){};

void Circle::drow(){
    std::cout << "circle is drowing and color is " << color_->get_color() ;

}

Scuare::Scuare():Shape(){}

Scuare::Scuare(std::shared_ptr<Color> color): Shape(color){};
    void Scuare::drow(){
    std::cout << "scuare  is drowing and color is " << color_->get_color();
}
