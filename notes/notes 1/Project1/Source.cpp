// Welcome to part 1 of RJ's study notes//

// Starting from the beginning//

/*model is a representation of reality

Ex: Modeling a car

For sales: Price , Make, model, seats, mileage

For Rideshares: passengers, trunk_size

For parking: size

*/ 

/* Encapsulation

keeping data and operations within their models

Models must only include informatiom about themselves

Operations must be concise

For example: no data aboutprice of car bike rack in the car class

*/

/* Classes

The c++ construct for models 

Classes contain members of two types: data and functions 

For example: Car.make, Car.paint(), Car.seatamount()


*/

/*   Access Specifiers

Members may be public or private 

Public members are accessible to any part of the code 

Private members are only accessible within the class

Protected members are accessible in inherited classes 
*/

/* Inheritance and Polymorphism

A class may have subclasses based on it

A subclass mat inherit members from the superclass

Ex: Animal.legs, Skeleton.Attack()

Polymorphism: sibling classes (Same function or object behaves differently in different scenarios)


// Base class
class Animal {                                  (base class)
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Pig : public Animal {             (Inheritance)
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
   }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();                (Polymorphism using the same function, but it compiles differently)
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}



*/

