#include <process.h>
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    if (argc != 2) {
        cerr << "\nBAAAAAAD";
        exit(-1);
    }
    char ch;
    ifstream infile;
    infile.open(argv[1]);
    if (!infile) {
        cerr << "\nGovno";
        exit(-1);
    }
    while (!infile.get(ch)) {
        cout << ch;
    }
    return 0;
}
