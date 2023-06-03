#include <iostream>

void printArray(int array[],int size)
{
    for(int i=0; i < size; i++)
    {
        std::cout << array[i] << " " ;
    }
    std::cout << std::endl;
}



int main()
{
    int arr[10] = {9, 49, 1,2,0,88,43,23,56, 5};
    int arr_size = std::size(arr);

    std::cout << "Before Bubble Sort: " ;
    printArray(arr, arr_size);
    std::cout << std::endl;


    // bubbles sort algo

    for(int i=0; i < arr_size; i++)
    {
        bool swapped = false;
        for(int j=0; j < arr_size - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }

    }


    std::cout  << "After Bubble Sort: ";
    printArray(arr, arr_size);
    std::cout << std::endl;


    return 0;

}