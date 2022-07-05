
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    FILE* fin, * fout;

    fopen_s(&fin, "text.txt", "rt");
    fopen_s(&fout, "res.txt", "wt");
    int* arr = new int[62];
    for (int i = 0; i < 62; i++)
    {
        arr[i] = 0;
    }
    char ch;
    if (fin != NULL)
    {
        while ((ch = fgetc(fin)) != EOF)
        {
            if (isupper(ch))
            {
                arr[ch - 65]++;
            }
            else if (islower(ch))
            {
                arr[ch - 97 + 26]++;
            }
            else if (isdigit(ch))
            {
                arr[ch - 48 + 52]++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0)
                fprintf(fout, "%c %d\n", char(i + 65), arr[i]);
        }
        for (int i = 26; i < 52; i++)
        {
            if (arr[i] != 0)
                fprintf(fout, "%c %d\n", char(i - 26 + 97), arr[i]);
        }
        for (int i = 52; i < 62; i++)
        {
            if (arr[i] != 0)
                fprintf(fout, "%c %d\n", char(i - 52 + 48), arr[i]);
        }
    }
    else
        cout << "File not open!";
    delete[]arr;
}

