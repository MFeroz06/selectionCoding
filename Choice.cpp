#include <iostream>
using namespace std;
int main(){
	
	string name;
	cout << "Please enter your name : "<< endl;
	cin >> name;
	
	int choice;
	cout << "Please enter your choice: "<<endl;
	cin >> choice;
	cout << "Your choice is : "<< choice << endl;
	
	switch (choice){
		
		case 1:
			cout << "Pulau Langkawi ";
		break ;
		
	    case 2:
	    	cout << "Cameron Highland ";
	    		break ;
	    		
	    		case 3:
	    			cout << "Genting Highland";
	    			break ;
	    			
	    			case 4:
	    				cout << "Bukit Merah";
	    				break ;
	    				
	    				default :
	    					cout << "Your choice is not in the list ";
	    			
		
		
		
		
		
	}
	
	
	
	
	
}
