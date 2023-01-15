#include <iostream>

bool binary_search_recursive(int arr[], int target, int begin, int end)
{
    if(begin > end) return false;
    int mid = (begin + end) / 2;

    if(arr[mid] == target) return true;
    else if(arr[mid] < target) return binary_search_recursive(arr, target, mid+1, end);
    else return binary_search_recursive(arr, target, begin, mid-1);

    return false;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 8;
    int size = sizeof(arr)/sizeof(int);

    if (binary_search_recursive(arr, target, 0, size - 1)) std::cout << "element found!" << std::endl;
    else std::cout << "element not found" << std::endl;
}