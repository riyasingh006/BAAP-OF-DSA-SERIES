#include<iostream>
using namespace std;
int main()
{
    int n1,n2,d1,d2,sum;
    cout<<"enter n1:";
    cin>> n1;
    cout<<"enter n2:";
    cin>> n2;
    cout<<"enter d1:";
    cin>> d1;
    cout<<"enter d2:";
    cin>> d2;
    sum=((n1*d2)+(n2*d1))/(d1*d2);
    cout<<"sum is:"<<sum;
    return 0;
 
}