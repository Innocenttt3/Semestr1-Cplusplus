#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct Person {
    int age;
    string name;
    string gender;
};

class Car {
    public:
    float volume;
    string brand;
    string model;
    int productionYear;
};

int main() {
    Person person;
    person.age = 20;
    person.name = "Bob";
    person.gender = "Female";

    Car car;
    car.volume = 1.5;
    car.brand = "Dacia";
    car.model = "Logan";
    car.productionYear = 2005;

    // zadanie 4 - odpowiedz Struktura ma domyslnie publiczne pola, podczas gdy klasa ma pola domyślnie prywatne.
}