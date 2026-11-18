#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    int v = 0, c = 0;

    cout << "Enter a string: ";
    getline(cin, s);

    for(int i = 0; i < s.length(); i++)
    {
        char ch = tolower(s[i]);

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
                v++;
            else
                c++;
        }
    }

    cout << "Vowels = " << v << endl;
    cout << "Consonants = " << c;

    return 0;
}
