#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double weight, height, bmi;

    cout<<"Please enter weight in kilograms: "<<endl;
    cin>>weight;

    cout<<"Please enter height in meters: "<<endl;
    cin>>height;

    bmi = weight / (height * height);

    cout<<"BMI is "<<((int)(bmi * 100 + .5) / 100.0)<<endl;

    return 0;

}