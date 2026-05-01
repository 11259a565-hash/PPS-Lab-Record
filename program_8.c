#include <stdio.h>
int main() {
    char name[50];
    int reg_no, m1, m2, m3;
    float total, avg;

    printf("Enter Name, Reg No, and Marks for 3 subjects: ");
    scanf("%s %d %d %d %d", name, &reg_no, &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("\nName: %s\nTotal: %.2f\nAverage: %.2f\nGrade: ", name, total, avg);
    if (avg >= 90) printf("S");
    else if (avg >= 80) printf("A");
    else if (avg >= 70) printf("B");
    else if (avg >= 60) printf("C");
    else if (avg >= 50) printf("D");
    else printf("Fail");
    return 0;
}
