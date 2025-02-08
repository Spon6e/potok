
#include <fstream>             
using namespace std;
int main()
{
	// Для файловых потоков 
	const char* s1 = "\nСегодня ваше счастливое число -- ";
	int  n1 = 17982;
	ofstream outfile;
	outfile.open("PRN");
	// создать выходной файл 
	// открыть принтеру доступ к нему 
	outfile << s1 << n1 << endl; // послать данные на принтер 
	outfile << '\x0C';
	// прогнать лист до конца 
	return 0;
}