#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    int *b=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++){
      cout<<a[i]+b[i]<<endl;
    }
}
