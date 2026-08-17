#include <iostream>
using namespace std;

int maxArea(int arr[])
{
    int size = 9;
    int maxWater = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int width = j - i;
            int height = min(arr[i], arr[j]);
            int currentWater = width * height;

            maxWater = max(maxWater, currentWater);
        }
    }

    return maxWater;
}

int main()
{
    int arr[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    // int arr[2] = {1, 1};  // answer = 1;

    int a = maxArea(arr);

    cout << "The container with most water is : " << a << endl;

    return 0;
}