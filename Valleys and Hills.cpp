#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s="";
        if(n>m){
            for(int i=0;i<m;i++){
                s=s+"01";
            }
            for(int i=0;i<n-m;i++){
                s=s+"010";
            }
        }
        else if(n<m){
            for(int i=0;i<n;i++){
                s=s+"10";
            }
            for(int i=0;i<m-n;i++){
                s=s+"101";
            }
        }
        else {
            for(int i=0;i<=n;i++)
            s=s+"10";
        }
        cout<<s.size()<<"\n";
        cout<<s<<endl;
       
    }
}



