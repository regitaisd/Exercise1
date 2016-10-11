//progtamming challenge no. 4
#include <iostream>
using namespace std;

int main(){
	float bill = 88.67;
	float taxP = 6.75/100;
	float taxM;
	float tip;
	float total;
	
	taxM = bill * taxP;
	total = bill + taxM;
	tip = 0.2 * total;
	float gt = total + tip;
	
	cout << "The meal cost is: $" << bill << endl;
	cout << "The tax amount is: $" << taxM << endl;
	cout << "The tip amount is: $" << tip << endl;
	cout << "The total bill is: $" << gt << endl;
	
	return 0;
}
