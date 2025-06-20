#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int N = pow(10, 5);
    int spf[N];
    vector<int> queries = {2,3,4,6,9};
    vector<vector<int>> ans;
    ans.resize(queries.size());
    for(int i = 0; i<N; i++){
        spf[i] = i;
    }  

    for(int i = 2; i*i<N ; i++){
        if(spf[i] == i){
            for(int j = i*i; j<= N; j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }

    for(int i = 0; i< queries.size(); i++){
        int num = queries[i];
        while (num != 1)            
        {
            ans[i].push_back(spf[num]);
            num = num/spf[num];
        }
    }

    for (int i = 0; i < ans.size(); i++){
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
 return 0;
}

