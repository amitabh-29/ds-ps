 // C program to calculate the total salary:
#include <stdio.h>

int main() {
    int basic, grade;
    float total;

    printf("Enter basic salary: ");
    scanf("%d", &basic);

    printf("Enter grade (A/B/C): ");
    scanf(" %c", &grade);

    int allowance = (grade == 'A') ? 1700 : (grade == 'B') ? 1500 : 1300;
    float hra = 0.2 * basic;
    float da = 0.5 * basic;
    float pf = 0.11 * basic;

    total = basic + hra + da + allowance - pf;

    printf("Total Salary: %d\n", (int) (total + 0.5));

    return 0;
}


