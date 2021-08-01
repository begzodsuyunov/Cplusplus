#include <iostream>
using namespace std;

int main() {

    int leapYear;

    cout<<"Please enter a leap year: "<<endl;
    cin>>leapYear;

    if(leapYear % 4 == 0) {
        if(leapYear % 100 == 0) {
            if(leapYear % 400 == 0)
                cout<<leapYear<<" was a leap year"<<endl;
            else
                cout<<leapYear<<" was a not leap year"<<endl;
        }
        else
            cout<<leapYear<<" was a leap year"<<endl;
    }
    else
        cout<<leapYear<<" was not a leap year"<<endl;


    return 0;
}