#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t; cin>>t;
    while(t--)
    {
        int x,y; cin>>x>>y;
        int s=x*y;
        if(s%2==0)
            cout<<"Utkrisht\n";
        else 
            cout<<"Sanchit\n";
    }
    return 0;
}

////////////m2

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y; cin>>x>>y;
		if((x*y)%2==0)
			cout<<"Utkrisht\n";
		else
			cout<<"Sanchit\n";
	} 
	return 0;
}