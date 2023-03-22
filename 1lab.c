#include <stdio.h>

int main()
{
    printf("Введите число для получения его квадратного корня: ");
    int n, k = 1, x = 0, sum = 0;
    scanf("%d", &n);
    while (sum < n){
        sum+=k;
        k+=2;
        x++;
    }
    printf("Его квадратный корень = %d\n", x);
    return 0;
}
