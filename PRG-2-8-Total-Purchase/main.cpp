//
//  main.cpp
//  PRG-2-8-Total-Purchase
//
//  Created by Keith Smith on 10/5/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  A customer in a store is purchasing five items. The prices of the five items are as follows
//  Price of item 1 = $15.95
//  Price of item 2 = $24.95
//  Price of item 3 = $6.95
//  Price of item 4 = $12.95
//  Price of item 5 = $3.95
//  Write a program that holds the prices of the five items in five variables. Display each
//  item's price, the subtotal of the sale, the amount of sales tax, and the total. Assume the
//  sales tax is 7 percent.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Declare constants
    const float FLT_ITEM_1 = 15.95f;
    const float FLT_ITEM_2 = 24.95f;
    const float FLT_ITEM_3 = 6.95f;
    const float FLT_ITEM_4 = 12.95f;
    const float FLT_ITEM_5 = 3.95f;
    const float FLT_TAX_SALES = 0.07f;
    
    // Declare variables
    float fltSubtotal;
    float fltTaxSales;
    float fltTotal;
    
    // Configure decimal for dollar output
    cout << setprecision(2) << fixed << showpoint;
    
    // Calculate variables
    fltSubtotal = FLT_ITEM_1 + FLT_ITEM_2 + FLT_ITEM_3 + FLT_ITEM_4 + FLT_ITEM_5;
    fltTaxSales = fltSubtotal * FLT_TAX_SALES;
    fltTotal = fltSubtotal + fltTaxSales;
    
    // Output values to console
    cout << setw(15) << "Item 1 Price: $" << FLT_ITEM_1 << endl;
    cout << setw(15) << "Item 2 Price: $" << FLT_ITEM_2 << endl;
    cout << setw(15) << "Item 3 Price: $" << FLT_ITEM_3 << endl;
    cout << setw(15) << "Item 4 Price: $" << FLT_ITEM_4 << endl;
    cout << setw(15) << "Item 5 Price: $" << FLT_ITEM_5 << endl;
    cout << setw(15) << "Subtotal: $" << fltSubtotal << endl;
    cout << setw(15) << "Sales Tax: $" << fltTaxSales << endl;
    cout << setw(15) << "Total: $" << fltTotal << endl;
    
    return 0;
}
