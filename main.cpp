#include <iostream>
#include <vector>
#include "functions_to_implement.cpp"
using namespace std;

int main()
{
    cout << "negative Sign call " << Sign(-5) << endl;
    cout << "postive Sign call " << Sign(5) << endl;
    vector<double> vect;
    vect.push_back(10.1);
    vect.push_back(20.2);
    vect.push_back(30.3);
    cout << "Sum of vector call " << Sum(vect) << endl;
    cout << "Product of vector call " << Product(vect) << endl;
}