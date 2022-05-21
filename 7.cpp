#include<iostream>

using namespace std;

// int main()
// {
// 	int r,c;
// 	cin>>r>>c;
// 	for(int i=0;i<r;i++)
// 	{
// 		for(int j=0;j<c;j++)
// 		{
// 			cout<<"*";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

// int main()
// {
// 	int r,c;
// 	cin>>r>>c;
// 	for(int i=0;i<r;i++)
// 	{
// 		for(int j=0;j<c;j++)
// 		{
// 			if(i>0 && i<r-1 && j>0 && j<c-1)
// 			cout<<" ";
// 			else
// 			cout<<"*";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 		{
// 			if(j>=n-i-1)
// 			cout<<"*";
// 			else
// 				cout<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<i+1;j++)
// 		{
// 			cout<<i+1;
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

// int main()
// {
// 	int n,flag=1;
// 	cin>>n;
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<i+1;j++)
// 		{
// 			cout<<flag;
// 			flag++;
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<2*n;j++)
// 		{
// 			if(j<i+1 || j>(2*(n-1))-i)
// 			cout<<"*";
// 			else
// 				cout<<" ";
// 		}
// 		cout<<endl;
// 	}

// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<2*n;j++)
// 		{
// 			if(j<(n-i) || j>=(n+i))
// 				cout<<"*";
// 			else
// 				cout<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int flag =1;
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 		{
// 			if(j<(i+1))
// 			{
// 			cout<<flag;
// 			}
// 			else
// 			{
// 				cout<<" ";
// 			}
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int flag =1;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(i%2==0)
// 			flag=1;
// 		else
// 			flag=0;
		
// 		for(int j=0;j<i+1;j++)
// 		{
// 			cout<<flag;
// 			if(flag==1)
// 				flag=0;
// 			else
// 				flag=1;
					
			

// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n/2;i++)
// 	{
// 		int flag=1,flag2=1;
// 		for(int j=0;j<n;j++)
// 		{
			
// 			if(j<i+1)
// 			{
// 			cout<<flag;
// 			}
// 			else if(j>=n-i-1)
// 				cout<<(i+j+1)%2;
// 			else
// 				cout<<" ";
			
// 			if(flag==1)
// 			 	flag=0;
// 			 else
// 				flag=1;

// 			if(flag2==1)
// 			 	flag2=0;
// 			 else
// 				flag2=1;
// 		}
// 		cout<<endl;
// 	}
// 	for(int i=0;i<=n/2;i++)
// 	{
// 		int flag=1,flag2=1;
// 		for(int j=0;j<n;j++)
// 		{
			
// 			if(j<=n/2-i)
// 			cout<<flag;
// 			else if(j>=n/2+i)
// 				cout<<(i+j+1)%2;
// 			else
// 				cout<<" ";
// 			 if(flag==1)
// 			 	flag=0;
// 			 else
// 			 	flag=1;

// 			 if(flag2==1)
// 			 	flag2=0;
// 			 else
// 				flag2=1;
// 		}
// 		cout<<endl;
// 	}	
// 	return 0;
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	for(int i=1;i<=n;i++)
// 	{
// 		for(int j=1;j<=n-i;j++)
// 		{
// 			cout<<" ";
// 		}
// 		for(int j=1;j<=i;j++)
// 			cout << j<<" ";



// 		cout<<endl;
// 	}

// 	return 0;
// }


// int main()
// {
// 	int n;
// 	cin>>n;
// 	for(int i=1;i<=n;i++)
// 	{
// 		for(int j=1;j<=n-i;j++)
// 		{
// 			cout<<" ";
// 		}
// 		int flag =i;
// 		for(int j=1;j<=i;j++)
// 		{
// 			cout << flag;
// 			flag--;

// 		}
// 			int flag2=2;
// 		for(int j=1;j<i;j++)
// 		{
// 			cout << flag2;
// 			flag2++;

// 		}


// 		cout<<endl;
// 	}

// 	return 0;
// }


int main()
{
	int n;
	cin>>n;
	int val ;
	for(int i=1;i<=3;i++)
	{
		
		for(int j=1;j<=n;j++)
		{
			if((i+j)%4==0)
			{

				cout<<"*";
				val=i+j;
			}
			else if(j%4==0 && i==2)
				cout<<"*";
			else
				cout<<" ";

		 }
			cout<<endl;

	}


	return 0;
}












