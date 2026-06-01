#include<iostream>
using namespace std;


int factorial(int n) {
    // base case 
    cout << n << endl;
    return n * factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout << ans << endl;

    return 0;
}