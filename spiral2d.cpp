#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter n and m: ";
    cin>>n>>m;

    int a[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }

    int rs=0, re=n-1, cs=0, ce=m-1;

    while(rs<=re && cs<=ce)
    {
        for(int col=cs; col<=ce; col++)
        {
            cout<<a[rs][col]<<" ";
            //cout<<"rs"<<rs<<" col"<<col;
        }
        rs++;
        cout<<endl;

        for(int row=rs; row<=re; row++)
        {
            cout<<a[row][ce]<<" ";
            //cout<<"row"<<row<<" ce"<<ce;
        }
        ce--;

        for(int col=ce; col>=cs; col--)
        {
           cout<<a[re][col]<<" ";
            //cout<<"re"<<re<<" col"<<col;
        }
        re--;
        cout<<endl;

        for(int row=re; row>=rs; row--)
        {
            cout<<a[row][cs]<<" ";
            //cout<<"row"<<row<<" cs"<<cs;
        }
        cs++;
    }

    return 0;
}