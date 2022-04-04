#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        char a,b,c,x,y;
        cin>>a>>b>>c;
        cin>>x>>y;
        if(a==x||a==y){
            cout<<a<<endl;
           // continue;
        }
        else if(b==x||b==y){
            cout<<b<<endl;
           // continue;
        }
        else
            cout<<c<<endl;
    }
}

