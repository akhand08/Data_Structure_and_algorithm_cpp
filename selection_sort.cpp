#include <iostream>



void selectionSort(int arr[], int n)
{
    for(int i=0; i < n; i++)
    {
        int small_val_indx = i;

        for(int j=i; j < n; j++)
        {
            if(arr[j] < arr[small_val_indx])
            {
                small_val_indx  = j;
            }
        }


        if( small_val_indx != i)
        {
            int temp = arr[i];
            arr[i] = arr[small_val_indx];
            arr[small_val_indx] = temp;

        }
    }
}

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
    int arr[10] = {10, 20, 30, 100, 25, 1, 1000, 99, 8, 11};
    int arr_sz = std::size(arr);


    std::cout << "Array before selection sort: " ;
    printArray(arr, arr_sz);


    selectionSort(arr,arr_sz);


    std::cout << "Array after selection sort: " ;
    printArray(arr, arr_sz);



    return 0;


}