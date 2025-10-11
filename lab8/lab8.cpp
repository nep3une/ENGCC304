#include <stdio.h>

int main() {
    int position, years, projects;
    int baseSalary = 0;
    float expBonus = 0, specialBonus = 0, netSalary = 0;

    // รับค่าจากผู้ใช้
    printf("Position (1=Junior, 2=Mid-Level, 3=Senior): ");
    scanf("%d", &position);
    printf("Years of Experience: ");
    scanf("%d", &years);
    printf("Number of Projects Completed this Year: ");
    scanf("%d", &projects);

    // กำหนดเงินเดือนพื้นฐานตามตำแหน่ง
    if (position == 1)
        baseSalary = 20000;
    else if (position == 2)
        baseSalary = 35000;
    else if (position == 3)
        baseSalary = 50000;
    else {
        printf("Invalid Position!\n");
        return 0;
    }

    // คำนวณโบนัสตามอายุงาน
    if (years < 1) {
        expBonus = 0;
    } else if (years >= 1 && years <= 3) {
        expBonus = baseSalary * 0.10;
    } else if (years >= 4 && years <= 5) {
        expBonus = baseSalary * 0.15;
    } else if (years > 5) {
        expBonus = baseSalary * 0.20;
    }

    // คำนวณโบนัสพิเศษ
    if (projects > 5) {
        specialBonus = baseSalary * 0.05;
    }

    // คำนวณเงินเดือนสุทธิ
    netSalary = baseSalary + expBonus + specialBonus;

    // แสดงผลลัพธ์
    printf("\nBase Salary: %d THB\n", baseSalary);
    printf("Experience Bonus: %.0f THB\n", expBonus);
    printf("Special Bonus: %.0f THB\n", specialBonus);
    printf("Net Salary: %.0f THB\n", netSalary);

    return 0;
}
