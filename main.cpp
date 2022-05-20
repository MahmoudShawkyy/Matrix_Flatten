#include <iostream>
#include<algorithm>

using namespace std;

void Flatten()
{
    vector<int> flatten_matrix;
    int n,m,p;
    cout<<"Enter your 3d matrix dimensions"<<endl;
    cin>>n>>m>>p;
    int arr[n][m][p];
    cout<<"Enter your 3d matrix elemnts"<<endl;
    for(int i=0;i<n;i++)
     for(int j=0;j<m;j++)
        for(int k=0;k<p;k++)
         cin>>arr[i][j][k];
   for(int i=0;i<n;i++)
     for(int j=0;j<m;j++)
        for(int k=0;k<p;k++)
            flatten_matrix.push_back(arr[i][j][k]);
        cout<<"Your Flatten Matrix"<<endl;
        for(int i=0;i<flatten_matrix.size();i++)
            cout<<flatten_matrix[i]<<" ";
        cout<<endl;

}
int main()
{
    Flatten();
    return 0;
}
