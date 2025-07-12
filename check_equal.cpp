//check if two entered if they are equal or not
#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    
    if(num1==num2)
        cout<<"the numbers are Equal";
    else
        cout<<"the numbers are Not Equal";

    return 0;
}