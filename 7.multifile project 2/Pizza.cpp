#include "Pizza.h"
#include <string>
#include <iostream>
using namespace std;


Pizza::Pizza(string name, int diameter,
    int cost)  // similar to python import book.book
{
    this->name = name; //call from Pizza.h = string Name
    this->diameter = diameter;
    this->cost = cost;
    toppings.push_back("cheese");
}

void Pizza::addToppings(string topping)
{
    toppings.push_back(topping);
}

string Pizza::getName() const
{
    return name;
}

int Pizza::getDiameter() const
{
    return diameter;
}
int Pizza::getCost() const
{
    return cost;
}
void Pizza::printToppings() const
{
    for (string topping : toppings)
    {
        cout << "\t" << topping << endl;
    }
}