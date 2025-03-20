#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=5;
    a++,b--;
    cout<<++a<<""<<b-;// here we will find error because their no meaning of b-
                      //if we put b--then  we will find 64 out put
    
    return 0;
}

