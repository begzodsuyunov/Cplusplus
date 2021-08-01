#include <iostream>
using namespace std;

int main() {

    int grade1, grade2;
    int average;

    cout<<"Please enter two grades, seperated by a space: "<<endl;
    cin>>grade1>>grade2;

    average = (grade1 + grade2) / 2;

    if(average < 60) 
        cout<<"Student Failed:("<<endl;
    else if(average >= 90)
        cout<<"Student graduted with Honors:)"<<endl;
    else
        cout<<"Student Graduated!"<<endl;
    return 0;
}