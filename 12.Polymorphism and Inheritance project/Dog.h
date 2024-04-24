#ifndef DOG_H
#define DOG_H

#include <string>
#include "Animal.h"
using namespace std;

class Dog : public Animal
{
	public:
		Dog(string name, double weight, string breed); // name, weight inheritance from animal class
		string getBreed() const;
		void digHole() const;
		string makeNoise() const;
		void chaseCat() const;

	private:
		string breed;

};

#endif
