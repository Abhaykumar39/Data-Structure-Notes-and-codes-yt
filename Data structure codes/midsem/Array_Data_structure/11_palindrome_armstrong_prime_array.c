#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define MAX_SIZE 100

// Function to check if a number is prime
bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Function to check if a number is Armstrong
bool is_armstrong(int num)
{
    int sum = 0, temp = num;
    while (temp != 0)
    {
        int rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    return (num == sum);
}

// Function to calculate the sum of digits of a number
int sum_of_digits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int N, i, count_palindrome = 0, count_prime = 0, count_armstrong = 0, count_sum_of_digits = 0;
    int arr[MAX_SIZE];

    // Read input
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Count the number of palindrome, prime, Armstrong, and elements with sum of digits less than 10
    for (i = 0; i < N; i++)
    {
        // Check if the number is palindrome
        int num = arr[i], reversed_num = 0;
        while (num != 0)
        {
            reversed_num = reversed_num * 10 + num % 10;
            num /= 10;
        }
        if (arr[i] == reversed_num)
        {
            count_palindrome++;
        }

        // Check if the number is prime
        if (is_prime(arr[i]))
        {
            count_prime++;
        }

        // Check if the number is Armstrong
        if (is_armstrong(arr[i]))
        {
            count_armstrong++;
        }

        // Check if the sum of digits of the number is less than 10
        if (sum_of_digits(arr[i]) < 10)
        {
            count_sum_of_digits++;
        }
    }

    // Print the counts
    printf("Total palindrome numbers: %d\n", count_palindrome);
    printf("Total prime numbers: %d\n", count_prime);
    printf("Total Armstrong numbers: %d\n", count_armstrong);
    printf("Total elements having sum of digits less than 10: %d\n", count_sum_of_digits);

    return 0;
}
