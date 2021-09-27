#include <bits/stdc++.h>

using namespace std;

int Partition(vector<int> &v,int start, int end)
{
    int pivot =end;
    int j = start;
    for(int i =start;i<end;i++)
    {
        if(v[i]<v[pivot])
        {
            swap(v[i],v[j]);
            j++;
        }
    }
    swap(v[j],v[pivot]);
    return j;
}

void Quicksort(vector<int> &v,int start, int end)
{
    if(start<end)
    {
        int p = Partition(v,start,end);
        Quicksort(v,p+1,end);
        Quicksort(v,start,p-1);
    }
}

void PrintVector(vector<int> v)
{
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}

int main()
{
    int n;
    cin>>n;

    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    Quicksort(vec,0,vec.size()-1);

    PrintVector(vec);

    return 0;
}