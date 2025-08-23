#include <iostream>

// Given an array of n-1 distinct integers in the range of 1 to n, find the missing number
// in it in a Sorted Array
// (a) Linear time
// (b) Using binary search

using namespace std;


int arr[5] = {1, 2, 4, 5, 6};
int n = 5;

int main()
{

    // (a) Linear Time

    for (int i = 0; i < n - 1; i++ )
    {
        if (arr[i] != i + 1)
        {
            // Missing no. found
            cout << (i + 1) << " is the missing number" << endl;
            break;
        }
    }

    // (b) Using binary search

    int a = 0;
    int b = n - 1;

    int m = (a + b) / 2;

    while (a <= b)
    {
        if (arr[m + 1] != arr[m] + 1)
        {
            // Missing no. found
            cout << arr[m] + 1 << " is the missing number" << endl;
            break;
        }
        else if (arr[m-1] != arr[m] - 1)
        {
            // Missing no. found
            cout << arr[m] - 1 << " is the missing number" << endl;
            break;
        }



        if (a + m + 1 != arr[m])
        {
            // Missing number is on the left side
            b = m - 1;
        }
        else
        {
             // Missing number is on the right side
            a = m + 1;
            
        }

        m = a + (b - a) / 2;
    }

    return 0;
}