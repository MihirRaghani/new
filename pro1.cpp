```cpp
#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l = 0.0, double w = 0.0) : length(l), width(w) {}

    void setLength(double l) {
        if (l >= 0) {
            length = l;
        } else {
            std::cout << "Error: Length cannot be negative." << std::endl;
        }
    }

    void setWidth(double w) {
        if (w >= 0) {
            width = w;
        } else {
            std::cout << "Error: Width cannot be negative." << std::endl;
        }
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double calculateArea() const {
        return length * width;
    }
};

int main() {
    Rectangle myRectangle;

    myRectangle.setLength(10.5);
    myRectangle.setWidth(5.0);

    std::cout << "Rectangle Dimensions:" << std::endl;
    std::cout << "Length: " << myRectangle.getLength() << std::endl;
    std::cout << "Width: " << myRectangle.getWidth() << std::endl;
    std::cout << "Area: " << myRectangle.calculateArea() << std::endl;

    Rectangle anotherRectangle(7.2, 4.8);
    std::cout << "\nAnother Rectangle Dimensions:" << std::endl;
    std::cout << "Length: " << anotherRectangle.getLength() << std::endl;
    std::cout << "Width: " << anotherRectangle.getWidth() << std::endl;
    std::cout << "Area: " << anotherRectangle.calculateArea() << std::endl;

    return 0;
}
```
