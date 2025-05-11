// Print_all_divisors_of_no.cpp
#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

vector<int> allDivisors(int N){
    vector<int> ans;
    for(int i = 1; i <= sqrt(N); i++){
        if(N % i == 0){
            ans.push_back(i);
            if(N/i != i){
                ans.push_back(N/i);
            }
        }
    }
    return ans;
}

int main()
{
    int N = 36;
    vector<int> ans;
    ans = allDivisors(N);
    cout<<"ANS :";
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
 return 0;
}