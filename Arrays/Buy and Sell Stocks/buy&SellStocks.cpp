#include <bits/stdc++.h>
using namespace std;

int maxProfit(int prices[], int size)
{
    int maxProfit = 0;
    int bestBuy = prices[0];

    for (int i = 1; i < size; i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    int prices[size];

    for (int i = 0; i < size; i++)
    {
        int a = i + 1;
        cout << "Enter element number " << a << " : ";
        cin >> prices[i];
        cout << endl;
    }

    cout << "The array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << prices[i] << " ";
    }

    cout << endl;
    cout << endl;

    int profit = maxProfit(prices, size);

    cout << "The maximum profit is : " << profit << endl;

    return 0;
}