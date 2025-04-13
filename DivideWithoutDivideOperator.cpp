#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Brute Force
// T.C. = O(Divident)
int Brute(int dividend, int divisor)
{
    int sum = 0;
    int cnt = 0;
    while (sum + divisor <= dividend)
    {
        sum += divisor;
        cnt++;
    }
    return cnt;
}


// T.C = O(log2(N)^2)
// S.C = 1
int divide(int dividend, int divisor) {
    if(dividend == divisor) return 1;
    bool sign = true;
    if(dividend >= 0 && divisor < 0) sign = false;
    if(divisor >= 0 && dividend < 0) sign = false;  
    long n = abs((long)dividend);
    long d = abs((long)divisor);
    long quotient = 0;
    while(n >= d){
        int cnt = 0;
        while(n >= (d<<(cnt+1))){
            cnt += 1;
        }
        quotient += 1<<cnt;
        n -= (d<<cnt);
    }
    if(quotient == (1<<31) && sign) return INT32_MAX;
    if(quotient == (1<<31)&& sign==false) return INT32_MIN;

    return sign ? quotient : -quotient; 
}

int main (){
    int dividend = 32;
    int divisor = 3;
    cout<<divide(dividend,divisor);
    vector<pair<int,int>> time;
}