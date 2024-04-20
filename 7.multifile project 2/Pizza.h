#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>
using namespace std;

class Pizza
{
public:
    Pizza(string name, int diameter,
        int cost);
    void addToppings(string toppings); //no known value input
    string getName() const;
    int getDiameter() const;
    int getCost() const;
    void printToppings() const;

private:
    string name;
    int diameter;
    int cost;
    vector<string> toppings;
};

#endif
