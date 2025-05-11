// Print_all_divisors_of_no.cpp
#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

vector<int> allDivisors(int N){
    vector<int> ans;
    if(N == 0 ) 
    return ans;

    for(int i = 1; i <= sqrt(N); i++){
        if(i % N == 0){
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

 return 0;
}