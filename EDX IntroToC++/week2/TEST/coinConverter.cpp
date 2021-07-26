#include <iostream>
using namespace std;

int main() {
    int dollars, cents, numberOfQuarters, numberOfDimes, numberOfNickels, numberOfPennies, amount, rest;

    double total;

    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;

    cout<<"Please enter the number of dollars: "<<endl;
    cin>>dollars;

    cout<<"Please enter the number of cents: "<<endl;
    cin>>cents;
    
    //converting dollars to cents to make the conversion easier and avoid precision error
    amount = (dollars*100) + cents;
    rest = amount;

    numberOfQuarters = (amount / quarters);
    rest = rest % quarters;

    numberOfDimes = (rest / dimes);
    rest = rest % dimes;

    numberOfNickels = (rest / nickels);
    rest = rest % nickels;

    numberOfPennies = rest;

    cout<<"The coins are "<<numberOfQuarters<<" quarters, "<<numberOfDimes<<" dimes, "<<numberOfNickels<<" nickels and "<<numberOfPennies<<" pennies"<<endl;

    return 0;

}