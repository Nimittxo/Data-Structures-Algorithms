#include <iostream>

class Point2D {
private:
    double x;
    double y;

public:
    Point2D() : x(0.0), y(0.0) {}

    Point2D(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    Point2D(const Point2D &other) : x(other.x), y(other.y) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    void setX(double newX) {
        x = newX;
    }

    void setY(double newY) {
        y = newY;
    }

    void display() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point2D defaultPoint;
    std::cout << "Default Point: ";
    defaultPoint.display();

    Point2D pointWithCoords(3.5, 2.0);
    std::cout << "Point with Coordinates: ";
    pointWithCoords.display();
    Point2D copiedPoint = pointWithCoords;
    std::cout << "Copied Point: ";
    copiedPoint.display();

    return 0;
}
