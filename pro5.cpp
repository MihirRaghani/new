#include <iostream>
#include <vector>

class Animal {
public:
    virtual void sound() const = 0;
    virtual void move() const = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() const override {
        std::cout << "Dog barks: Woof! Woof!" << std::endl;
    }

    void move() const override {
        std::cout << "Dog runs on four legs." << std::endl;
    }
};

class Bird : public Animal {
public:
    void sound() const override {
        std::cout << "Bird chirps: Tweet! Tweet!" << std::endl;
    }

    void move() const override {
        std::cout << "Bird flies through the air." << std::endl;
    }
};

int main() {
    std::vector<Animal*> animals;

    animals.push_back(new Dog());
    animals.push_back(new Bird());

    for (const auto& animalPtr : animals) {
        animalPtr->sound();
        animalPtr->move();
        std::cout << "--------------------" << std::endl;
    }

    for (const auto& animalPtr : animals) {
        delete animalPtr;
    }

    return 0;
}
