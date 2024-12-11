#include "bridge.h"

int main(){
    std::shared_ptr<Color> red = std::make_shared<Red>();
    std::shared_ptr<Shape> circle = std::make_shared<Circle>(red);
    circle->drow();
}
