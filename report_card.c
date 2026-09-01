#include <stdio.h>
int main() {
    char name[50];
	char rnum[20];
    float m1, m2, m3, sum, perc;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("\nEnter your roll number: ");
    scanf("%s", rnum);
    printf("\nEnter marks of course 1: ");
    scanf("%f", &m1);
    printf("\nEnter marks of course 2: ");
    scanf("%f", &m2);
    printf("\nEnter marks of course 3: ");
    scanf("%f", &m3);
    sum = m1 + m2 + m3;
    perc = (sum / 300) * 100;
    printf("\nStudent Details:\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %s\n", rnum);
    printf("Total Marks: %.2f\n", sum);
    printf("Percentage: %.2f\n", perc);
    return 0;
}