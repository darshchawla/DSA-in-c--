#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec;

    vec.push_back(7);
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(2);

    int answer = 0;

    for (int value : vec)
    {
        answer = answer ^ value;
    }
    cout << "The single number in the vector is : " << answer << endl;

    return 0;
}