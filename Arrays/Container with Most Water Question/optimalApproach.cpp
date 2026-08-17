#include <iostream>
#include <algorithm>
using namespace std;

int maxArea(int arr[], int size)
{
    int maxWater = 0;

    int leftPointer = 0;
    int rightPointer = size - 1;

    while (leftPointer < rightPointer)
    {
        int width = rightPointer - leftPointer;
        int height = min(arr[leftPointer], arr[rightPointer]);
        int currentWater = width * height;

        maxWater = max(maxWater, currentWater);

        if (arr[leftPointer] < arr[rightPointer])
        {
            leftPointer++;
        }

        else
        {
            rightPointer--;
        }
    }

    return maxWater;
}

int main()
{
    int arr[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    // int arr[2] = {1, 1};  // answer = 1;

    int a = maxArea(arr, 9);

    cout << "The container with most water is : " << a << endl;

    return 0;
}