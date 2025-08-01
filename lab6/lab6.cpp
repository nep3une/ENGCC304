#include<stdio.h>

int main() {
    int N;
    printf("กรอกตัวเลข: ");
   if (scanf("%d", &N) != 1) {
        printf("ใส่ตัวเลขเท่านั้น\n");
        return 1;
   }
    

    if (N % 2 == 1) {
        printf("ลำดับเลขคี่จาก 1 ถึง %d:\n", N);
        for (int i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }
    } else {
        printf("ลำดับเลขคู่จาก %d ถึง 0:\n", N);
        for (int i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }
    return 0;
}