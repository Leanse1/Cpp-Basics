#include <iostream>
#include <string>
using namespace std;

//Function inside class are methods
//set - modify data; hence come with void
//get - retrieve data; hence come with return
//const - used with get to promise not to modify the object they're called upon
//this - to differentiate between pvt member variable (where this is used) and main call function
class House {
    public:
        void setNumStories(int numStories) //call from main function
        {
            //call from private member = main function
            this->numStories = numStories;
            
        }
        
        void setNumWindows(int numWindows)
        {
            this->numWindows = numWindows;
        }
        
        void setColor(string color)
        {
            this->color = color;
        }
        
        int getNumStories() const
        {
            return numStories;
        }
        
        int getNumWindows() const
        {
            return numWindows;
        }
        
        string getColor() const
        {
            return color;
        }
    
    private:
        int numStories;
        int numWindows;
        string color;
};

//const reference, we ensure that this function cannot accidentally modify the house object's state.
//& avoids making a copy of the house object, which can be more efficient, especially for larger objects.
void printHouseData(const House& house)
{
  cout<<"the House is "<<house.getColor() <<" and has "
        <<house.getNumStories() <<" stories and "
        <<house.getNumWindows() <<" windows."<<endl;  
}

int main() {
    House myHouse;
    House yourHouse;
    
    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("red");
    
    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(7);
    yourHouse.setColor("green");
    
    printHouseData(myHouse);
    printHouseData(yourHouse);

    return 0;
}

