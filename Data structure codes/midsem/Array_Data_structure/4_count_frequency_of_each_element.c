#include <stdio.h>
int main()
{
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    // initialize count array with zeros
    int count[N];
    for (int i = 0; i < N; i++)
    {
        count[i] = 0;
    }
    // count frequency of each element
    for (int i = 0; i < N; i++)
    {
        int num = arr[i];
        count[num]++;
    }
    // display frequency of each element
    printf("Frequency of each element:\n");
    for (int i = 0; i < N; i++)
    {
        if (count[i] > 0)
        {
            printf("%d occurs %d times\n", i, count[i]);
        }
    }
}
