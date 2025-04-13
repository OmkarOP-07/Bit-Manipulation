#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<int, int> get(int a, int b){
    pair<int,int> ans;
    b = a+b;
    ans.first= b-a;
    ans.second = b-ans.first;
    return ans;
}

int main(){
    pair<int,int> a;
    a = get(3,4);
    cout<<a.first<<" "<<a.second;

    return 0;
}
