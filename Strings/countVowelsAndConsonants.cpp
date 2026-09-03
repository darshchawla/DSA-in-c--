#include <iostream>
using namespace std;

int consonants(string &str)
{
    int consonantCount = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') && (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'))
        {
            consonantCount++;
        }
    }

    return consonantCount;
}

int vowels(string &str)
{
    int vowelCount = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') || (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
        {
            vowelCount++;
        }
    }

    return vowelCount;
}

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    cout << endl;

    int v = vowels(str);

    int c = consonants(str);

    cout << "The number of vowels in the string are : " << v << endl;

    cout << endl;

    cout << "The number of consonants in the string are : " << c << endl;
}