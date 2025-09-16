#include <iostream>
#include <string>
#include <vector>
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

    virtual void display() const = 0;
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

    void display() const override {
        std::cout << "Shape: Circle" << std::endl;
        std::cout << "Color: " << getColor() << std::endl;
        std::cout << "Radius: " << radius << std::endl;
        std::cout << "Area: " << getArea() << std::endl;
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

    void display() const override {
        std::cout << "Shape: Rectangle" << std::endl;
        std::cout << "Color: " << getColor() << std::endl;
        std::cout << "Length: " << length << std::endl;
        std::cout << "Width: " << width << std::endl;
        std::cout << "Area: " << getArea() << std::endl;
    }
};

int main() {
    std::vector<Shape*> shapes;

    Circle* myCircle = new Circle();
    myCircle->setColor("Red");
    myCircle->setRadius(5.0);
    myCircle->calculateArea();

    Rectangle* myRectangle = new Rectangle();
    myRectangle->setColor("Blue");
    myRectangle->setDimensions(4.0, 6.0);
    myRectangle->calculateArea();

    shapes.push_back(myCircle);
    shapes.push_back(myRectangle);

    for (const auto& shapePtr : shapes) {
        shapePtr->display();
        std::cout << "--------------------" << std::endl;
    }

    delete myCircle;
    delete myRectangle;

    return 0;
}
