#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> number, int target)
{
    vector<int> answer;
    int size = number.size();
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        int pairSum = number[i] + number[j];

        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            answer.push_back(i);
            answer.push_back(j);
            return answer;
        }
    }

    return answer;
}

int main()
{
    vector<int> number = {2, 7, 11, 15};

    int target;
    cout << "Enter a target : ";
    cin >> target;

    cout << endl;

    vector<int> ans = pairSum(number, target);

    cout << "The index of the pair with targeted sum " << target << " is : " << "(" << ans[0] << " , " << ans[1] << ")" << endl;

    cout << endl;

    return 0;
}