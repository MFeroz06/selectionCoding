#include <iostream>
using namespace std;

int main(){
	
	string name;
	cout << "Please enter your name : "<< endl;
	cin >> name;
	
	int age ;
	cout << "Please enter your age : "<< endl;
	cin >> age ;
	
	if (age < 13){
		
		cout << "You are in primary school"<< endl;
		
		
	}
	
	else if (age < 18){
		
		cout << "You are in high school"<<endl;
		
	}
	else if (age < 19){
		
		cout << "You are continuing your study or already employed"<<endl;
	}
	
	
	
}
