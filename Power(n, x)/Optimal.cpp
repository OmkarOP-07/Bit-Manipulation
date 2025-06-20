#include<iostream>
#include<bits/stdc++.h>
using namespace std;


double myPow(double x, int n)
{
    double result = 1.0;
    
    if (n < 0){
        x = 1 / x;
        n = -n;
    }

    while (n > 0){
        if (n & 1){
            result = result*x; 
        }
        x = x*x;
        n = n >> 1;
    }
    return result;
}

int main()
{
    double ans = myPow(2.000, 2);
    cout<<"The result is "<<ans;
 return 0;
}
