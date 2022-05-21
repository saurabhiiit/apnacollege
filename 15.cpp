#include<iostream>

using namespace std;

// int main()
// {
// 	// int a=10;
// 	// // cin>>a;
// 	// int *aptr;
// 	// aptr = &a;

// 	// cout<<*aptr<<endl;
// 	// *aptr = 20;
// 	// cout<<*aptr<<endl;

// 	int arr[]={10,20,30,40,50};
// 	cout<<*arr<<endl;
	
// 	int *ptr =arr;

// 	for(int i=0;i<5;i++)
// 	{
// 		cout<<*ptr<<endl;
// 		ptr++;
// 	}

// for(int i=0;i<5;i++)
// 	{
// 		cout<<*(arr+i)<<endl;
// 		// ptr++;
// 	}

// 	return 0;

// }

// void swab(int *a,int *b)
// {
// 	int temp=*a;
// 	*a=*b;
// 	*b=temp;
// }
// int main()
// {
// 	int a=2;
// 	int b=4;

// 	int *aptr = &a;
// 	int *bptr = &b;

// 	swab(aptr,bptr);

// 	cout<<a<<" "<<b<<endl;
// 	return 0; 
// }

void increment(int *a)
{
	(*a)++ ;
}

int main()
{
	int a=2;
	int *aptr = &a;
	increment(aptr);
	cout<<a<<endl;
	return 0;
}