#include <stdio.h>
int main() 
{
    int n, num, eS = 0, oS = 0;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        printf("Enter integer #%d: ", i);
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            eS += num;
        } else 
        {
            oS += num;
        }
    }
    printf("\nSum of even integers: %d\n", eS);
    printf("Sum of odd integers: %d\n", oS);
    return 0;
}
