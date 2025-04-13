#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void bitManipulation(int num, int i) {
    int getBit = (num>>i-1) & 1;
    cout<<getBit<<" ";
    int temp = 1;
    temp = temp << i-1;
    int setBit = num | temp;
    cout<<setBit<< " ";
    temp = ~temp;
    int clearBit = num & temp;
    cout<<clearBit;
}


int main()
{
    bitManipulation(8, 1);
 return 0;
}

