#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n){
    int r;
    if(n != 1){
        r = n * factorial(n-1);
    }
    else
        r = 1;
    return r;
}

int main() {
    int n;
    cin >> n;
    int r = factorial(n);
    cout << r << endl;
    return 0;
}