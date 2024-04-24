#include <iostream>
#include "Animal.h"
#include "Dog.h"
using namespace std;

int main()
{
	//Animal myAnimal("Sam", 100);
	Dog dog("Rover", 80, "Greyhound");
	Animal* dogPtr = new Dog("Fido", 115, "Golden Retriever");

	cout << "Make noise? " << dogPtr->makeNoise() << endl;

	//cout << "Animal name: " << myAnimal.getName() << endl;
	//cout << "Animal weight: " << myAnimal.getWeight() << endl;
	//cout << "Animal Noise: " << myAnimal.makeNoise() << endl;

	cout << "Dog's name: " << dog.getName() << endl;
	cout << "Dog's weight: " << dog.getWeight() << endl;
	cout << "Dog's Noise: " << dog.makeNoise() << endl;
	dog.digHole();
	dog.chaseCat();

	delete dogPtr;
	dogPtr = nullptr;

	return 0;
}