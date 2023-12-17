#include "Point.h"

int main() {
    Point point1;
    point1.inputCoordinates();
    point1.displayCoordinates();

    
    point1.saveToFile("point_data.txt");

    Point point2;
    point2.loadFromFile("point_data.txt");
    point2.displayCoordinates();

    std::cout << "Total points: " << Point::getPointCount() << std::endl;

    return 0;
}
