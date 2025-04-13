#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 1- Find the remainder of n by moduling it with 4.
// 2- If rem = 0, then XOR will be same as n. 
// 3- If rem = 1, then XOR will be 1. 
// 4- If rem = 2, then XOR will be n+1. 
// 5- If rem = 3 ,then XOR will be 0.

int findXorTillN(int n ){
        int rem = n % 4;
        
        if(rem == 0) return n;
        else if(rem == 1) return 1;
        else if(rem == 2) return n+1;
        else return 0;
    }
    
    int findXOR(int l, int r) {
        // complete the function here
        return (findXorTillN(l-1) ^ findXorTillN(r));
    }

int main()
{
    cout<<findXOR(4,8);
 return 0;
}