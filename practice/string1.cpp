#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

const int maxLine = 80;

void padAfterPunctuation(string &input)
{
    const std::string punct = ".,?;!";

    for (char p : punct)
// for(size_t i = 0; i < punct,size(); ++i) if you can't use a range based for loop.
// use punct[i] rather than p in find below as well.
    {
        size_t pos = 0;
        while ((pos = input.find(p, pos)) != string::npos && input.size() < maxLine)
        {
            input.insert(++pos, " ");
        }
    }
}

void padRandomAfterSpace(string &input)
{
    size_t pos = 0;
    while (input.size() < maxLine)
    {
        pos = input.find(' ', pos);
        if (pos < input.size() && pos != string::npos)
        {
            if (rand() & 1)
            {
                input.insert(pos, " ");
            }
            pos = input.find_first_not_of(' ', pos);
        }
        else
        {
            pos = 0;
        }
    }
}

int main()
{
    srand(time(0));

    ifstream fin("unjustified.txt");
    ofstream fout("justified.txt");
    string inputLine;

    while (getline(fin, inputLine))
    {
        if (inputLine.size() > 40 && inputLine.size() < maxLine)
        {
            padAfterPunctuation(inputLine);
            if (inputLine.size() < maxLine)
            {
                padRandomAfterSpace(inputLine);
            }
        }
        fout << inputLine << endl;
    }
    return 0;
}
