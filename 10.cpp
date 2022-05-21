#include<iostream>
#include<climits>

using namespace std;

// int main()
// {
// 	int n ;
// 	cin>>n;
// 	int a[n];

// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}

// 	int maxno=INT_MIN;
// 	int minno=INT_MAX;

// 	for(int i=0;i<n;i++)
// 	{
// 		maxno = max(a[i],maxno);
// 		minno = min(a[i],minno);
// 		// if(a[i]>max)
// 		// 	max=a[i];
// 		// if(a[i]<min)
// 		// 	min=a[i];
// 	}
// 	cout<<maxno<<endl;
// 	cout<<minno<<endl;

// 	return 0; 
// }

// Running sum of an Array
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	int s[n];

// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 		if(i==0)
// 			s[i]=a[i];
// 		else
// 			s[i] =a[i]+s[i-1]; 
// 	}


// 	for(int i=0;i<n;i++)
// 	cout<<s[i]<<" ";

// 	return 0;
// }



// Kids with the greatest number of candies

// int main()
// {
// 	int n;
// 	cin>>n;

// 	int candies[n];
// 	int extracandies;

// 	int maxno = INT_MIN;
// 	int minno = INT_MAX;
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>candies[i];
// 		maxno = max(maxno,candies[i]);
// 		// minno = min(minno,candies[i]);
// 	}
// 	cin>>extracandies;
// 	bool ans[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		if(candies[i]+extracandies >= maxno)
// 			cout<<"true ";
// 			// ans[i] = true;
// 		else
// 			cout<<"false ";
// 			// ans[i] = false;

// 		// cout<<ans[i]<<" ";
// 	}



// 	return 0;
// }

//linear searching
// int main()
// {
// 	int n;
// 	cin>>n;

// 	int a[n];
// 	int k;

// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
// 	cin>>k;

// 	for(int i=0;i<n;i++)
// 	{
// 		if(a[i]==k)
// 		{
// 			cout<<i<<endl;
// 			break;
// 		}
// 		else
// 			return -1;
// 	}
// 	return 0;
// }

// // Binary searching
// int main()
// {
// 	int n;
// 	cin>>n;

// 	int a[n];

// 	for(int i = 0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
// 	int k;
// 	cin>>k;
// 	int s=0;
// 	int l=n;
// 	for(int i=s;i<l;)
// 	{
// 		if(a[i]<k)
// 		{
// 			i=(i+l)/2;
// 		}
// 		else if(a[i]>k)
// 		{
// 			l=(i+l)/2;
// 		}
// 		else{
// 			cout<<i;
// 			break;
// 		}
// 	}

// 	return 0;
// }
// int binarysearch(int a[], int n,int k){
// 	int s=0;
// 	int e=n;
// 	while(s<=e){
// 		int mid = (s+e)/2;
// 		if(a[mid]==k)
// 			return mid;
// 		else if(a[mid]<k)
// 		{
// 			s=mid+1;
// 		}
// 		else
// 			e=mid-1;
// 	}
// 	return -1;
// }


// // Binary searching
// int main()
// {
// 	int n;
// 	cin>>n;

// 	int a[n];

// 	for(int i = 0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
// 	int k;
// 	cin>>k;
// 	cout<<binarysearch(a,n,k)<<endl;
// 	return 0;
// }

//Selection sort

// int mini(int a[],int n,int i)
// {
// 	int m = a[i];
// 	int j=0;
// 	for(;i<n-1;i++)
// 	{
// 		if(a[i+1]<m)
// 		{
// 			m=a[i+1];
// 			 j=i+1;
// 		}
// 	}
// 	return j;
// }

// int main()
// {
// 	int  n;
// 	cin>>n;
// 	int a[n];

// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
// 	// int temp;
// 	// // int m = min(a);
// 	// for(int i=0;i<n-1;i++)
// 	// {
// 	// 	if(a[mini(a,n,i)]<a[i]){
// 	// 		cout<<temp<<endl;
// 	// 		temp = a[i];
// 	// 		a[i] = a[mini(a,n,i)];
// 	// 		a[mini(a,n,i)]=temp;
// 	// 	}
// 	// }
// int temp;
// 	for(int i=0;i<n-1;i++){
// 		for(int j=i+1;j<n;j++){
// 			if(a[i]>a[j]){
// 				temp=a[j];
// 				a[j]=a[i];
// 				a[i]=temp;
// 			}

// 		}
// 	}


// 	for(int i=0;i<n;i++){
// 		cout<<a[i]<< " ";
// 	}

// }

//bubble sort

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
// 	int counter = 1;
// 	while(counter<n)
// 	{
// 		for(int i=0;i<n-counter;i++)
// 		{
// 			if(a[i]>a[i+1])
// 			{
// 				int temp = a[i];
// 				a[i]=a[i+1];
// 				a[i+1]=temp;
// 			}
// 		}
// 		counter++;
// 	}

// 	for(int i=0;i<n;i++)
// 	{
// 		cout<<a[i]<<" ";
// 	}

// 	cout<<endl;

// 	return 0;

// }

//Inssertion sort
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];

// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	 }
	
// 	 for(int i=1;i<n;i++)
// 	 {
// 	 	int numb = a[i];
// 	 	int j=i-1;
// 	 	while(a[j]>numb&& j>=0)
// 	 	{

// 	 		a[j+1]=a[j];
// 	 		j--;
// 	 	}
// 		a[j+1] = numb;
// 	 }

// 	 for(int i =0;i<n;i++)
// 	 {
// 	 	cout<<a[i]<<" ";
// 	 }
// 	 cout<<endl;
// }
	// int counter =1;
	// while(counter<n)
	// {
	// 	int flag=1;
	// 	for(int i=0;i<counter;i++)
	// 	{
	// 		if(a[i]>a[counter] && flag==1)
	// 		{
	// 			int temp=a[i];
	// 			flag=0;
	// 			// a[i]=a[counter];
	// 		}
	// 		if(flag==0)
	// 		{
	// 			int temp2 = a[i+1];
	// 			a[i+1] = a[i];
	// 			a[i]= a[counter];
	// 			a[i+1] = temp;
	// 		}

	// 	}
	

// 

//sum of a all subarrays
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];

// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}

// 	int sum=0;

// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=i;j<n;j++)
// 		{
// 			sum = sum + a[j];
// 			cout<<sum<<" ";
// 		}
// 		sum =0;
// 	}
// 	cout<<endl;
// 	return 0;

// }


//Max length of subcontigues array
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
// 	int m=0;
// 	for(int i=0;i<n-1;i++)
// 	{
// 		int cnt=1;
// 		int d = a[i]-a[i+1];
// 		for(int j=i+1;j<n;j++)
// 		{
// 			if((a[j-1]-a[j])==d)
// 				cnt++;
// 			else
// 				break;
// 		}
// 		m = max(m,cnt);

// 	}
// 	cout<<m<<endl;
// 	// if(m>1)
// 	// cout<<m+1<<endl;
// 	// else
// 	// 	cout<<m<<endl;

// }
//approch 2
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}

// 	int pd = a[1]-a[0];
// 	int cnt = 2;
// 	int j=2;
// 	int m=1;
// 	while(j<n)
// 	{
// 		if(a[j]-a[j-1] == pd)
// 		{
// 			cnt++;
// 		}
// 		else
// 		{
// 			pd = a[j]-a[j-1];
// 			cnt = 2;
// 		}
// 		j++;
// 		m = max(m,cnt);
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
	
// 	int j=0;
// 	int bd = a[0];
// 	int cnt= 0;
// 	int m=INT_MIN;
// 	while(j<n-1)
// 	{
// 		if(a[j]>m && a[j]>a[j+1])
// 		{
// 			cnt++;
			
// 		}
// 		m = max(m,a[j]);
// 		j++;
// 	}

// 	cout<<cnt<<endl;
// 	return 0;

// }

//First repeating element
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];

// 	// int b[1000000];
// 	// for(int )	
// 	int m = INT_MIN;
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 		m = max(m,a[i]);
// 	}

// 	int b[m+1];

// 	for(int i=0;i<=m;i++)
// 	{
// 		b[i]=-1;
// 		// cout<<b[m];
// 	}

// 	int mi = INT_MAX;
// 	int j=0;
// 	int flag=0;
// 	while(j<n)
// 	{
// 		if(b[a[j]]!=-1)
// 		{
// 			mi = min(mi,b[a[j]]);
// 			flag=1;
// 		}
		
// 		if(flag==0)
// 		b[a[j]]=j;
		
// 		j++;
// 		flag=0;
// 	}

// 	if(mi==INT_MAX)
// 		cout<<-1<<endl;
// 	else
// 	cout<<mi+1<<endl;
// 	return 0;
// }

//subarray with given sum
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];

// 	int s;
// 	cin>>s;
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
	


// 	int i=0;
// 	int j=0;
// 	int su = 0;
// 	while(i<n)
// 	{

// 		if(su + a[j]<s)
// 		{
// 			su = su + a[j];
// 			j++;
// 		}
// 		else if(su + a[j]>s)
// 		{
// 			i++;
// 			j=i;
// 			su=0;
// 		}
// 		else if((su + a[j])==s)
// 		{
// 			break;
// 		}


// 	}

// 	cout<<i+1<<" "<<j+1<<endl;


// 	return 0;

// }

//smallest positive misssing number
int main()
{
	int n;
	cin>>n;
	int a[n];
	int maxi = INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		maxi = max(maxi,a[i]);
	}

	int m=1e6+2;
	int b[m];

	for(int i=0;i<m;i++)
	{
		b[i]=-1;
	}

	int j=0;
	while(j<n)
	{
		if(a[j]>=0)
		{
			b[a[j]]=1;
		}
		j++;
	}

	int ans =-1;
	for(int i=0;i<maxi+1;i++)
	{
		if(b[i]==-1)
		{
			ans = i;
			break;
		}
	}

cout<<ans<<endl;
	

	return 0;


}

