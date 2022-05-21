#include<iostream>
#include<climits>

using namespace std;

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
// int sum=0;
// int m = INT_MIN;
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=i;j<n;j++)
// 		{
// 			for(int k=i;k<=j;k++)
// 			sum = sum + a[k];
// 			//cout<<a[k]<<" ";
// 			m = max(m,sum);
// 			sum=0;
// 			 // cout<<endl;
// 		}
// 	}
// 	cout<<m<<endl;
// 	return 0;
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];

// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
// int sum =0;
// int m = INT_MIN;
// 	for(int i=0;i<n;i++)
// 	{
// 		sum=0;
// 		for(int j=i;j<n;j++)
// 		{
// 			sum += a[j];
// 			m=max(m,sum);
// 		}
// 	}

// 	cout<<m<<endl;

// 	return 0;
// }

//cummulative sum approach 2

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0 ; i<n;i++)
// 	{
// 		cin>>a[i];
// 	}

// 	int currsum[n+1];
// 	 currsum[0] = 0;

// 	for(int i=1;i<n+1;i++)
// 	{
// 		currsum[i]=currsum[i-1]+a[i-1];
// 	}

// int m = INT_MIN;
// 	for(int i=1;i<=n;i++)
// 	{
// 		int sum = 0;
// 		for(int j=0;j<i;j++)
// 		{
// 			sum = currsum[i]-currsum[j];
// 			m  = max(m,sum);
// 		}
// 	}

// 	cout<<m<<endl;

// 	return 0;

// }

//cummulative sum approach in order n

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0; i<n;i++)
// 	{
// 		cin>>a[i];
// 	}

// 	int currsum[n+1];
// 	currsum[0]=0;
// 	int ma=INT_MIN;
// 	int in=0;
// 	for(int i=1;i<=n;i++)
// 	{
// 		currsum[i]=currsum[i-1]+a[i-1];
// 		if(ma<currsum[i])
// 		{
// 			ma = currsum[i];
// 			in = i;
// 		}
// 		//ma = max(ma,currsum[i]);
// 	}
// 	int mi = INT_MAX;
// 	for(int i=0;i<in;i++)
// 	{
// 		mi = min(mi,currsum[i]);
// 	}

// 	cout<<ma-mi<<endl;

// return 0;

// }

//kadane approach

// int main()
// {
// 	int n;
// 	cin>>n;

// 	int a[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}

// 	int currsum = 0;
// 	int m = INT_MIN;
// 	for(int i=0;i<n;i++)
// 	{
// 		currsum += a[i];
// 		if(currsum<0)
// 			currsum = 0;
// 		m= max(m,currsum);

// 	}

// 	cout<<m<<endl;
// 	return 0;

// }

// max circular sub array

// int main()
// {
// 	int n; 
// 	cin>>n;
// 	int a[n];
// 	int sum=0;
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 		sum+=a[i];
// 	}

// 	int m=INT_MIN;
// 	int currsum=0;

// 	for(int i=0;i<n;i++)
// 	{
// 		currsum+=a[i];
// 		if(currsum<0)
// 			currsum=0;
// 		m=max(m,currsum);
// 	}
// 	int m2=INT_MIN;
// 	int currsum2=0;
// 	for(int i=0;i<n;i++)
// 	{
// 		currsum2-=a[i];
// 		if(currsum2<0)
// 			currsum2=0;
// 		m2= max(currsum2,m2);
// 	}
// 	// cout<<m2<<endl;
// 	// cout<<sum<<endl;
// 	cout<<max(m,sum+m2)<<endl;
// 	return 0;


// }

//pair sum problem

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k;
	cin>>k;

	int f= 0;
	int l=n-1;

	while(f<l)
	{
		if(k>(a[f]+a[l]))
		{
			f++;
		}
		else if(k<(a[f]+a[l]))
		{
			l--;
		}
		else
		{
			cout<<f<<" "<<l<<endl;
			cout<<"yes"<<endl;
			break;
		}
	}
	return 0;

}
