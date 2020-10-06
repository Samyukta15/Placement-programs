#include<bits/stdc++.h>
using namespace std;
stack<int> s;
void push()
{
    int i;
    cin>>i;
    s.push(i);
}
void pop()
{
    s.pop();
}
void top()
{
if(!s.empty())
{
    cout<<s.top();
}else
{
    cout<<"-1";
}}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    int choice;
    cout<<"1.PUSH 2.POP 3.TOP 4.exit\n ENTER YOUR CHOICE";
    cin>>choice;
    if(choice == 1)
        {push();}
    else if(choice==2)
        {pop();}
    else if(choice == 3)
        {top();}

    }
}
