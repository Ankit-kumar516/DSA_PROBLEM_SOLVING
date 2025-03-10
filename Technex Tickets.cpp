#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1 || n==3)
        {
            cout<<1<<endl;
        }
        else
        {
            for(int i=2; i<=n; i++)
            {
                if(n==2*(i-1) || n==2*(i-1)+3)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}