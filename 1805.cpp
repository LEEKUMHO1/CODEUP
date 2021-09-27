#include<bits/stdc++.h>

using namespace std;

struct gas
{
    int num;
    int gas;
};


int mian()
{
    
    int n;
    cin>>n;
    struct gas a[n];
    for(int i=0;i<n;i++)
    {           
        cin>>a[i].num>>a[i].gas;
    }
    for(int j=0;j<n;j++)
    {
        cout<<a[j].num<<" "<<a[j].gas;
    }
    return 0;    
}