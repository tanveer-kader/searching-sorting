#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n)
{
    for(int i=1; i<n; ++i)
    {
        int k = a[i];
        int j = i-1;
        while(j>=0 && a[j]>k)
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = k;
    }
    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<n; ++i) cout<<a[i]<<" ";
}

int main()
{
    int a[100];
    int n;
    cout<<"Enter Size: "<<endl;
    cin>>n;
    cout<<"Enter Elements: "<<endl;
    for(int i=0; i<n; ++i) cin>>a[i];
    insertionSort(a, n);
    return 0;
}
