#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"Enter value of t";
    cin>>t;
    while(t--)
    {
        int n,even=0,odd=0,fine=0;
        cout<<"Enter value of n";
        cin>>n;
        int arr[n+1];
        cout<<"Enter array elements";
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && arr[i]%2!=0) even++;
            else if(i%2!=0 && arr[i]%2==0) odd++;
            else fine++;
        }
        if(fine==n) cout<<"0"<<endl;
        else if(odd==even) cout<<even<<endl;
        else if(odd!=even) cout<<"-1"<<endl;

    }
}

