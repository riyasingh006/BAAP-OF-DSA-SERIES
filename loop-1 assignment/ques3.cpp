#include<iostream>
using namespace std;
int main()
{
    int n;
    int a=4; 
    int d=3; 
    cout<<"enter n:";
    cin>>n;

    int an=a+(n-1)*d;

    for(int i=4; i<=an; i=i+3)
    cout<<i <<endl;
    return 0;
}