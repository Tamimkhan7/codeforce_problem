#include <iostream>
using namespace std;
int x=10;//global variable

int main ()
{
    int x = 50; //local variable
    x=100;
    cout<<:: x<<" " <<endl;

        return 0;
}


/*#include <iostream>
using namespace std;
int x=10;//global variable

void display()
{
    cout<<"Inside the display variable : "<<x<<endl;
}


int main ()
{
    //int x = 50; //local variable
    cout<<"Inside the main variable : "<<x<<" " <<endl;
    display();
        return 0;
}*/
