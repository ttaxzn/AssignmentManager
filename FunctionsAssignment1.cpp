#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void MENU()
{
    cout << "***************************" << endl;
    cout << setw(15) << "MENU" << endl;
    cout << "***************************" << endl;
    cout << setw(22) << "ADD AN ASSIGNMENT" << endl;
    cout << endl;
    cout << setw(24) << "REMOVE AN ASSIGNMENT" << endl;
    cout << endl;
    cout << setw(23) << "LIST OF ASSIGNMENTS" << endl;
    cout << endl;
    cout << setw(22) << "EARLIEST DUE DATE" << endl;
    cout << endl;
    cout << setw(15) << "QUIT" << endl;
    cout << "***************************" << endl;
    cout << endl;
}

struct dueDate {
	int month, day, year;
    string name;
	// override the == operator
    dueDate(string hwname, int dueMonth, int dueDay, int dueYear) :
    name(hwname), month(dueMonth), day(dueDay), year(dueYear)
    {
    }
	friend bool operator==(dueDate a, dueDate b) {
		if (a.month==b.month && a.day==b.day && a.year==b.year) {
			return true;
		}
		else {
			return false;
		}
	}
};