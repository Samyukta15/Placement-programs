#include<bits/stdc++.h>
using namespace std;
int find_subarray(int n,int sum,int arr[])
{
    int cur_sum=0;
for(int i=0;i<n;i++)
{
    cur_sum=arr[i];
    for(int j=i+1;j<n;j++)
    {
        if(cur_sum == sum)
        {
            cout<<"sum of "<< i+1 <<"th pos and" <<j <<"th pos gives the sum";
            return 1;

        }


        if(cur_sum > sum || j == n)
            break;
        cur_sum=cur_sum+arr[j];
    }

}
cout<<"No such SUBARRAY";
}
main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,sum;
        cin>>N>>sum;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        find_subarray(N,sum,arr);
free(arr);

    }
}
