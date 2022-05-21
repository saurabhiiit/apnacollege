#include<iostream>
#include<climits>
using namespace std;


// int main()
// {
// 	char a[100] = "apple";

// 	int i=0;
// 	while(a[i]!='\0')
// 	{
// 		cout<<a[i]<<endl;
// 		i++;
// 	}
// return 0;
// }

// int main()
// {
// 	char a[100];
// 	cin>>a;
// 	cout<<a;
// 	return 0;
// }

//palindrom
// int main()
// {
// 	int n;
// 	cin>>n;
// 	char a[n+1];
// 	cin>>a;

// 	bool check=1;

// 	for(int i=0;i<n/2;i++)
// 	{
// 		if(a[i]!=a[n-1-i])
// 		{
// 			// cout<<" not a palindrom";
// 			check=0;
// 			break;

// 		}
// 	}

// 	if(check == true)
// 		cout<<"word is palindrome"<<endl;
// 	else
// 		cout<<"word is not palindrome"<<endl;


// 	return 0;
// }

//largest word in a sentence;
int main()
{

	int n;
	cin>>n;
	cin.ignore();
	char a[n+1];
	cin.getline(a,n);
	cin.ignore();

	int i=0;
	int cnt=0;
	int m=0;
	while(1)
	{

		cnt++;
		if(a[i]==' '||a[i] == '\0')
		{
			cnt =0;
			
		}
		i++;
		m=max(m,cnt);

				if(a[i]=='\0')
			break;

	}
	cout<<m<<endl;
	return 0;
}