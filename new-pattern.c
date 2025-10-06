#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {

        for (int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {
            if (i % 2 == 0)
                printf("-");
            else
                printf("#");
        }

        printf("\n");
    }

    for (int i = N - 1; i >= 1; i--)
    {

        for (int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {
            if (i % 2 == 0)
                printf("-");
            else
                printf("#");
        }

        printf("\n");
    }

    return 0;
}
