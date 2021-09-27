#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,ans;
    int years(100);
    int years1(12);

    cin>>a>>b;

    if(b<=2)
    {
        ans = years - a/10000 +13;
    }
    else if(b>2)
    {
        ans = years1 - a/10000 + 1;
    }

    cout<<ans;

    return 0;
}