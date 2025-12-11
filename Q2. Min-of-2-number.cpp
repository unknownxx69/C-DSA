#include <iostream>
using namespace std;
int main () {
    int a;
    int b;
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the 2nd number: ";
    cin>>b;
    cout<<endl;
    if (a>b) {
        cout<<b<<"is the minimum";
    }
    else {
         cout<<a<<" is the minimum";
    }
    return 0;
}