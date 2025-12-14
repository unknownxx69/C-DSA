#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int count = 1;
    for(int i=1; i<=n; i++) {
        count *= i;
    }
    cout<<"The factorial of "<<n<<" is "<<count<<endl;
    return 0;
}