#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%k==0){
            cout<<n/k;
        }
        else {
            cout<<-1;
        }
        cout<<"\n";
    }
    return 0;
}
