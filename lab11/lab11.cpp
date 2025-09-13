#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int temp = num;
    int sum = 0;
    int digits = 0;

    int t = num;
    while (t > 0) {
        digits++;
        t /= 10;
    }

    t = num;
    while (t > 0) {
        int digit = t % 10;              
        sum += pow(digit, digits);       
        t /= 10;                         
    }

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
