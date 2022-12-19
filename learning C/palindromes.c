// program to find the number of palindromes after 10 to the specified number
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int reverse(int num)
{
    int res = 0;
    while (num > 0)
    {
        res = res * 10 + num % 10;
        num /= 10;
    }
    return res;
}

bool isPalindrome(int num)
{
    int reversed = reverse(num);
    while (num > 0)
    {
        if (num % 10 != reversed % 10)
        {
            return false;
        }
        num /= 10;
        reversed /= 10;
    }
    return true;
}

void findPalindromes(int limit)
{
    for (int i = 11; i <= limit; i++)
    {
        if (isPalindrome(i))
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int limit;
    printf("Enter the limit within which palindromes are to be found.\n");
    scanf("%d", &limit);
    if (limit > 10)
    {
        findPalindromes(limit);
    }
    else
    {
        printf("Incorrect limit given");
    }
    return 0;
}