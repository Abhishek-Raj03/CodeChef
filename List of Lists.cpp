#include<iostream>
#include<unordered_map>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
            unordered_map<int,int> m;
        int n;
        cin>>n;
        int *a=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        int maxi=0;
        for(auto i:m){
            maxi=max(i.second,maxi);
        }
        if(n==maxi||n==1){
            cout<<0;
        }
        else if(maxi>=2){
            cout<<n-maxi+1;
        }
        else cout<<-1;
        cout<<"\n";
    }
}

