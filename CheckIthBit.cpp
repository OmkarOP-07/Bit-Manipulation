#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkKthBit(int n, int k)
{
    // Your code here
    if ((n >> k) & 1)
        return true;
    else
        return false;
}

int main()
{
    cout<<checkKthBit(4,1);
    return 0;
}