#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        ll x,y,p,q;
        cin>>x>>y>>p>>q;
        if(p==0){
            if(x==0){
                cout<<0<<"\n";
                continue;
            }else{
                cout<<-1<<"\n";
                continue;
            }
        }
        if(p==q){
            if(x==y){
                cout<<0<<"\n";
            }else{
                cout<<-1<<"\n";
            }
            continue;
        }
        ll f = (x+p-1)/p;
        ll s = ((y-x) + (q-p) -1)/(q-p);
        cout<<max(f,s)*q -y<<"\n";
    }
    return 0;
}
