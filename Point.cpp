#include "Point.h"

int Point::pointCount = 0;

Point::Point() {
    pointCount++;
}

Point::~Point() {
    pointCount--;
}

void Point::inputCoordinates() {
    std::cout << "Enter x-coordinate: ";
    std::cin >> x;
    std::cout << "Enter y-coordinate: ";
    std::cin >> y;
    std::cout << "Enter z-coordinate: ";
    std::cin >> z;
}

void Point::displayCoordinates() const {
    std::cout << "Point Coordinates: (" << x << ", " << y << ", " << z << ")\n";
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}

int Point::getPointCount() {
    return pointCount;
}

void Point::saveToFile(const std::string& filename) const {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << x << " " << y << " " << z;
        outFile.close();
    }
    else {
        std::cerr << "Unable to open the file for writing.\n";
    }
}

void Point::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
        inFile >> x >> y >> z;
        inFile.close();
    }
    else {
        std::cerr << "Unable to open the file for reading.\n";
    }
}
