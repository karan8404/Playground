#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#include <chrono>
using namespace std::chrono;

// Checks if given number is prime.
bool isPrime(int num)
{
    int z = floor(sqrt(num));
    for (int i = 2; i <= z; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// marks non-prime numbers false
void markPrimes(vector<bool> &primes)
{
    primes[0] = false;
    primes[1] = false;
    for (int i = 2; i < primes.size(); i++)
    {
        if (!isPrime(i))
            primes[i] = false;
    }
}

// prints the array in a well organized manner
void printPrimes(vector<bool> &primes)
{
    for (int i = 1; i < primes.size(); i++)
    {
        cout << i << ": " << (primes[i] == true) ? "true" : "false";
        cout << "\n";
    }
}

int main()
{
    cout << "Enter the number till which primes are to be found\n";
    int n = 1'000'000;
    // cin >> n;
    n = n + 1;
    vector<bool> primes;
    primes.reserve(n);
    primes.assign(n, true);

    auto startTime = high_resolution_clock::now();

    markPrimes(primes);
    auto timeTaken = duration_cast<microseconds>(high_resolution_clock::now() - startTime);

    // printPrimes(primes);
    cout << "Time taken: " << (double)timeTaken.count() / 1000000 << " seconds\n";
}