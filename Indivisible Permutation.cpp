#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while (t--){
     int n;
     cin>>n;
     int *a=new int[n];
     for(int i=0;i<n;i++){
        if(i==0)
            a[i]=n;
        else if(i==n-1)
            a[i]=n-1;
        else{
            a[i]=i;
        }
     }
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }
     cout<<"\n";

    }

}
