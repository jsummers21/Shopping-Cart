// Created By: Jared Summers
// Program: Shopping Cart
// Desc: Lets user imput number of items, then asks for price of items and gives total cost
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int intNumberItems = 0.0;
	double DblPrice = 0.0;
	double DblTotalCost = 0.0;
	double DblFinalPrice = 0.0;

	cout << "Enter Number of Items: " << endl;
	cin >> intNumberItems;

	for (int x = 0; x < intNumberItems; x++)
	{
		cout << "Price of item number " << (x + 1) << " :" << endl;
		cin >> DblPrice;
		DblTotalCost += DblPrice;
		cout << "Total Cost of Items: $ " << DblTotalCost << endl;
	}
	
	if (DblTotalCost > 200)
	{
		DblFinalPrice = DblTotalCost + (intNumberItems * 10);
		cout << "Final Price: $ " << DblFinalPrice << endl;

	}
	else if (DblTotalCost < 200)
	{
		DblFinalPrice = DblTotalCost;
		cout << "Final Price: $ " << DblFinalPrice << endl;
	}
    return 0;
}

