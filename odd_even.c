#include <stdio.h>
void odd_even()
{
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("%d %d\n", evenCount, oddCount);
}

int main()
{
    odd_even();
}