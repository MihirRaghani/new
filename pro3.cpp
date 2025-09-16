#include <iostream>
#include <string>
#include <cmath>

class Shape {
private:
    std::string color;
    double area;

public:
    void setColor(const std::string& c) {
        color = c;
    }

    std::string getColor() const {
        return color;
    }

    virtual double calculateArea() = 0;

    void setArea(double a) {
        area = a;
    }

    double getArea() const {
        return area;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }

    double calculateArea() override {
        double circleArea = M_PI * radius * radius;
        setArea(circleArea);
        return circleArea;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double calculateArea() override {
        double rectangleArea = length * width;
        setArea(rectangleArea);
        return rectangleArea;
    }
};

int main() {
    Circle myCircle;
    myCircle.setColor("Red");
    myCircle.setRadius(5.0);
    std::cout << "Circle's color is: " << myCircle.getColor() << std::endl;
    std::cout << "Circle's area is: " << myCircle.calculateArea() << std::endl;

    Rectangle myRectangle;
    myRectangle.setColor("Blue");
    myRectangle.setDimensions(4.0, 6.0);
    std::cout << "\nRectangle's color is: " << myRectangle.getColor() << std::endl;
    std::cout << "Rectangle's area is: " << myRectangle.calculateArea() << std::endl;

    return 0;
}
