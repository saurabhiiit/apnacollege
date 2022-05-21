#include<iostream>
using namespace std;

// int main()
// {
// 	int n,m;
// 	cin>>n>>m;
// 	int a[n][m];

// 	for(int i=0;i<n;i++)
// 		for(int j=0;j<m;j++)
// 			cin>>a[i][j];

// 	for(int i=0;i<n;i++)
// 		{for(int j=0;j<m;j++)
// 			cout<<a[i][j]<<" ";
// 			cout<<endl;}

// 	int x;
// 	cin>>x;

// 	for(int i=0;i<n;i++)
// 		for(int j=0;j<m;j++)
// 			{
// 				if(a[i][j]==x)
// 					cout<<i<<" "<<j<<endl;
// 			}


// return 0;

// }


int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	int row_start = 0;
	int row_end = n-1;
	int col_start = 0;
	int col_end = m-1;

	while(row_start<=row_end && col_start<=col_end)
	{
		for(int j=col_start;j<=col_end;j++)
		{
			cout<<a[row_start][j]<<" ";
		}
		row_start++;
		for(int i=row_start;i<=row_end;i++)
		{
			cout<<a[i][col_end]<<" ";
		}
		col_end--;
		if(row_start<=row_end ){
		for(int j=col_end;j>=col_start;j--)
		{
			cout<<a[row_end][j]<<" ";
		}
		row_end--;}
		if(col_start<=col_end){
		for(int i=row_end;i>=row_start;i--)
		{
			cout<<a[i][col_start]<<" ";
		}
		col_start++;}

	}
	cout<<endl;
	return 0;



}