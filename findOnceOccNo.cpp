#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//T.C = N log2 M + M 
//M = size of the map
//S.C. = O(M)
int bruteSingleNumber(vector<int>& nums) {
    map<int,int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }
    for(auto it: mpp){
        if(it.second == 1){
            return it.first;
        }
    }
}

int singleNumber(vector<int> & nums){
    int x = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        x = x ^ nums[i];
    }
    return x;
}

int main()
{
    vector<int> nums = {1,2,3,1,3};
    cout<<singleNumber(nums);
 return 0;
}