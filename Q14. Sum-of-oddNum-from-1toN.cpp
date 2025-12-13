#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i+=2) {
        sum += i;
    }
    cout<<"Odd sum: "<<sum<<endl;
    return 0;
}