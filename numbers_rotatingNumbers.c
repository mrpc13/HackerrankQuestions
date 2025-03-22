#include <stdio.h>
#include <math.h>

int is_prime(int num)
{
    int divisor_count = 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            divisor_count++;
    }
    return divisor_count == 0 ? 1 : 0;
}

int is_palindrome(int num)
{
    int reversed = 0, temp = num;
    while (temp > 0)
    {
        reversed = (reversed * 10) + (temp % 10);
        temp = temp / 10;
    }
    return reversed == num ? 1 : 0;
}

int left_shift(int num, int shift_count)
{
    int digit_count = count_digits(num), result = 0;
    result = (num) % (int)(pow(10, digit_count - shift_count));
    result = (result * (int)pow(10, shift_count)) + (num / (int)(pow(10, digit_count - shift_count)));
    return result;
}

int right_shift(int num, int shift_count)
{
    int digit_count = count_digits(num), result = 0;
    result = (num) % (int)pow(10, shift_count);
    result = (result) * ((int)pow(10, digit_count - shift_count));
    result = (result) + (num) / (int)(pow(10, shift_count));
    return result;
}

int count_digits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num = num / 10;
    }
    return count;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n, flag = 1;
        scanf("%d", &n);
        if (n > 99)
        {
            if (is_prime(n) && is_palindrome(n))
            {
                printf("%d\n", n);
                flag = 0;
            }
            else if (is_prime(n))
            {
                printf("%d\n", left_shift(n, 2));
                flag = 0;
            }
            else if (is_palindrome(n))
            {
                printf("%d\n", right_shift(n, 2)); 
                flag = 0;
            }
        }
        if (flag)
        {
            if (n % 2 == 0) printf("%d\n", right_shift(n, 1));
            else printf("%d\n", left_shift(n, 1));
        }
    }
}
