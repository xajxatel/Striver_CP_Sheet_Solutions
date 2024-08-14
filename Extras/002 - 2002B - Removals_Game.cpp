#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long testCases;

    // Read the number of test cases.
    cin >> testCases;

    while (testCases--)
    {
        long long arraySize;
        bool isBobWinner = true; // Initially assume Bob is the winner.
        cin >> arraySize;        // Read the size of the array.

        vector<long long> alicePermutation(arraySize + 1);
        vector<long long> bobPermutation(arraySize + 1);
        vector<long long> reversedAlicePermutation(arraySize + 1);

        // Read Alice's permutation and create the reversed permutation.
        for (long long i = 1; i <= arraySize; i++)
        {
            cin >> alicePermutation[i];
            reversedAlicePermutation[arraySize - i + 1] = alicePermutation[i];
        }

        // Read Bob's permutation and compare it with Alice's original permutation.
        for (long long i = 1; i <= arraySize; i++)
        {
            cin >> bobPermutation[i];
            if (bobPermutation[i] != alicePermutation[i])
            {
                isBobWinner = false; // Bob's permutation does not match Alice's.
            }
        }

        // If Bob's permutation does not match Alice's, check if it matches the reversed permutation.
        if (!isBobWinner)
        {
            isBobWinner = true; // Assume again that Bob could win.
            for (long long i = 1; i <= arraySize; i++)
            {
                if (bobPermutation[i] != reversedAlicePermutation[i])
                {
                    isBobWinner = false; // Bob's permutation does not match the reversed Alice's.
                    break;
                }
            }
        }

        // Output the result based on whether Bob's permutation matched Alice's or the reverse.
        cout << (isBobWinner ? "Bob\n" : "Alice\n");
    }
}