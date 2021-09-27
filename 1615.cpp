#include <bits/stdc++.h>

using namespace std;

int self(int k)
{
    int res = k;
    if(k>999)
    {
        res+=k/1000;
        k%=1000;
    }
    if(k>99)
    {
        res+=k/100;
        k%=100;
    }
    if(k>9)
    {
        res+=k/10;
        k%=10;
    }
    return res+=k;
}

int main()
{
    int a,b;
    int array[10000]={};

    cin>>a>>b;

    for(int i=0;i<=b;i++)
    {   
        array[self(i)]=1;
    }
    
    int ans(0);
    for(int j=a;j<=b;j++)
    {
        if(!array[j]) ans+=j;
    }

    cout<<ans<<endl;

    return 0;   
}