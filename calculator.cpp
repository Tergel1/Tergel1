#include <iostream>
using namespace std;

int main(){
	char op;
	double num1, num2;
	cout<<"Sain uu? Tergeliin hiisen calculatort tavtai moril ooshs"<<endl;
	cout<<" "<<endl;
	cout <<"Ehleed yamar uildel hiihee dar! (+, -, *,/) : ";
	cin >>op;
	cout << "Hoyr toog neg negeer n oruulna uu!";
	cin >> num1 >> num2;
	
	cout<<"Chinii hariu ";
	switch (op){
		case '+':
			cout << num1 <<"+"<< num2 <<"=" <<(num1 + num2);
			break;
			
		case '-':
			cout << num1 <<"-"<< num2 <<"=" <<(num1 - num2);
			break;
			
		case '*':
			cout << num1 <<"*"<< num2 <<"=" <<(num1 * num2);
			break;
			
		case '/':
			if (num2 != 0.0)
			cout << num1 <<"/"<< num2 <<"=" <<(num1 / num2);
			
			else 
				cout<<"Aldaa garlaa!!!";
		break;		
		default:
			cout<<op<< "Iim uildel baihkushdee!!!";
	}
	cout<<" Garj baina durakaa"<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;

	system("pause");
	return 0;
}
