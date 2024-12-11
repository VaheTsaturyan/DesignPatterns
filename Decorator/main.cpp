#include "decorator.h"

int main(){
    std::shared_ptr<Shape> rect = std::make_shared<Rect>();
    std::shared_ptr<Shape> circle = std::make_shared<Circle>();

    rect->drow();
    circle->drow();

    std::shared_ptr<Shape> colored_rect = std::make_shared<Colored>(rect, "red");
    std::shared_ptr<Shape> colored_circle = std::make_shared<Colored>(circle, "blue");
    
    std::cout << "\nAfter colored\n";
    colored_rect->drow();
    colored_circle->drow();


    return 0;
}
