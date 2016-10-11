//programming challenge no. 3
#include <iostream>
using namespace std;

int main (){
	float purchase = 95;
	float state = 0.04;
	float county = 0.02;
	
	float statetax = state * purchase;
	float countytax = county * purchase;
	float total = statetax + countytax + purchase;
	
	cout << "The total sales tax for a $95 purchase is: $" << total;
	
	return 0;
	
}
