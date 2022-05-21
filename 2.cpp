#include<iostream>

using namespace std;

int main()
{
	// Program to find the maximum among three numbers.
	// int a,b,c;
	// cin>>a>>b>>c;

	// if (a>b)
	// 	if(a>c)
	// 		cout<<a<<endl;
	// 	else
	// 		cout<<c<<endl;
	// else
	// 	if(b>c)
	// 		cout <<b<<endl;
	// 	else
	// 		cout <<c<<endl;


// Program to check if a number is even or odd.
	// int n;
	// cin>>n;

	// if(n%2==0)
	// 	cout<<"even\n";
	// else
	// 	cout<<"odd\n";

// Program to check if a triangle is scalene, isosceles or equilateral.

	// int a,b,c;
	// cin>>a>>b>>c;

	// 	if(a==b && b==c)
	// 		cout<<"equilateral triangle\n";
	// 	else if(a==b || b==c || c==a)
	// 		cout << "isosceles triangle\n";
	// 	else
	// 		cout<<"scalene triangle\n";

	// Program to check if an alphabet is a vowel or a consonant.

	char a;
	int isLowercaseVowel, isUppercaseVowel;
	cin>>a;

	isLowercaseVowel = (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
	cout<<isLowercaseVowel<<endl;

	isUppercaseVowel = (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U');
	cout<<isUppercaseVowel<<endl;

	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
		cout<<"vowel";
	else
		cout << "consonant";

    return 0;

}