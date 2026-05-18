#include <stdio.h>
#include <stdlib.h>

// Colors
#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define RED     "\033[1;31m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"

// Functions
void line() {
    printf(BLUE "+--------------------------------------+\n" RESET);
}

void title(char text[]) {
    line();
    printf(BLUE "| %-36s |\n" RESET, text);
    line();
}

int main() {

    char name[50];
    int m1, m2, m3, total;
    float average;
    char grade;

    system("cls || clear");

    title("STUDENT GRADE CALCULATOR");

    printf(CYAN "\n Enter Student Name : " RESET);
    scanf("%s", name);

    printf(CYAN " Enter Mark 1        : " RESET);
    scanf("%d", &m1);

    printf(CYAN " Enter Mark 2        : " RESET);
    scanf("%d", &m2);

    printf(CYAN " Enter Mark 3        : " RESET);
    scanf("%d", &m3);

    total = m1 + m2 + m3;
    average = total / 3.0;

    // Grade Calculation
    if (average >= 90)
        grade = 'A';

    else if (average >= 75)
        grade = 'B';

    else if (average >= 50)
        grade = 'C';

    else
        grade = 'F';

    line();

    printf(GREEN "\n Student Name : %s\n" RESET, name);
    printf(YELLOW " Total Marks  : %d\n" RESET, total);
    printf(YELLOW " Average      : %.2f\n" RESET, average);
    printf(GREEN " Grade        : %c\n" RESET, grade);

    line();

    return 0;
}