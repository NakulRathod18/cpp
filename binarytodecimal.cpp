#include<iostream>
using namespace std;
int main()
{
    int n,power=1,ans=0,lastdigits;
    cout<<"enter binary - ";
    cin>>n;
    while(n>0)
    {
        lastdigits=n%10;
        ans+=(lastdigits*power);
        power*=2;
        n/=10;
    }
    cout<<ans;
    return 0;
}