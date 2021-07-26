#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi, weight_kg, height_m;

    cout<<"Please enter weight in pounds: "<<endl;
    cin>>weight;

    cout<<"Please enter height in inches: "<<endl;
    cin>>height;

    weight_kg = weight * 0.453592;
    height_m = height * 0.0254;

    bmi = weight_kg / (height_m * height_m);

    cout<<"BMI is "<<((int)(bmi * 100 + .5) / 100.0)<<endl;

    return 0;

}