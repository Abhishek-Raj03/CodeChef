#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if((x%k==0)&&(y%k==0)){
            cout<<"YES";
        }
        else
            cout<<"NO";
        cout<<"\n";
    }
    return 0;
}

