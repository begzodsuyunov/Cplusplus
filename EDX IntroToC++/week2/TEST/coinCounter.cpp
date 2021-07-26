#include <iostream>
using namespace std;

int main() {
    int number_of_quarters, number_of_dimes, number_of_nickels, number_of_pennies, dollar, cents;

    double total;

    float quarters = 0.25;
    float dimes = 0.1;
    float nickels = 0.05;
    float pennies = 0.01;

    cout<<"Please enter the number of quarters: "<<endl;
    cin>>number_of_quarters;

    cout<<"Please enter the number of dimes: "<<endl;
    cin>>number_of_dimes;

    cout<<"Please enter the number of nickels: "<<endl;
    cin>>number_of_nickels;

    cout<<"Please enter the number of pennies: "<<endl;
    cin>>number_of_pennies;
    
    total = (number_of_dimes * dimes) + (number_of_nickels * nickels) + (number_of_pennies * pennies) + (number_of_quarters * quarters);

    dollar = (int)total;
    cents = (int)((total - dollar)*100);


    cout<<"The total is "<<dollar<<" dollars and " <<cents<<" cents"<<endl;

    return 0;

}