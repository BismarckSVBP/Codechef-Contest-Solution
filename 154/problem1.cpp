// https://www.codechef.com/START154D/problems/GCDXOR

#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

void casesolve(int n, long long k)
{
    long long *frr = new long long[n]; // Dynamically allocate an array instead of a vector
    int i = 0;

    // Input the elements into the array
    while (i < n)
    {
        cin >> frr[i];
        i++;
    }

    bool equal = true;
    i = 0;
    while (i < n)
    {
        if (frr[i] != k)
        {
            equal = false;
            break;
        }
        i++;
    }

    if (equal)
    {
        cout << 0 << endl;
        delete[] frr; // Free the allocated memory
        return;
    }

    int y = -1, z = -1;
    i = 0;
    while (i < n)
    {
        if (frr[i] != k)
        {
            if (y == -1)
                y = i;
            z = i;
        }
        i++;
    }

    if (y == z)
    {
        cout << 1 << endl;
        delete[] frr; // Free the allocated memory
        return;
    }

    bool u = true;
    long long w = frr[y] ^ k;
    bool o = true;

    i = y;
    while (i <= z)
    {
        if (frr[i] % k != 0)
        {
            u = false;
        }
        if ((frr[i] ^ k) != w)
        {
            o = false;
        }
        i++;
    }

    // Output the result based on the conditions
    if (o || u)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }

    delete[] frr; // Free the allocated memory
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        casesolve(n, k);
    }
    return 0;
}
