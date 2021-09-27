#include <bits/stdc++.h>

using namespace std;

int main()
{   
    vector<int> temp;
    for(int i =0; i<3; i++)
    {   int a;
        cin>>a;
        temp.push_back(a);
    }
    sort(temp.begin(),temp.end());
    cout<<temp[1];    
    return 0;
}