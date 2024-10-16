#include <stdio.h>
int main()
{
    int n, arr[100], i, j, count, fourth = -1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                if (count == 4)
                {
                    fourth = arr[i];
                    break;
                }
            }
        }
        if (fourth != -1)
        {
            break;
        }
    }

    if (fourth == -1)
    {
        printf("There is no 4th repeating element in the array.");
    }
    else
    {
        printf("The 4th repeating element in the array is %d.", fourth);
    }
    return 0;
}
