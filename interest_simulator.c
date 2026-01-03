#include <stdio.h>

int main() {
    double principal, rate, balance, interest;
    int years, i;

    // Step 1: Ask the user to enter values
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest (in %% per year): ");
    scanf("%lf", &rate);

    printf("Enter the number of years: ");
    scanf("%d", &years);

    // Step 3: Store principal as initial balance
    balance = principal;

    // Step 4: Loop for each year
    for (i = 1; i <= years; i++) {
        // Step 5: Calculate interest for that year
        interest = balance * (rate / 100.0);

        // Step 6 & 7: Add interest and update balance
        balance += interest;
    }

    // Step 9 & 10: Print final balance
    printf("Final Balance after %d years = %.2lf\n", years, balance);

    return 0;
}
