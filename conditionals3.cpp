// Challenge: Write a program that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea:* Green Tea: $2
// Black Tea: $3
// Oolong Tea: $4
#include <iostream>
using namespace std;
int main(){
    int choice;
    double price;

    cout<<"select your tea\n";
    cout<<"1. Green tea\n";
    cout<<"2. Lemon tea\n";
    cout<<"3. Oolong tea\n";
    cout<<"Enter your choice in number: \n";

    cin>>choice;
    switch(choice){
        case 1:
        price = 2.0;
        cout<<"You selected green tea.Price:"<<price<<endl;
        break;
        case 2:
        price = 3.0;
        cout<<"You selected green tea.Price:"<<price<<endl;
        break;
        case 3:
        price = 4.0;
        cout<<"You selected green tea.Price:"<<price<<endl;
        break;
        default:
            cout<<"Invalid choice"<<endl;
        break;
    }
}