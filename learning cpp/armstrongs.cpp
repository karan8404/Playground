#include <iostream>
using namespace std;
#include <cmath>

void fill(bool arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = true;
    }
}

int main()
{
    cout << "Enter the number till which primes are to be found";
    int n = 10;
    int limit = floor(sqrt(n));
    bool sieve[n];
    fill(sieve, n);

    for (int i = 0; i < n; i++)
    {
        cout << sieve[i] << "\n";
    }
}