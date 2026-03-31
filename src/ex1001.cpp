#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Animal {
public:
    virtual void speak() const {
        cout << "Some sound" << endl;
    }

    virtual ~Animal() {
        cout << "Animal cleaning" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() const override {
        cout << "Woof" << endl;
    }

    ~Dog() {
        cout << "Dog cleaning" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() const override {
        cout << "Meow" << endl;
    }

    ~Cat() {
        cout << "Cat cleaning" << endl;
    }
};

int main() {
    
    vector<Animal*> pets;
    pets.push_back(new Cat());
    pets.push_back(new Animal());
    pets.push_back(new Animal());

    
    for (Animal* pet : pets) {
        pet->speak();
    }

    
    Animal& d = *pets[0];
    Animal& c = *pets[1];
    d.speak();
    c.speak();

    
    Animal ad = *pets[0]; 
    Animal ac = *pets[1];
    ad.speak();
    ac.speak();

    
    for (Animal* pet : pets) {
        delete pet;
    }

    return 0;
}