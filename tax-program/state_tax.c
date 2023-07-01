#include <stdio.h>

int get_sales(void);
void calc_tax(int sales);

int main(void)
{
    int sales = get_sales();
    printf("Total Yearly sales equals: %i\n", sales);
    calc_tax(sales);
    return 0;
}

int get_sales(void)
{
    int sales = 0;
    printf("Please enter total yearly sales: ");
    scanf("%d", &sales);
    return sales;
}

void calc_tax(int sales)
{
    const double state_tax_rate = .04;
    const double local_tax_rate = .02;

    double state_tax = state_tax_rate * sales;
    printf("State Tax Amount Due: %.2f\n", state_tax);
    double local_tax = local_tax_rate * sales; 
    printf("Local Tax Amount due: %.2f\n", local_tax);
    double total_tax = local_tax + state_tax;
    printf("Total Tax Due: %.2f\n", total_tax);
    double after_tax = sales - total_tax;
    printf("After Tax Income: %.2f\n", after_tax);
}