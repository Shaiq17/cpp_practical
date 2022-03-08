#include <bits/stdc++.h>
using namespace std;
// program to copy the contents of one file to another.
int main()
{
    ifstream f1;
    ofstream f2;
    char ch;

    f1.open("file 1.txt");
    if (!f1)
    {
        cout << "Error in opening read file..";
        exit(0);
    }

    f2.open("file 2.txt");
    if (!f2)
    {
        cout << "\nError in opening a file...";
        exit(-1);
    }
    cout << "write text\n";
    while (f1.get(ch))
    {
        if (ch != ' ' && ch != '\t' && ch != '\n')
            f2.put(ch);
    }
    f1.close();
    f2.close();

    cout << "end";

    return 0;
}