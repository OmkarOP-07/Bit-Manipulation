// Given a no N, Print all prime numbers 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printAllPrimeTIllN(int N){
    int prime[N+1] ;
    for (int i = 0; i <= N; i++) prime[i] = 1;   
    
    //Mark 0's for non prime numbers 
    for (int i = 2; i < sqrt(N); i++){
        if(prime[i] == 1){
            for(int j = i*i; j <= N; j+=i){
                prime[j] = 0;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if(prime[i] == 1)
            cout<<i<<" ";
    }
    
}

int main()
{
    printAllPrimeTIllN(30);
 return 0;
}