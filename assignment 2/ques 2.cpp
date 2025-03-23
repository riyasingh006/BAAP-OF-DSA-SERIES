#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"enter radius :";
    cin>>r;
    float area=3.14*r*r;
    float cir=2*3.14*r;
    
    if(area>cir){
        cout<<"yes area is greater than circumference";

    }
    else
    {
    cout<<"not area is greater than circumference";
    }

    return 0;
    

}