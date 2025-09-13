#include<stdio.h>
 #include <math.h>

int isPrime(int x) {
    if (x <= 1) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0; 

    for (int i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter N :\n");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }

    printf("Index:  ");
    for (int i = 0; i < n; i++) {
        printf("%d", i);
        if (i != n - 1) printf("  ");
    }

    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) printf("%d", arr[i]);
        else printf("#");
        if (i != n - 1) printf("  ");
    }
    printf("\n");

    return 0;
}