#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
string s;
cin>>s;
int count=1, ans=0;
for(int i=1; i<s.length(); i++){
    if(s[i]==s[i-1]){
        count++;
    }   
    else{
        ans=max(ans,count);
        count=1;
    }
}
        ans=max(ans,count);

cout<<ans<<endl;
return 0;
}