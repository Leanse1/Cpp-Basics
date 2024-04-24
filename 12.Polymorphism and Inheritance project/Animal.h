#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal
{
   public:
	   Animal(string name, double weight);
	   string getName() const;
	   double getWeight() const;
	   void setName(string name);
	   void setWeight(double weight);
	   //virtual class: can be overridden and redefined by subclasses of an outer class
	   //do dynamic binding
	  // virtual string makeNoise() const;
	  //pure virtual function: doesn't have any use in the base class
	   virtual string makeNoise() const = 0;

   private:
	   string name;
	   double weight;


};



#endif

