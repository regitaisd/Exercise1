//programming challenge no.8
#include <iostream>
using namespace std;

int main (){
	float item1 = 15.95;
    float item2 = 24.95;
	float item3 = 6.95;
	float item4 = 12.95;
	float item5 = 3.95;
	
	float subtotal = item1+item2+item3+item4+item5;
	float salestax = subtotal * 7 / 100;
	float total = subtotal - salestax;
	
	cout << "The items are sold for:\nItem 1: $" << item1 << "\n";
	cout << "Item 2: $" << item2 << "\n";
	cout << "Item 3: $" << item3 << "\n";
	cout << "Item 4: $" << item4 << "\n";
	cout << "Item 5: $" << item5 << "\n";
	cout << "The subtotal of the sale is: $" << subtotal << "\n";
	cout << "The sales tax is: $" << salestax << "\n";
	cout << "Therefore, the total of the sale is: $" << total;
	return 0;
}
	
