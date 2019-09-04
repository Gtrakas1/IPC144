/*
Name:      <Gtrakas1>
Student#:  <108459173>
Section:   <IPC_144_SWW_w2>
*/

// Start your code below:
#include<stdio.h>

int main(void)
{

	double amount = 8.68;
	float GST=.13, owed, change, changea, changeb, changec;
	int Loonies = 1, Quarters, dimes, nickles, pennies;
	GST = amount*.13 + .005;	// have an equal gst
	owed = amount + GST;	// total after gst
	Loonies = owed / Loonies; //loonies require
	change = owed * 100;	//round off to int
	change = change / 100; //back to regular price
	change = change - 9;	//get rid of loonie
	Quarters = owed / .75;	// the .75 indicates 3 quarters or 75 cents
	Quarters = Quarters % 10;
	changea = (float)6 / 100;	//have to cast int to get the change otherwise uneven or 0
	dimes = .1 / owed;	//have to dived before owed to get a 0 value
	changeb = (float)6 / 100;
	nickles = owed / .05;	//note: have to cast to get a 1 nickle value after modulating
	nickles = (float)nickles / 100;
	nickles = nickles % 10;
	changec = (float)1 / 100;
	pennies = owed / .01;
	pennies = pennies % 10;
	printf("Please enter the amount to be paid: $");	//shows the amount that is inputted
	scanf_s("%2f", &amount);// reads the entered amount on line 31
	printf("GST: \n", GST);
	printf("balance owing: %.2f\n", owed);
	printf("Loonies required: %d, balance owing: $%.2f\n", Loonies, change);
	printf("Quarters required: %d, balance owing: $%.2f\n", Quarters, changea);
	printf("dime required: %d, balance owing $%.2f\n", dimes, changeb);
	printf("nickles required: %d, balance owing $%.2f\n", nickles, changec);
	printf("pennies required: %d, balance owing $%.2f\n", pennies);
	return 0;
	// Finally figured it out. geeeeeze



}
