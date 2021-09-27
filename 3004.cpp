#include<bits/stdc++.h>

using namespace std;

void Calcuate(vector<int> &v1,vector<int> &v2)
{
    for(int i =0;i<v1.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            if(v1[i]>v1[j])
            {
                v2[i]++;
            }
        }
    }
}
void Printvector(vector<int> &v)
{
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{   int n;
    cin>>n;
    vector<int> vec,vec1;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
        vec1.push_back(0);
    }
    Calcuate(vec,vec1);

    Printvector(vec1);

    return 0;
}