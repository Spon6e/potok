#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;

class person {
private:
    char name[80];
    int age;
public:
    void getData() {
        cout << "Введите имя человека: ";
        cin >> name;
        cout << "Введите возраст человека: ";
        cin >> age;
    }
    void setData() {
        cout << "\nИмя: " << name;
        cout << "\nВозраст: " << age;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    person pers;
    fstream file;
    char ch;
    file.open("NEWFILE.txt", ios::app | ios::out | ios::in | ios::binary);      //app продолжает запись в файле
    do {
        pers.getData();
        file.write(reinterpret_cast<char*>(&pers), sizeof(pers));
        cout << "Продолжим? (y/n)\n";
        cin >> ch;
    } while (ch == 'y');

    file.seekg(0); //Указатель на начало;
    file.read(reinterpret_cast<char*>(&pers), sizeof(pers));
    while (!file.eof()) {
        cout << "\nПерсона: ";
        pers.setData();
        file.read(reinterpret_cast<char*>(&pers), sizeof(pers));
    }
    cout << "\n";
    _getch();
}
