//there is seven days in the week, each day have a number corespond to it
//the problem can be solved using if and else if or switch
//here I choose switch for preformance
#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number:";
    cin>>num;
    switch(num){
        case 1:
            cout<<"Saturday";
            break;
        case 2:
            cout<<"Sunday";
            break;
        case 3:
            cout<<"Monday";
            break;
        case 4:
            cout<<"Tuesday";
            break;
        case 5:
            cout<<"Wednesday";
            break;
        case 6:
            cout<<"Thursday";
            break;
        case 7:
            cout<<"Friday";
            break;
        default:
            cout<<"Invalid input...";
    }
    
    return 0;
}