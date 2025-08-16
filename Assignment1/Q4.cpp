#include <iostream>

using namespace std;

int arr[5] = { 1, 2 , 2, 7 ,8};
int arr_size = 5;
int main()
{
    // (a) REVERSING THE ELEMENTS OF AN ARRAY //

    for (int i=0; i < (arr_size - 1) / 2; i++)
    {
        if (i == arr_size - i - 1)
        {
            break;
        }

        int temp;
        temp = arr[i];

        arr[i] = arr[arr_size - i - 1];

        arr[arr_size - i - 1] = temp;
    }

    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }





    // (b) Find the matrix multiplication // 
    

    return 0;
}