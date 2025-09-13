#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบ Armstrong
int isArmstrong(int num) {
    int temp = num;
    int sum = 0;
    int digits = 0;

    // นับจำนวนหลัก
    int t = num;
    while (t > 0) {
        digits++;
        t /= 10;
    }

    // รวมผลยกกำลัง
    t = num;
    while (t > 0) {
        int digit = t % 10;              // ดึงหลักสุดท้ายออกมา
        sum += pow(digit, digits);       // ยกกำลังตามจำนวนหลักแล้วบวกเข้า sum
        t /= 10;                         // ตัดหลักที่ใช้แล้วทิ้ง
    }

    // ตรวจสอบว่า sum เท่ากับเลขเดิมหรือไม่
    return (sum == temp);
}

int main() {
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
