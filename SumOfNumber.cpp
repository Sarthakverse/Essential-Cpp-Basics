#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      sum=sum+i;
    }
    cout<<"sum upto n is = "<<sum;
    return 0;

}