#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int m1 = 1, m2 = 23;
    char h = 'x';
    string str1 = "Вопросики возникают";
    ofstream outfile("VIHOD.txt");
    outfile << h << m1 << '\n' << m2 << ' ' << str1;
    cout << "Файл записан";
}
