#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int twoOddNum(int Arr[], int N)
{
    int xval = 0;
    for (int i = 0; i < N; i++)
    {
        xval ^= Arr[i];
    }
    xval &= (xval & -xval);

    int b1 = 0,b2 = 0;
    for (int i = 0; i < N; i++)
    {
        if (xval & Arr[i])
        {
            b1 = b1^Arr[i]; 
        }
        else
        {
            b2 = b2^Arr[i];
        }
    }
    cout<<b1<<" "<<b2;
}

int main()
{
    int Arr[] = {1, 1, 2, 8, 2, 7, 7, 9};
    twoOddNum(Arr, 8);
    return 0;
}