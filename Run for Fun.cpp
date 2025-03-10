#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y,stops;
    cin>>x>>y;
    stops=y/x;
    if(y%x==0)
    {
        stops--;
    }
    cout<<stops;
}