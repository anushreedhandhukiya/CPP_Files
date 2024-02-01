#include<iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout << "Value of a : ";
    cin >> a;

    cout << "Value of b : ";
    cin >> b;

    int sum = a + b;

    cout << "Sum of a and b : " << a << " + " << b << " = " << sum;
    return 0;
}