#include<iostream>
#include<bits/stdc++.h>
# define int long long
using namespace std;
 main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            int p=n-2;
            cout<<1+(p*(p+1))<<"\n";
    }
}
