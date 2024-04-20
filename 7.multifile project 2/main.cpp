#include <iostream>
#include "Pizza.h"
using namespace std;

void printPizzaData(const Pizza& pizza);

int main()
{
    Pizza johnspizza("Cheese pizza", 8, 5);

    Pizza mattpizza("Pepperoni pizza", 7, 6);
    mattpizza.addToppings("pepperoni");

    Pizza special("The special pizza", 12, 10);
    special.addToppings("pepper");
    special.addToppings("onion");
    special.addToppings("mushroom");

    printPizzaData(johnspizza);
    printPizzaData(mattpizza);
    printPizzaData(special);


    return 0;
}

void printPizzaData(const Pizza& pizza)
{
    cout << "Name: " << pizza.getName() << endl;
    cout << "Diameter: " << pizza.getDiameter()
        << " Cost: $" << pizza.getCost() << ", "
        << "Toppings: " << endl;

    pizza.printToppings();
    cout << endl;
}
