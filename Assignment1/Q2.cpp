#include <iostream>
using namespace std;

// Q.2 REMOVING DUPLICATE ELEMENTS IN A ARRAY // 

int linearSearch(int ele);
void deleteElementbyIdx(int idx);
void displayArray();

 int arr[100] = {7, 1, 2, 2, 3, 4, 4, 2, 7};

 int arr_size = 9;


int main()
{
    bool swapped = false;
    for (int i = 0; i < arr_size; i++)
    {
        

        for (int j = i - 1; j  > -1; j--)
        {
            swapped = false;
            
            if (arr[i] == arr[j])
            {

                if (i == arr_size - 1)
                {
                    arr_size--;
                    
                }
                else
                {
                int temp = arr[arr_size - 1];
                
                arr[arr_size - 1] = arr[i];
                arr[i] = temp;
                swapped = true;
                arr_size--;
                }
            }


        }

        if (swapped == true)
        {
            i -= 1;
        }


    }

    displayArray();


    return 0;
}





void deleteElementbyIdx(int idx)
{

    if (idx == -1)
    {
        cout << "Element does not exist in array";
        return;
    }

    for (int i = idx + 1; i < arr_size; i++)
    {
        arr[i-1] = arr[i];
    }
    // Acc to this logic, the last element will be a copy of the second last, but we will reduce the array size so the last element does not show
    arr_size--;



}



int linearSearch(int ele)
{   
    for (int i =0; i < arr_size ; i++)
    {
        if (arr[i] == ele)
        {
            return i;
            
        }
        
        
    }

    return -1;
}

void displayArray()
{
    cout << "The array elements are : [ ";
    for (int i =0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "]" << endl;

    cout << " ARRAY SIZE = " << arr_size << endl;
}