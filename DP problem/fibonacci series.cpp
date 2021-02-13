#include<bits/stdc++.h>
using namespace std;
int dp[500];
int fibo(int n)
{
     dp[0]=0;
     dp[1]=1;
     for(int i=2;i<=n;i++){
    return dp[n]=fibo(n-1)+fibo(n-2);
     }
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
}
