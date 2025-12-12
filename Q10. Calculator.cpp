#include <iostream>
using namespace std;
int main () {
    int a;
    int b;
    cout<<"Enter the 1st number: ";
    cin>>a;
    char op;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout<<"Enter the 2nd number: ";
    cin>>b;
    if (op == '+') {
        cout<<"Sum is: "<<a+b<<endl;
    }
    else if (op == '-') {
        cout<<"Subtraction is: "<<a-b<<endl;
    }
    else if (op == '*') {
        cout<<"Product is: "<<a*b<<endl;
    }
    else if (op == '/') {
        cout<<"Division is: "<<a/b<<endl;
    }
    return 0;
}