#include <stdio.h>
int main() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int pos = 0, neg = N-1;
    while (pos < neg) {
        while (arr[pos] >= 0 && pos < N) {
            pos++;
        }
        while (arr[neg] < 0 && neg >= 0) {
            neg--;
        }
        if (pos < neg) {
            int temp = arr[pos];
            arr[pos] = arr[neg];
            arr[neg] = temp;
        }
    }

    printf("The elements separated by positive and negative are:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
