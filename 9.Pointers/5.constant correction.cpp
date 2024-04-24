#include <iostream>
using namespace std;

void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();

int main() {
    noConst();
    cout << endl;
    
    cp2ncd();
    cout << endl;
    
    ncp2cd();
    cout << endl;
    
    cp2cd();
    cout << endl;
    return 0;
}

//neither pointer nor data is a constant (both can be changed)
void noConst()
{
    cout<<"original"<< endl;
    int* intPtr = new int(50);
    cout<<"\t noConst: " << *intPtr <<endl;
    *intPtr = 100;
    cout<<"\t changed value: " << *intPtr <<endl;
    delete intPtr;
    intPtr = new int(125);
    cout<<"\t new value: " << *intPtr <<endl;
    delete intPtr;
}

//pointer is constant(cannot be changed)
//data is not constant(can be changed)
void cp2ncd()
{
    cout << "original"<< endl;
    int* const intPtr = new int(100);
    cout << "\t cp2ncd: " <<*intPtr <<endl;
    *intPtr = 250;
    cout<<"\t new integer value : " << *intPtr <<endl;
    delete intPtr;
    //intPtr = new int(234) ERRoR!! ptr is constant
}

//pointer is not constant
//data is constant
void ncp2cd()
{
    cout << "`ncp2cd value"<<endl;
    const int* intPtr = new int(500);
    cout << "\t orig value: " << *intPtr << endl;
    delete intPtr;
    intPtr = new int(100);
    //*intPtr = 1500; Error!! data is constant
}

//pointer is constant
//data is constant
void cp2cd()
{
    const int* const intPtr = new int(1500);
    cout<<"inside cp2cd" << endl;
    cout << "\t orig value" << *intPtr << endl;
    
    //intPtr = 1212; error data is constant
    //intPtr = new int(1212); error pointer is contant
    
}