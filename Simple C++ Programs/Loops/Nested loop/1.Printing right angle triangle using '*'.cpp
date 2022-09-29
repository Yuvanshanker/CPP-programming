#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

/*inverted triangle*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

/*left angled triangle*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i+j>5)
            {
                cout<<"* ";
            }
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

/*inverted triangle*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i<=j)
            {
                cout<<"* ";
            }
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

