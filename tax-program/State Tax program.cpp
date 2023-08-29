#include <iostream>

using namespace std;


int main() 
{
    cout << "Please enter Pre-tax sales:";
    double sales;
    cin >> sales;
    cout << "total sales = $" << sales << endl;

    const double stateTaxRate = .04;
    double stateTax = stateTaxRate * sales;
    cout << "total state tax: $" << stateTax << endl;

    const double countyTaxRate = .02;
    double countyTax = countyTaxRate * sales;
    cout << "total county tax: $" << countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout << "total  tax: $" << totalTax << endl;

    double afterTax = sales - totalTax;
    cout << "After tax Income: $" << afterTax << endl;

    return 0;
}
