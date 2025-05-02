#include <stdio.h>

// Define the structure "Date"
struct Date {
    int day;
    int month;
    int year;
};

// Function to calculate the number of days in a month
int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return -1; // Invalid month
    }
}

// Function to calculate the difference in days between two dates
int dateDifference(struct Date d1, struct Date d2) {
    int days1 = d1.day + (d1.month - 1) * daysInMonth(d1.month, d1.year) + d1.year * 365;
    int days2 = d2.day + (d2.month - 1) * daysInMonth(d2.month, d2.year) + d2.year * 365;

    return days2 - days1;
}

int main() {
    // Declare variables to store two dates
    struct Date date1, date2;

    // Input details for the first date
    printf("Input details for Date 1 (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input details for the second date
    printf("Input details for Date 2 (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Calculate and display the difference in days between the two dates
    int difference = dateDifference(date1, date2);
    printf("\nDifference in Days: %d\n", difference);

    return 0;
}
