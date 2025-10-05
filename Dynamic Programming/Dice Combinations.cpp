#include <bits/stdc++.h>
using namespace std;
 
 
int solve(int n, vector<int>& dp){
    if(n<0)return 0;
    if(n==0)return 1;
    int mod=1e9+7;
    if(dp[n]!=-1)return dp[n]%mod;
    int ans=0;
    for(int i=1; i<=6; i++){
        if(i>n)break;
        ans=((ans%mod)+(solve(n-i, dp)%mod))%mod;
    }
    return dp[n]=ans%mod;
}
 
int main()
{
    int n;
    cin >> n;
    int mod=1e9+7;
    // cout<<1230725361%mod<<endl;
    vector<int> dp(n+1, -1);
    vector<int> outcome={1, 2, 3, 4, 5, 6};
    cout << solve(n, dp) << endl;
    return 0;
}
