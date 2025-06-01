#include <stdio.h>
#include <conio.h>
#include <windows.h>

// Function to print the calendar for a given month and year
void print_calendar(int month, int year) {
    int num_days;

    // Calculate number of days in the month
    if (month == 2) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
            num_days = 29;
        else
            num_days = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11)
        num_days = 30;
    else
        num_days = 31;

    // Zeller's Congruence to find first day of the month
    int m = month, y = year;
    if (m == 1 || m == 2) {
        m += 12;
        y--;
    }
    int first_day = (1 + (13 * (m + 1)) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
    first_day = (first_day + 6) % 7; // Adjusting: 0 = Sunday

    // Print calendar
    printf("\n     %d - %d\n", month, year);
    printf("Su Mo Tu We Th Fr Sa\n");

    for (int i = 0; i < first_day; i++)
        printf("   ");
    for (int i = 1; i <= num_days; i++) {
        printf("%2d ", i);
        if ((first_day + i - 1) % 7 == 6)
            printf("\n");
    }
    printf("\n");
}

// Main function
int main() {
    int month, year;

    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    while (1) {
        print_calendar(month, year);
        printf("\nUse arrow keys to navigate:\n");
        printf("→ Next month, ← Previous month, ↑ Next year, ↓ Previous year\n");
        printf("Press 'i' to input again, ESC to exit.\n");

        int k = getch();
        if (k == 0 || k == 224) k = getch(); // Handle arrow keys

        if (k == 27) {
            printf("THE PROGRAM IS CLOSED!\n");
            break;
        } else if (k == 77) { // RIGHT
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        } else if (k == 75) { // LEFT
            month--;
            if (month < 1) {
                month = 12;
                year--;
            }
        } else if (k == 72) { // UP
            year++;
        } else if (k == 80) { // DOWN
            year--;
        } else if (k == 'i' || k == 'I') {
            printf("\nEnter the month (1-12): ");
            scanf("%d", &month);
            printf("Enter the year: ");
            scanf("%d", &year);
        }

        system("cls"); // Clear screen before reprinting
    }

    return 0;
}
