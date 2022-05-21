#include<iostream>
using namespace std;

int main()
{
	int date;
	int pocket=3000;
	for(date =1;date<30;date++)
	{
		if(date%2==0)
			continue;
		else{
			cout<<"you can go out"<<endl;
			pocket = pocket-300;
			if (pocket==0)
				break;
		}
	}
	
	return 0;
}