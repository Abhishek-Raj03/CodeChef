#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while (t--){
    int x,y,p,q;
    cin>>x>>y>>p>>q;
    int t1=x+10*p;
    int t2=y+10*q;
    if(t1<t2){
        cout<<"Chef";
    }
        else if(t2<t1){
            cout<<"Chefina";
        }
        else cout<<"Draw";
        cout<<"\n";
    }

}
