/* Loops (Firm's Profit Optimization) By Ryan Jarl
   Created on: Mar 13, 2021
   This program takes in user input in order
   to optimize a firms profits utilizing the concept of a 
   while loop. The program considers: the total number of units, 
   rent while all units are occupied, the increase in rent 
   for every vacancy, and the amount required to maintain a unit. 
   The program then calculates and prints the optimal number of units
   to be rented in order to maximize profit, and what the actual
   maximized profit will be in the long run.*/

#include <iostream>

using namespace std;

int main()
{
	int units_total = 0;
	double auo_rent = 0.0;
	double rent_increase = 0.0;
	double cost_maintenance = 0.0;
	double profit_max = 0.0;
	double profit = 0.0;
	int x = 0;
	int apts_vacant = 0;

	cout << "Total Number Of Units: ";
	cin >> units_total;
	cout << "Rent While All Units Are Occupied: ";
	cin >> auo_rent;
	cout << "Increase In Rent For Every Vacancy: ";
	cin >> rent_increase;
	cout << "Amount Required To Maintain A Unit: ";
	cin >> cost_maintenance;

	while ((units_total - apts_vacant) > 0)
	{
		auo_rent = (auo_rent + rent_increase);
		apts_vacant++;
		profit_max = ((units_total - apts_vacant) * (auo_rent - cost_maintenance));
		if (profit_max > profit){
			profit = profit_max;
			x = (units_total - apts_vacant);
		}
	}
	cout << "Number Of Units To Be Rented To Maximize Profit: " << x << endl;
	cout << "The Maximum Profit Is: " << profit;
	return 0;
}
