#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#include <chrono>
using namespace std::chrono;

// creates the sieve of erastothenes
void createSieve(vector<bool> &sieve)
{
    sieve[0] = false;
    sieve[1] = false;
    int limit = floor(sqrt(sieve.size()));

    for (int i = 2; i <= limit; i++)
    {
        if (sieve[i] == false)
            continue;
        for (int j = i * i; j <= sieve.size(); j += i)
        {
            sieve[j] = false;
        }
    }
}

// prints the array in a well organized manner
void printSieve(vector<bool> &sieve)
{
    for (int i = 1; i < sieve.size(); i++)
    {
        cout << i << ": " << sieve[i];
        cout << "\n";
    }
}

int main()
{
    cout << "Enter the number till which primes are to be found\n";
    int n = 1'000'000;
    // cin >> n;
    n = n + 1;
    vector<bool> sieve;
    sieve.reserve(n);
    sieve.assign(n, true);

    auto startTime = high_resolution_clock::now();

    createSieve(sieve);
    auto timeTaken = duration_cast<microseconds>(high_resolution_clock::now() - startTime);

    // printSieve(sieve);
    cout << "Time taken: " << (double)timeTaken.count() / 1000000 << " seconds\n";
}