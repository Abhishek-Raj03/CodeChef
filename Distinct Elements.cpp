#include<iostream>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &i:a)
        cin>>i;
    map<int ,int> freq;
    long long int ans=1;
    int mod7=(int)pow(10,9)+7;
    for(int i:a){
        freq[i]++;
    }
    for(auto pii:freq){
        int f=pii.second;
        ans*=(f+1);
        ans%=mod7;
    }
    ans--;
    cout<<ans<<endl;
    }
}


