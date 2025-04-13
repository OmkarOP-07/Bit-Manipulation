#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int minBitFlips(int start, int goal) {
    int a = start;
    int b = goal;
    int i = 1;
    int cnt = 0;
    while(a != b){
        //(i & a) (i & b)
        int temp = a^b;
        if(temp&i){
            a = a ^ i;
            cnt++;
        }
        i = i<<1;
    }
    return cnt;
}

int main()
{
    cout<<minBitFlips(7,10);
 return 0;
}