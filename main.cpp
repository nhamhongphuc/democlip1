#include <iostream>

using namespace std;
void nhap(int a[],int n)
{
    for (int i=0;i<n;i++)
        cin>>a[i];
}

int main()
{
    int n;
    do {cin>>n;} while (n<0);
    int a[n];
    nhap(a,n);
    for (int i=0;i<n;i++)
    {
        if (i%2!=0) cout<<a[i]<<" ";
    }
    return 0;
}
