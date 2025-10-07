#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
  int t;
  cin>>t;
  while(t--)
  {
  int row, col;
  cin>>row>>col;
    ll ans=0;
   if(row>=col){
    if(row%2==0){
        ans=(ll)(row*row)-(col-1);
    }
    else{
        ans=(ll)((row-1)*(row-1))+col;
    }
   }
   else{
       if(col%2==1){
           ans=(ll)(col*col)-(row-1);
       }
       else{
           ans=(ll)((col-1)*(col-1))+row;
       }
   }
    cout<<ans<<endl;

  }
  return 0;
}