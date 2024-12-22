#include <iostream>
#include <string>
using namespace std;

void ConverSmollToCapital(string &str)
{
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] >= 'a' && str[i] < 'z')
        {
            str[i] = str[i] - 32;
            cout << str[i] << endl;
        }
        else if (str[i] >= 'A' && str[i] < 'Z')
        {
            str[i] = str[i] + 32;
            cout << str[i] << endl;
        }
    }
}

int main()
{
    string str;
    cout << "Enter You Good Name : ";
    cin >> str;
    ConverSmollToCapital(str);
    return 0;
}
