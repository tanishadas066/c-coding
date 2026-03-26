
#include <stdio.h>

void main() {
    int n, temp, r, a[10];
    int i = 0;

    printf("enter a number");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        r = temp % 10;
        a[i] = r;
        temp = temp / 10;
        i++;
    }

    for (int j = 0; j < i / 2; j++)
    {
        if (a[j] != a[i - j - 1])
        {
            printf("not palindrome\n");
            return;
        }
    }

    printf("palindrome\n");
}
