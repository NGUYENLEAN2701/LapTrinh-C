#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#define Max_10e12 1000000000000
#define Max_10e9 1000000000
#define Max_10e6 1000000
using namespace std;

std::vector<int> SieveOfAtkin(int limit)
{
    std::vector<int> Primes;
    if (limit > 2)
        //cout << 2 << " ";
        Primes.push_back(2);
    if (limit > 3)
        //cout << 3 << " ";
        Primes.push_back(3);

    std::vector<bool> sieve;
    for (int i = 0; i < limit; i++)
        sieve.push_back(false);

    for (int x = 1; x * x < limit; x++)
    {
        for (int y = 1; y * y < limit; y++)
        {

            int n = (4 * x * x) + (y * y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                sieve[n] = sieve[n] ^ true;

            n = (3 * x * x) + (y * y);
            if (n <= limit && n % 12 == 7)
                sieve[n] = sieve[n] ^ true;

            n = (3 * x * x) - (y * y);
            if (x > y && n <= limit && n % 12 == 11)
                sieve[n] = sieve[n] ^ true;
        }
    }

    for (int r = 5; r * r < limit; r++)
    {
        if (sieve[r])
        {
            for (int i = r * r; i < limit; i += r * r)
                sieve[i] = false;
        }
    }

    for (int a = 5; a < limit; a++)
        if (sieve[a])
            Primes.push_back(a);

    return Primes;
}

long long UocSoLonNhat(long long Number, std::vector<int> Primes)
{
    for (std::vector<int>::iterator it = Primes.begin(); it != Primes.end(); it++)
    {
        if (Number % (*it) == 0)
            return Number / (*it);
    }
    return 1;
}

std::vector<long long> largestDivisor(std::vector<long long> arr)
{
    int MaxPrime = sqrt(*max_element(arr.begin(), arr.end()));

    std::vector<int> Primes = SieveOfAtkin(MaxPrime);
    for (std::vector<long long>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        //if(*it<=1000000000000)
        *it = UocSoLonNhat(*it, Primes);
    }
    return arr;
}

void PrintVectorInt(std::vector<int> arr)
{
    for (std::vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        std::cout << *it << endl;
    }
}

void PrintVectorLong(std::vector<long long> arr)
{
    for (std::vector<long long>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        std::cout << *it << endl;
    }
}
int main()
{
    std::vector<long long> Arr;
    for (int i = 0; i < 1000; i++)
    {
        Arr.push_back(Max_10e12 - (2 * i + 1));
    }

    PrintVectorInt(SieveOfAtkin(1000));
    //PrintVectorLong(Arr);
    Arr = largestDivisor(Arr);
    //PrintVectorLong(Arr);
    //std::cout<<Arr[0]<<endl;
    return 0;
}
