#include <iostream>
#include <fstream>
using namespace std;

string readfile()
{
    string line;
    fstream file;
    file.open("alphabets.txt", ios ::in);
    getline(file, line);
    file.close();
    return line;
}

void appendfile()
{
    fstream file;
    file.open("alphabets.txt", ios ::app);
    file << endl
         << "abcdefghijklmnopqrstuvwxyz";
    file.close();
}

main()
{
    string record = readfile();
    string alphabetletters = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;

    for (int i = 0; i < 26; i++)
    {
        if (record[i] != alphabetletters[i])
        {
            appendfile();
            break;
        }
        else
        {
            continue;
        }
    }
}