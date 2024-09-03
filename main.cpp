#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
    virtual void sound() = 0;
};
class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof!" << endl;
    }
};
class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow!" << endl;
    }
};
class Bird : public Animal {
public:
    void sound() override {
        cout << "Chirp!" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    Bird bird;
    Animal* animals[] = {&dog, &cat, &bird};
    for (Animal* animal : animals) {
        animal->sound();
    }

    return 0;
}