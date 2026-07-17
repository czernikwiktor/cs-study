/*
 * Project 2-3
 *
 * Compute the regular payments for a loan.
 * 
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double Principal;	// Loan's principal.
	double IntRate;		// Interest rate, i.e., 0.075.
	double PayPerYear;	// Number of payments per year.
	double NumYears;	// Number of years.
	double Payment;		// The regular payment amount.
	double TotalIntRate;	// Total amount of interest paid
				// over the life of the loan.
	
	// Below are variables for temporary values
	double numer, denom;
	double b, e;


	cout << "Enter principal: ";
	cin >> Principal;

	cout << "Enter interest rate (i.e., 0.075): ";
	cin >> IntRate;

	cout << "Enter number of payments per year: ";
	cin >> PayPerYear;

	cout << "Enter number of years: ";
	cin >> NumYears;


	e = -PayPerYear * NumYears;
	b = IntRate / PayPerYear + 1;

	numer = IntRate * Principal / PayPerYear;
	denom = 1 - pow(b, e);

	Payment = numer / denom;
	TotalIntRate = Payment * NumYears * PayPerYear - Principal;

	cout << "Payment is " << Payment << "\n";
	cout << "Total amount of interest paid: " << TotalIntRate;

	return 0;
}
