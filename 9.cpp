#include<bits/stdc++.h>

using namespace std;

#include<math.h>

// int fact(int n)
// {
// 	int factorial=1;
// 	for(int i=2;i<=n;i++)
// 	{
// 		factorial *=i;
// 	}
// 	return factorial;
// }



// int main()
// {
// 	int n,r;
// 	cin>>n>>r;
// 	int ncr = fact(n)/(fact(n-r)*fact(r));
// 	cout<<ncr<<endl;

// 	return 0;
// }

// int max(int x,int y)
// {
// 	if(x>y)
// 		return x;
// 	else
// 		return y;
// }


// bool check(int x,int y, int z)
// {
// 	int a = max(x,max(y,z));
// 	int b,c;

// 	if(a==x)
// 	{
// 		b=y;
// 		c=z;
// 	}
// 	else if(a==y)
// 	{
// 		b=x;
// 		c=z;
// 	}
// 	else
// 	{
// 		b=x;
// 		c=y;
// 	}
	
// 	if(a*a==(b*b + c*c))
// 		return true;
// 	else
// 		return false; 

// }


// int main()
// {
// 	int x,y,z;
// 	cin>>x>>y>>z;

// 	if(check(x,y,z))
// 		cout<<"pythagoras triplet"<<endl;
// 	else
// 		cout<<"not";

// 	return 0;


// }

//Binary to decimal

int binaryTodecimal(int n)
{
	int x;
	int y=0;
	int ans=0;
	while(n>0)
	{
		x=n%10;
		ans += (x * pow(2,y));
		y++;
		n/=10;
	}
	return ans;
}

int octalTodecimal(int n)
{
	int ans=0;
	int y=1;
	while(n>0)
	{
		ans+=((n%10)*y);
		y*=8;
		n/=10;
	}
	return ans;
}

int hexadecimalTodecimal(string n)
{
	int ans = 0;
	int s=n.size();
	int x=1;

	for(int i=s-1;i>=0;i--)
	{
		if(n[i]>='0' && n[i]<='9')
		{
			ans+=x*(n[i]-'0') ;
		}
		else if(n[i]>='A' && n[i]<='F')
		{
			ans+=x*(n[i]-'A'+10);
		}
		x*=16;
	}



	return ans;

}

// int getpower(int n)
// {
// 	int cnt=0;
// 	while(n/2>0)
// 	{
// 		n/=2;
// 		cnt++;
// 	}
// 	return cnt;
// }

// void decimalTobinary(int n)
// {
// 	int mp = getpower(n);
// 	cout<<1;
// 	int temp = n-pow(2,mp);

// 	for(int i = mp-1 ; i>=0;i--)
// 	{
// 		if(temp/pow(2,i) >=1)
// 		{
// 			cout<<1;
// 			temp-=pow(2,i);
// 		}
// 		else
// 			cout<<0;
// 	}
// 	cout<<endl;

// }

int decimalTobinary(int n)
{
	int x=1;
	while(x<=n)
	{
		x*=2;
	}
	x/=2;
	int ans = 0;
	while(x>0)
	{
		int lastdigit = n/x;
			n-=lastdigit*x;
			x/=2;
			ans=ans*10 + lastdigit;

	}

	return ans;
}

string decimalToHexadecimal(int n)
{
	int x=1;
	string ans="";

	while(x<=n)
	{
		x*=16;
	}

	x/=16;

	while(x>0)
	{
		int lastdigit = n/x;
		n-=x*lastdigit;
		
		x/=16;
		if(lastdigit<=9)
		{
			ans = ans + to_string(lastdigit);
		}
		else
		{
			char c = 'A'+ lastdigit-10;
			ans.push_back(c);
		}

		

	}
	return ans;



}


int main()
{
	//int n;
	//cin>>n;

	// cout<<binaryTodecimal(n)<<endl;
	//	cout<<octalTodecimal(n)<<endl;

	// string n;
	// cin >>n;

	// cout <<hexadecimalTodecimal(n)<<endl;
	
	int n;
	cin>>n;
	// cout<<decimalTobinary(n)<<endl;
	   cout<<decimalToHexadecimal(n)<<endl;
	return 0;
}






