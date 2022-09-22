#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[]={2,4,6,8,12,-3,5,7,9,11};
    int key;
    
    cout<<"Enter the key: ";
    cin>>key;
    
    for(auto i=0;i<10;++i)
    {
        if(key==A[i])
        {
            cout<<"Key element is found at index "<<i<<endl;
            exit(0);
        }
    }
    cout<<"Key element is not found..."<<endl;
    
    return 0;
}
