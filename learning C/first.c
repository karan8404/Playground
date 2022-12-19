#include <stdio.h>

void modify(int *pN) //* represents it is a pointer. in function *pN dereferences to n
{
    *pN = *pN - 1;
}

int main()
{
    int n = 100;
    modify(&n); // getting the pointer of n and passing to modife
    printf("%d\n", n);
}