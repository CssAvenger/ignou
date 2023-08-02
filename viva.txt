#include <stdio.h>

void bubble_sort(int arr[], int length)
{
    int temp;
    for (size_t i = 0; i < length - 1; i++)
    {
        for (size_t j = 0; j < length; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nBubble Sort: \n");
    for (size_t i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void insertion_sort(int arr[], int length)
{
    for (size_t i = 1; i < length; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    printf("\nInsertion Sort: \n");
    for (size_t i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void selection_sort(int arr[], int length)
{
    for (size_t i = 0; i < length - 1; i++)
    {
        int min_index = i;
        for (size_t j = j + 1; j < length; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
                int temp = arr[min_index];
                arr[min_index] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nSelection Sort: \n");
    for (size_t i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void binary_search(int key, int arr[], int length)
{
    int startIndex = 0;
    int endIndex = length - 1;
    int matched = -1;
    for (size_t i = 0; i < length; i++)
    {
        int mid = (startIndex + endIndex) / 2;
        printf("\t%d\t", mid);
        if(arr[mid] == key){
            matched = mid;
            break;
        }
        else if(key > arr[mid]){
            startIndex = mid + 1;
        }
        else
            endIndex = mid - 1;

    }
    if(matched > 0)
        printf("\nIndex of %d found at %d\n", key, matched);
    else
        printf("\nNo record found!");
    

}

int main(int argc, char const *argv[])
{
    int a[] = {9, 2, 8, 3, 5, 6};
    size_t length = sizeof(a) / sizeof(a[0]);
    bubble_sort(a, length);
    insertion_sort(a, length);
    selection_sort(a, length);
    binary_search(8, a, length);
    printf("\n");
    return 0;
}
