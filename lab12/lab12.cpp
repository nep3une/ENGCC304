#include<stdio.h>
#include<string.h>

struct Student {
    char name[20];
    char id[5];
    float scoresub1;
    float scoresub2;
    float scoresub3;
    float scoresub4;
    float scoresub5;
} typedef S;

int main() {
    int n = 3,i = 0;
    S stu[n];
    printf("Enter the details of 3 students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n" , i + 1);
        printf("Name: ");
        scanf("%s", stu[i].name);
        printf("ID: ");
        scanf("%s", stu[i].id);
        printf("Scores in  subjects1: ");
        scanf("%f", &stu[i].scoresub1);
        printf("Scores in  subjects2: ");
        scanf("%f", &stu[i].scoresub2);
        printf("Scores in  subjects3: ");
        scanf("%f", &stu[i].scoresub3);
        printf("Scores in  subjects4: ");
        scanf("%f", &stu[i].scoresub4);
        printf("Scores in  subjects5: ");
        scanf("%f", &stu[i].scoresub5);
    }
    for (int i = 0; i < n; i++) {
        float total = stu[i].scoresub1 + stu[i].scoresub2 + stu[i].scoresub3 + stu[i].scoresub4 + stu[i].scoresub5;
        float avg = total / 5;
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", stu[i].name);
        printf("ID: %s\n", stu[i].id);
        printf("Scores: %.0f, %.0f, %.0f, %.0f, %.0f", stu[i].scoresub1, stu[i].scoresub2, stu[i].scoresub3, stu[i].scoresub4, stu[i].scoresub5);
        printf("\n");
        printf("Grades: ");
        if (stu[i].scoresub1 >= 80) {
            printf("A ");
        } else if (stu[i].scoresub1 >= 75) {
            printf("B+ ");
        } else if (stu[i].scoresub1 >= 70) {
            printf("B ");
        } else if (stu[i].scoresub1 >= 65) {
            printf("C+ ");
        } else if (stu[i].scoresub1 >= 60) {
            printf("C ");
        } else if (stu[i].scoresub1 >= 55) {
            printf("D+ ");
        } else if (stu[i].scoresub1 >= 50) {
            printf("D ");
        } else {
            printf("F ");
        }
        if (stu[i].scoresub2 >= 80) {
            printf("A ");
        } else if (stu[i].scoresub2 >= 75) {
            printf("B+ ");
        } else if (stu[i].scoresub2 >= 70) {
            printf("B ");
        } else if (stu[i].scoresub2 >= 65) {
            printf("C+ ");
        } else if (stu[i].scoresub2 >= 60) {
            printf("C ");
        } else if (stu[i].scoresub2>= 55) {
            printf("D+ ");
        } else if (stu[i].scoresub2 >= 50) {
            printf("D ");
        } else {
            printf("F ");
        }
        if (stu[i].scoresub3 >= 80) {
            printf("A ");
        } else if (stu[i].scoresub3 >= 75) {
            printf("B+ ");
        } else if (stu[i].scoresub3 >= 70) {
            printf("B ");
        } else if (stu[i].scoresub3 >= 65) {
            printf("C+ ");
        } else if (stu[i].scoresub3 >= 60) {
            printf("C ");
        } else if (stu[i].scoresub3 >= 55) {
            printf("D+ ");
        } else if (stu[i].scoresub3>= 50) {
            printf("D ");
        } else {
            printf("F ");
        }
        if (stu[i].scoresub4 >= 80) {
            printf("A ");
        } else if (stu[i].scoresub4 >= 75) {
            printf("B+ ");
        } else if (stu[i].scoresub4 >= 70) {
            printf("B ");
        } else if (stu[i].scoresub4 >= 65) {
            printf("C+ ");
        } else if (stu[i].scoresub4 >= 60) {
            printf("C ");
        } else if (stu[i].scoresub4 >= 55) {
            printf("D+ ");
        } else if (stu[i].scoresub4 >= 50) {
            printf("D ");
        } else {
            printf("F ");
        }
        if (stu[i].scoresub5 >= 80) {
            printf("A ");
        } else if (stu[i].scoresub5 >= 75) {
            printf("B+ ");
        } else if (stu[i].scoresub5 >= 70) {
            printf("B ");
        } else if (stu[i].scoresub5 >= 65) {
            printf("C+ ");
        } else if (stu[i].scoresub5 >= 60) {
            printf("C ");
        } else if (stu[i].scoresub5 >= 55) {
            printf("D+ ");
        } else if (stu[i].scoresub5 >= 50) {
            printf("D ");
        } else {
            printf("F ");
        }
        printf("\n");
        printf("Average score of student %d: %.2f\n", i + 1, avg);
    }
    return 0;


}