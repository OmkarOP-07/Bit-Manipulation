// Given a no N, Print all prime numbers 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// T.C.
bool isPrime(int N){
    if (N <= 3) return true;          // 2 and 3 are prime
    if (N % 2 == 0 || N % 3 == 0) return false; // eliminate multiples of 2 and 3

    for (int i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0)
            return false;
    }
    return true;
}

int printAllPrimes(int N){
    for(int i = 2 ; i <= N; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main()
{
    int N = 30;
    printAllPrimes(N);
 return 0;
}