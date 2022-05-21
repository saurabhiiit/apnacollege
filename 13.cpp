#include<iostream>

using namespace std;

//transpose of a matrix
// int main()
// {
// 	int n,m;
// 	// cin>>n>>m;
// 	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// 	int temp;
// 	for(int i=1;i<3;i++)
// 		for(int j=0;j<i;j++)
// 		{
// 			temp = a[i][j];
// 			a[i][j] = a[j][i];
// 			a[j][i] = temp;
// 		}
// 	for(int i=0;i<3;i++)
// 		for(int j=0;j<3;j++)
// 			cout<<a[i][j]<<" ";

// 		cout<<endl;

// 	return 0;

// }

// matrix multiplication

// int main()
// {
// 	int a[4][3]= {{1,2,3},{4,5,6},{7,8,9},{10,12,13}};
// 	int b[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
// 	int c[4][5];

// 	for(int i=0;i<4;i++)
// 	{
// 		for(int j=0;j<5;j++)
// 		{
// 			c[i][j]=0;
// 		}
// 	}		
// 	for(int i=0;i<4;i++)
// 	{
// 		for(int j=0;j<5;j++)
// 		{
// 			for(int k=0;k<3;k++)
// 			c[i][j] += a[i][k]*b[k][j];
// 		}
// 	}
// 	for(int i=0;i<4;i++)
// 		for(int j=0;j<5;j++)
// 			cout<<c[i][j]<< " ";
// 		cout<<endl;

// 		return 0;
// }

//search in the matrix
// //not working in every case;
// int main()
// {
// 	int n,m,k;
// 	cin>>n>>m>>k;
// 	int a[n][m];
// 	for(int i=0;i<n;i++)
// 		for(int j=0;j<m;j++)
// 			cin>>a[i][j];


// 	// for(int i=0;i<n;i++)
// 	// 	for(int j=0;j<m;j++)
// 	// 		cout<<a[n][m]<<" ";


// int i=0,j=0;
// 	for(i=0;i<n;i++)
// 	{
// 		if(a[i][m-1] >k)
// 			break;
// 		else if(a[i][m-1]==k)
// 		{
// 			cout<<i<<" "<<m-1<<endl;
// 			return 0 ;
// 		}
// 		else if(a[n-1][m-1]<k)
// 		{
// 			cout<<" no number"<<endl;
// 			return 0;
// 		}
// 	}
// 	 // cout<<a[i][m-1]<<"i"<<endl;
// 	for(j=m-1;j>=0;j--)
// 	{
// 		if(a[i][j] <k)
// 			break;
// 		else if(a[i][j]==k)
// 		{
// 			cout<<i<<" "<<j<<endl;
// 			return 0;
// 		}
// 		else if(a[i][0]>k)
// 			{
// 			cout<<" no number"<<endl;
// 			return 0;
// 		}
// 	}
// 	// cout<<j<<"j"<<endl;

// 	for(;i<n;i++)
// 	{
// 		if(a[i][j] ==k)
// 		{
// 			cout<<i << " "<<j<<endl;			
// 			break;
// 		}
// 		else if(a[n-1][j]<k)
// 		{
// 			cout<<" no number"<<endl;
// 			return 0;
// 		}
// 	}
	
// return 0;
// }


int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];

int i = 0;
int j= m-1;
int cnt =0;
while(1){
	if (a[i][j]==k)
	{
		cout<<"Element found"<<endl;
		break;
	}
	else if (k<a[i][j])
	{
		j--;
	}
	else if (k>a[i][j])
	{
		i++;
	}
	 // else if(i==n-1 && j==0&&a[i][j]!=k )
	 // {
	 // 	// cout<<"element not found"<<endl;
	 // 	break;
	 // }
	 if(i<0 || j<0||i>n||i>m)
	 {
	 	cout<<"Element not found "<<endl;
	 	break;
	 }

	}
	return 0;
}