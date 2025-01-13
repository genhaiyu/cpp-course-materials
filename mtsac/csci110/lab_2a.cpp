/**
 7. Software Sales

A software company sells a package that retails for $99. Quantity discounts are given according to the following table:
    Quantity Discount
    10–19 20%
    20–49 30%
    50–99 40%
    100 or more 50%

Design a program that asks the user to enter the number of packages purchased.
The program should then display the amount of the discount (if any) and the total amount of the purchase after the discount.


 *
      Prolog
 * a. Program Description
        By using a program to calculate the amount of the discount and the total amount of the purchase after the discount.
 * b. Author
        Genhai Yu
 * c. Date and time
 *      01/12/2025
 * d. Input variable
        Case 1: Quantity = 5
        Case 2: Quantity = 15
        Case 3: Quantity = 25
        Case 4: Quantity = 75
        Case 5: Quantity = 125
 * e. Process Flow
        Based on the input of quantity and calculate the prices of discount and total purchase.
 * f. Out variable
        Gives the amount of discount and total purchase.
 */

#include "iostream"
#include "iomanip"

using namespace std;

// sells a package that retails for $99
const int A_PACKAGE_RETAIL = 99;

// Input variable
int number_purchase;
// Display the amount discount of each purchase, and price after discount
double amount_discount, purchase_after_discount;

// < 10, no discount
double less_ten(int numbers) {
    amount_discount = A_PACKAGE_RETAIL * numbers * 0;
    purchase_after_discount = A_PACKAGE_RETAIL * numbers - amount_discount;
    cout << "You purchased " << numbers << " software, discount is: $" << amount_discount << endl;
    cout << "After discount, the price is: $" << purchase_after_discount << endl;
    return purchase_after_discount;
}

// 10 - 19, 20%
double purchase_ten_to_nineteen(int numbers) {
    amount_discount = A_PACKAGE_RETAIL * numbers * .2;
    purchase_after_discount = A_PACKAGE_RETAIL * numbers - amount_discount;
    cout << "You purchased " << numbers << " software, discount is: $" << amount_discount << endl;
    cout << "After discount, the price is: $" << purchase_after_discount << endl;
    return purchase_after_discount;
}

// 20 - 49, 30%
double purchase_twenty_to_forty_nine(int numbers) {
    amount_discount = A_PACKAGE_RETAIL * numbers * .3;
    purchase_after_discount = A_PACKAGE_RETAIL * numbers - amount_discount;
    cout << "You purchased " << numbers << " software, discount is: $" << amount_discount << endl;
    cout << "After discount, the price is: $" << purchase_after_discount << endl;
    return purchase_after_discount;
}

// 50 - 99, 40%
double purchase_fifty_to_ninety_nine(int numbers) {
    amount_discount = A_PACKAGE_RETAIL * numbers * .4;
    purchase_after_discount = A_PACKAGE_RETAIL * numbers - amount_discount;
    cout << "You purchased " << numbers << " software, discount is: $" << amount_discount << endl;
    cout << "After discount, the price is: $" << purchase_after_discount << endl;
    return purchase_after_discount;
}

// > 100, 50%
double purchase_over_one_hundred(int numbers) {
    amount_discount = A_PACKAGE_RETAIL * numbers * .5;
    purchase_after_discount = A_PACKAGE_RETAIL * numbers - amount_discount;
    cout << "You purchased " << numbers << " software, discount is: $" << amount_discount << endl;
    cout << "After discount, the price is: $" << purchase_after_discount << endl;
    return purchase_after_discount;
}


int main() {

    cout << "Please enter the number of packages purchase: ";
    cin >> number_purchase;


    if (number_purchase < 10 && number_purchase > 0)
        less_ten(number_purchase);
    else if (number_purchase >= 10 && number_purchase < 20)
        purchase_ten_to_nineteen(number_purchase);
    else if (number_purchase >= 20 && number_purchase < 50)
        purchase_twenty_to_forty_nine(number_purchase);
    else if (number_purchase >= 50 && number_purchase < 100)
        purchase_fifty_to_ninety_nine(number_purchase);
    else if (number_purchase >= 100)
        purchase_over_one_hundred(number_purchase);
    else
        cout << "Sorry, the numbers you have entered did not match our system." << endl;

    return 0;
}


