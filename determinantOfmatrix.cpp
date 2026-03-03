#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> coef(vector<vector<int>>a,int y)
{
    vector<vector<int>>res;
    for(int i=1; i<a.size(); i++)
    {
        vector<int>row;
        for(int j=0; j<a[1].size(); j++)
        {   if( j!=y)
            {
                row.push_back(a[i][j]);
            }

        }
        res.push_back(row);
    }
    return res;
}



int det(vector<vector<int>>x)
{   if(x.size()!=x[0].size()) {
        throw invalid_argument("not A square MAtrix !");
    }
    if(x[0].size()==1) return x[0][0];
    if(x.size()==2 && x[0].size()==2)
    {
        return x[0][0]*x[1][1]  - x[0][1] * x[1][0] ;   ////BASE CASE
    }

    int res = 0;
    for(int i=0; i<x.size(); i++)
    {
        res += pow(-1,i)*det(coef(x,i))*x[0][i];
    }
    return res;
}




int main()
{
    vector<vector<int>> s =     {{1,2,3},{4,5,6},{7,8,9}} ;
    cout<< "determinant of the matrix: " <<det(s);

}
