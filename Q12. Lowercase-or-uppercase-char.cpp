#include <iostream>
using namespace std;
int main () {
    char c;
    cout<<"Enter the char: ";
    cin>>c;
    if ('z'>=c && 'a'<=c) {
        cout<<"LowerCase"<<endl;
    } 
    else {
        cout<<"UpperCase"<<endl;
    }
    return 0;
}