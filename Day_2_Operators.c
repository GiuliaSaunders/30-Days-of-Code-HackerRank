#include <stdio.h>
#include <stdlib.h>



/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(double meal_cost, int tip_percent, int tax_percent) {
    float tip, tax, total_cost;
    tip = meal_cost * tip_percent / 100;
    tax = meal_cost * tax_percent / 100;
    total_cost = meal_cost + tip + tax;
    printf("%.0f", total_cost);
    
}

int main()
{
    double meal_cost;
    scanf("%lf", &meal_cost);

    int tip_percent;
    scanf("%d", &tip_percent);

    int tax_percent;
    scanf("%d", &tax_percent);

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

