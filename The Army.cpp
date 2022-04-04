#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            int n,m;
        cin>>n>>m;
     int mini=INT_MAX,maxi=INT_MIN;
     while(m--){
         int a;
         cin>>a;
         maxi=max(maxi,a);
         mini=min(mini,a);
     }
     for(int i=0;i<n;i++){
        cout<<max(abs(maxi-i),abs(mini-i))<<" "; 
     }
     cout<<"\n";
    
    }
}

