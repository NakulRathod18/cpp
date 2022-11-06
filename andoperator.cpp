#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"number :";
    cin>>num;
    if((num%2==0)&&(num%5==0))
    {
        cout<<num<<endl;
    }
    return 0;
}