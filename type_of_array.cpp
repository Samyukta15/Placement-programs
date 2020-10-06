#include<bits/stdc++.h>
using namespace std;
int find_type(int n , int arr[])
{
   int i=0;
   while(i<n-1 && arr[i]<arr[i+1])
   {
       i++;
       if(i == n-1)
       {
           cout<<"Ascending order with maximum element as"<<" "<<arr[n-1];

       }
    }
    if(i ==0)
    {
        while(i<n-1 && arr[i]>arr[i+1])
        {i++;
            if(i == n-1)
            {
                cout<< "Descending with max element as"<< " "<<arr[0];

            }
            if(arr[0]<arr[i+1])
            {
                cout<<"Ascending with max as"<<" " <<max(arr[0],arr[i+1]);
            }
            else
            {
                cout<<"Descending with max as"<<" " <<max(arr[i+1],arr[0]);
            }
        }
    }
    if(i<n-1 && arr[0]>arr[i+1])
    {
        cout<<"asc with max as"<< " "<<max(arr[0],arr[i]);
    }
    else
    {

        cout<<"desc with max as"<< " "<<max(arr[0],arr[i]);
    }

}
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    find_type(N,arr);

}
