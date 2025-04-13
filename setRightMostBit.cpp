#include<iostream>
using namespace std;
int setBit(int n)
{
    int ans = 0;
    int posi = 0;
    int i = 1;
    // Loop
    while (1)
    {
        if (!(n & i))
        {
            ans = n | (1 << posi);
            break;
        }
        i = i << 1;
        posi++;
    }
    return ans;
}

int main(){
    int m = 15;
    cout<<setBit(m);
}