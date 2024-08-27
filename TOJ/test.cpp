#include<iostream>
using namespace std;

int main()
{                
    int n, k;
    int i, j, x, y;
    cin >> n >> k;
    for(i=1;i<=n;++i)
    {
        if(i%2==1)
        {
            if(n%2==1)
            {
                for(j=1;j<=k;++j)
                {
                    for(x=1;x<=n/2;++x)
                    {
                        for(y=1;y<=k;++y)
                            cout << "*";
                        for(y=1;y<=k;++y)
                            cout << " ";
                    }
                    for(x=1;x<=k;++x)
                        cout << "*";
                    if((i!=n)||(i==n && j!=k))
                        cout << "\n";
                }
            }
            else
            {
                for(j=1;j<=k;++j)
                {
                    for(x=1;x<=n/2;++x)
                    {
                        for(y=1;y<=k;++y)
                            cout << "*";
                        for(y=1;y<=k;++y)
                            cout << " ";
                    }
                    if((i!=n)||(i==n && j!=k))
                        cout << "\n";
                }
            }
        }
        else
        {
            for(j=1;j<=k;++j)
            {
                for(x=1;x<=n/2;++x)
                {
                    for(y=1;y<=k;++y)
                        cout << " ";
                    for(y=1;y<=k;++y)
                        cout << "*";
                }
                if((i!=n)||(i==n && j!=k))
                    cout << "\n";
            }
        }
    }
    return 0;
}