#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int x;
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] + array[j] == x)
            {
                printf("Yes\n");
                return 0;
            }
        }
    }

    printf("No\n");
    return 0;
}
