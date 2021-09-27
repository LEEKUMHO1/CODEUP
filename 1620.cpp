#include <bits/stdc++.h>

using namespace std;

int f(int n){
    int ans=0;

    if(n<=9) return n;
    else
    {
        if(n>9999999){ans+=n/10000000;n%=10000000;}
        if(n>999999){ans+=n/1000000;n%=1000000;}
        if(n>99999){ans+=n/100000;n%=100000;}
        if(n>9999){ans+=n/10000;n%=10000;}
        if(n>999){ans+=n/1000;n%=1000;}
        if(n>99){ans+=n/100;n%=100;}
        if(n>9){ans+=n/10;n%=10;}
        ans+=n;
        f(ans);
    }
    
}

int main()
{
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}