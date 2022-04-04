#include<bits/stdc++.h>
using namespace std;
#define int long long
main()
{
   int n;
   cin>>n;
   while(n--){
    int a;
    cin>>a;
    int maxi=INT_MIN;
   int mini=INT_MAX;
    for(int i=0;i<a;i++){
    int temp;
    cin>>temp;
    maxi=max(maxi,temp);
    mini=min(mini,temp);
    }
    cout<<maxi-mini<<endl;
   }

}

