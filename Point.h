#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>

class Point {
private:
    static int pointCount;

    double x;
    double y;
    double z;

public:
    Point();
    ~Point();

    
    void inputCoordinates();
    void displayCoordinates() const;

    
    double getX() const;
    double getY() const;
    double getZ() const;

    static int getPointCount();

    
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};

#endif 

