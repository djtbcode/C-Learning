#include <stdio.h>

int get_sales(void);

int main(void)
{
    int sales = get_sales();
    printf("Total Yearly sales equals: %i", sales);
}

int get_sales(void)
{
    int sales = 0;
    sales = get_int("Please enter total yearly sales: ");
    return 0;
}