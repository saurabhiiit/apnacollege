#include<iostream>
using namespace std;

int main()
{
	// different language of the robot
	char button;
	cin>>button;

	// if(button=='a')
	// 	cout<<"hello\n";
	// else if(button == 'b')
	// 	cout<<"namaste\n";

	// switch(button)
	// 	{case 'a':
	// 	cout<<"hello"<<endl;
	// 	break;
	// 	case 'b':
	// 	cout <<"namaste"<<endl;
	// 	break;
	// }
	int n1,n2;

	cin>>n1>>n2;

	char op;
	cin>>op;
			cout<<op<<endl;
	switch(op){

		case '+':
		cout<<n1+n2<<endl;
		break;
		case '-':
		cout<<n1-n2<<endl;
		break;


	}




	return 0;
}