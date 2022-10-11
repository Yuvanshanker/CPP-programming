#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[5]={2,4,6,8,10};
    int *p=A;
    
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    
    
    cout<<p<<endl;
    cout<<p+2<<endl;
    
    
    cout<<*p<<endl;
    cout<<(p+2)<<endl;
    
    return 0;
    
}
