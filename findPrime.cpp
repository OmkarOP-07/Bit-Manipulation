#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
//T.C. = O()
set<int> find(int N)
{
    set<int> li;
    for (int i = 2; i <= sqrt(N) ; i++){
        if(N % i == 0){
            li.insert(i);
            while(N % i == 0 ) N = N/i;
        }
    }
    if(N != 1) li.insert(N);
    return li;
}

int main() {
    vector <int> nums = {2,14,19,19,5,13,18,10,15,20};
    set<int> ans;
    for(int i = 0 ; i < nums.size(); i++){
        set<int> temp = find(nums[i]);
        for(auto it : temp){
            ans.insert(it);
        }
    }
    int count = 0;
    for(auto it : ans ){
        cout<<it<<" ";
        count++;
    }
    cout<<count;
}