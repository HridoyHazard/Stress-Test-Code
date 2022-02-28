#include<bits/stdc++.h>

using namespace std;

void solve(){
   int n;
   cin>>n;
   for(int pete = 1 ; pete < n ; pete++){
       int billy = n - pete;
       if(pete%2== 0 && billy%2 == 0){
           cout<<"YES"<<endl;
           return ;
       }
   }
   cout<<"NO"<<endl;
}
int main(){

    solve();
}