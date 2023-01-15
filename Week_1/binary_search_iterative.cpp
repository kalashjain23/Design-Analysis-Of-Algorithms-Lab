#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 8;
    int size = sizeof(arr)/sizeof(int);

    int low = 0;
    int high = size-1;

    while(low < high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == target)
        {
            std::cout << "Target found!" << std::endl;
            return 0;
        }
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
}