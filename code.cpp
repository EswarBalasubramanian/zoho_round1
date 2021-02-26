#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int size = str.size();
    int middle = size / 2;
    for (int i = 0; i < size; i++)
    {
        int temp = size - (i + 1), print = middle;

        while (temp)
        {
            cout << " ";
            temp--;
        }

        temp = i + 1;

        while (temp)
        {
            print = print % size;
            cout << str[print];
            print++;
            temp--;
        }

        cout << endl;
    }
    return 0;
}