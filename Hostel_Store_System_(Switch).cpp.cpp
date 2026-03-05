#include<iostream>
using namespace std;
int main(){
	
	char choice=0;
	int juicePrice=420;
	int coffeePrice=320;
	int teaPrice=220;
	int quantity=0;
	float totalBill=0.0;
	float const salesTax=0.16;
	float afterSalesTax=0.0;
	float finalInvoice=0.0;
	
	cout<<"\t\t\t*********************Hostel Store*********************\n\n";
	cout<<"\t\t\t\t\t Select the item to buy\n";
	cout<<"\t\t\t\t\t   J for-Juice\n";
	cout<<"\t\t\t\t\t   C for-Coffee\n";
	cout<<"\t\t\t\t\t   T for-Tea\n\n";
	
	

	cout<<"\t\t\t\t Enter Choice: ";
	cin>>choice;
 
	switch(toupper(choice)){
	case 'J':	
	cout<<"You have selected juice";
	break;
	
	
	case 'C':	
	cout<<"You have selected coffee";
	break;
		
	
	case 'T':	
	cout<<cout<<"You have selected tea";
	break;
	
	
	default:
		cout<<"Invalid choice";
		break;
}
	}
