#include <iostream>

class Point2D {
private:
    double x;
    double y;

public:
    // Default constructor
    Point2D() : x(0.0), y(0.0) {}

    // Constructor with x and y coordinates
    Point2D(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // Copy constructor
    Point2D(const Point2D &other) : x(other.x), y(other.y) {}

    // Getter methods
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    // Setter methods
    void setX(double newX) {
        x = newX;
    }

    void setY(double newY) {
        y = newY;
    }

    // Method to display the point
    void display() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    // Using default constructor
    Point2D defaultPoint;
    std::cout << "Default Point: ";
    defaultPoint.display();

    // Using constructor with x and y coordinates
    Point2D pointWithCoords(3.5, 2.0);
    std::cout << "Point with Coordinates: ";
    pointWithCoords.display();

    // Using copy constructor
    Point2D copiedPoint = pointWithCoords;
    std::cout << "Copied Point: ";
    copiedPoint.display();

    return 0;
}
