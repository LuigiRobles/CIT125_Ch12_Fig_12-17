// CIT125 Intro To C++ Luigi Robles
// 08-01-2020 Summer Term
// Ch.12 pg.447 Fig.12-17 shipping charge program
// Displays the shipping charge

#include <iostream>
using namespace std;

int main()
{
	//declare and initialize array
	int shipCharges[3][2] = { {50,20},
							{100,10},
							{999999, 0} };

	//declare and initialize variables
	int numOrdered = 0;
	int rowSub = 0;

	cout << "Number ordered " <<
		"(negative number or 0 to end): ";
	cin >> numOrdered; //input for number ordered

	while (numOrdered > 0 && numOrdered <= 999999) //while loop 
	{
		//search array
		rowSub = 0;
		while (rowSub < 3 && //nested while loop
			numOrdered > shipCharges[rowSub][0])
			rowSub += 1;
		//end while

		cout << "Shipping charge for a quantity of "
			<< numOrdered << " is $ "
			<< shipCharges[rowSub][1] << endl << endl; //output for shipping charges

		cout << "Number ordered " <<
			"(negative number or 0 to end): ";
		cin >> numOrdered;
	}	//end while
	return 0;
} //end of main function