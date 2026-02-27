#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat1r,mat1c, mat2r,mat2c;
    cout<<"Matrix1 :Enter Number of Rows,column :";
    cin>>mat1r>>mat1c;
    cout<<"\nMAtrix2: Enter NUmber of Rows,coulmn: ";
    cin>>mat2r>>mat2c;
    vector<vector<int>> mat1(mat1r,vector<int>(mat1c));
    vector<vector<int>> mat2(mat2r,vector<int>(mat2c));

    if ( mat1c!=mat2r) {
        cout<<"Multiplication nOt POssible"<<endl;
        return -101;
    }
    cout<<"Enter the first matrix: \n";
    for(int i=0; i<mat1r; i++)
    {
        for(int j=0; j<mat1c; j++)
        {
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the Secound matrix: \n";
    for( int i=0; i<mat2r; i++)
    {
        for(int j=0; j<mat2c; j++)
        {
            cin>>mat2[i][j];

        }

    }
    vector<vector<int>>res(mat1r,vector<int>(mat2c,0));
    for(int i=0; i<mat1r; i++)
    {   for(int j=0; j<mat2c; j++)
        {
            for(int k=0; k<mat2r; k++)
            {
                res[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }

    }
    for( int i=0; i<res.size(); i++)
    {
        for(int j=0; j<res[0].size(); j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

}
