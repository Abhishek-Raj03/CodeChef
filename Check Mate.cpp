#include<iostream>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        if(x1==1){
            if(x2==2&&y2!=y1-1&&y2!=y1+1){
                if(y2!=y3&&y3!=y1-1&&y3!=y1+1){
                    cout<<"YES"<<"\n";
                    continue;
                }
            }
            if(x3==2&&y3!=y1-1&&y3!=y1+1){
                if(y3!=y2&&y2!=y1-1&&y2!=y1+1){
                    cout<<"YES"<<"\n";
                    continue;
                }
            }
        }
       if(x1==8){
            if(x2==7&&y2!=y1-1&&y2!=y1+1){
                if(y2!=y3&&y3!=y1-1&&y3!=y1+1){
                    cout<<"YES"<<"\n";
                    continue;
                }
            }
            if(x3==7&&y3!=y1-1&&y3!=y1+1){
                if(y3!=y2&&y2!=y1-1&&y2!=y1+1){
                    cout<<"YES"<<"\n";
                    continue;
                }
            }
        }
         if(y1==1){
            if(y2==2&&x2!=x1-1&&x2!=x1+1){
                if(x2!=x3&&x3!=x1-1&&x3!=x1+1){
                    cout<<"YES"<<"\n";
                    continue;
                }
            }
            if(y3==2&&x3!=x1-1&&x3!=x1+1){
                if(x3!=x2&&x2!=x1-1&&x2!=x1+1){
                    cout<<"YES"<<"\n";
                    continue;
                }
            }
        }
         if(y1==8){
            if(y2==7&&x2!=x1-1&&x2!=x1+1){
                if(x2!=x3&&x3!=x1-1&&x3!=x1+1){
                    cout<<"YES"<<"\n";
                    continue;
                }
            }
            if(y3==7&&x3!=x1-1&&x3!=x1+1){
                if(x3!=x2&&x2!=x1-1&&x2!=x1+1){
                    cout<<"YES"<<"\n";
                    continue;
                }
            }
        }

        cout<<"NO"<<"\n";
    }
    return 0;
}