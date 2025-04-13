#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//T.C. = log2 n
//S.C. = log2 n

string convertToBinary(int x){
    string ans  = "";
    if(x != 1){
        while(x!=1){
            if(x%2 == 1){
                ans.append("1");
            } else {
                ans.append("0");
            }
            x = x/2;
        }
        ans.append("1");
    } else {
        return "";
    }
  
    reverse(ans.begin(), ans.end());
    return ans;
}

int convertToDecimal(string x){
    int ans  = 0;
    int power = 0;
    reverse(x.begin(),x.end());
    for (int i = 0; i < x.size(); i++)
    {
        if(x[i] == '1'){
            ans += pow(2,i);
        } else {

        }
    }
    return ans;
}

string onesCompipliment(string x){
    string one = "";
    for (int i = 0; i < x.size(); i++)
    {
        one.append("1");
    }
    int ans = convertToDecimal(x) ^ convertToDecimal(one);
    string ansStr = convertToBinary(ans);
    return ansStr;
}

int main()
{
    int x = 10;
    string y = "1011";
   // cout<<convertToBinary(x)<<endl;
    //cout<<convertToDecimal("1")<<endl;
    cout<<"ans:"<<onesCompipliment("0110");
  
 return 0;
}