#include <iostream>
using namespace std;

int main()
{
    double kilometers,
           miles;

    cout << "Welcome to my Distance Converter \n" << endl;

    cout << "Please enter the distance in Kilometers: " << endl;
    cin >> kilometers;

    miles = kilometers * 0.621371;

    cout << "Your number in miles: " << miles << endl;

    return 0;
}