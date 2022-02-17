#include<iostream>
#include <string>
#include<list>
#include <iomanip>
#include<iterator>
#include "FunctionsAssignment1.cpp"
using namespace std;

int main ()
{
list <dueDate> dueDates;
dueDates.push_back(dueDate("Assignment 1",10,13,2021));
dueDates.push_back(dueDate("Assignment 2", 9,3,2021));
dueDates.push_back(dueDate("Assignment 3", 8,30,2021));
dueDates.push_back(dueDate("Assignment 4", 9,1,2021));
dueDates.push_back(dueDate("Assignment 5", 9,5,2021));
dueDates.push_back(dueDate("Assignment 6", 10,1,2021));
std::list<dueDate>::iterator it;

MENU();

char control;
cin >> control;
cout << endl;

while(control!='q')
{

    //ADD AN ASSIGNMENT - DONE
    if(control=='a' || control=='A')
    {
    string addname;
    int addmonth;
    int addday;
    int addyear;
    cout << "ADD AN ASSIGNMENT" << endl;
    cout << endl;
    cout << endl;
    cout << "Enter assignment month: ";
    cin >> addmonth;
    cout << endl;
    cout << "Enter assignment day: ";
    cin >> addday;
    cout << endl;
    cout << "Enter assignment year: ";
    cin >> addyear;
    cout << endl;
    dueDates.push_back(dueDate("NEW ASSIGNMENT", addmonth, addday, addyear));
    cout << "ASSIGNMENT SUCCESSFULLY ADDED!" << endl;
    cout << endl;
    for (it = dueDates.begin(); it != dueDates.end(); it++)
    {
    string name = it->name;
    int month = it->month;
    int day = it->day;
    int year = it->year;
    cout << name << ":  " << month << "/" << day << "/" << year << endl;
    }
    MENU();
    cout << endl;
    cin >> control;
    }


    //REMOVE AN ASSIGNMENT - DONE 
    if(control=='r' || control=='R')
    {
    cout << "REMOVE AN ASSIGNMENT" << endl;
    cout << endl;
    string removename;
    int removemonth;
    int removeday;
    int removeyear;
     for (it = dueDates.begin(); it != dueDates.end(); it++)
    {
    string name = it->name;
    int month = it->month;
    int day = it->day;
    int year = it->year;
    cout << name << ":  " << month << "/" << day << "/" << year << endl;
    }
    cout << endl;
    cout << "Enter the assigment month: ";
    cin >> removemonth;
    cout << endl;
    cout << "Enter the assignment day: ";
    cin >> removeday;
    cout << endl;
    cout << "Enter the assignment year: ";
    cin >> removeyear;
    cout << endl;
    dueDate R=dueDate("REMOVE", removemonth, removeday, removeyear);
    for (it = dueDates.begin(); it != dueDates.end(); it++)
    {
    if(*it==R)
    {
        dueDates.remove(*it);
        break;
    }
    }

     for (it = dueDates.begin(); it != dueDates.end(); it++)
    {
    string name = it->name;
    int month = it->month;
    int day = it->day;
    int year = it->year;
    cout << name << ":  " << month << "/" << day << "/" << year << endl;
    }
    MENU();
    cin >> control;
    }



    //LIST OF ASSIGNMENTS - DONE 
    if(control=='l' || control=='L')
    {
    cout << "LIST OF ASSIGNMENTS" << endl;
    cout << endl;
    for (it = dueDates.begin(); it != dueDates.end(); it++)
    {
    string name = it->name;
    int month = it->month;
    int day = it->day;
    int year = it->year;
    cout << name << ":  " << month << "/" << day << "/" << year << endl;
    }
    cout << endl;
    MENU();
    cin >> control;
    }





    //EARLIEST DUE DATE
    if(control=='e' || control=='E')
    {
    list<dueDate> dueDatesSearch;
    int month=dueDates.front().month;

    //FINDS EARLIEST MONTH
    for (it = dueDates.begin(); it != dueDates.end(); it++)
    {
        if(month > it->month)
        {
            month=it->month;
        }
    }

    //ADDS TO A LIST
     for (it = dueDates.begin(); it != dueDates.end(); it++)
    {
        if(month == it->month)
        {
            dueDatesSearch.push_back(*it);
        }
    }
    
    int day=dueDatesSearch.front().day;
    for (it = dueDatesSearch.begin(); it != dueDatesSearch.end(); it++)
    {
    if(day > it->day)
        {
            day=it->day;
        }
    }
    cout << "EARLIEST DUE DATE" << endl;
    cout << month << "/" << day << "/" << "2021" << endl;
    cout << endl;

    for (it = dueDates.begin(); it != dueDates.end(); it++)
    {
    string name = it->name;
    int month = it->month;
    int day = it->day;
    int year = it->year;
    cout << name << ":  " << month << "/" << day << "/" << year << endl;
    }





    MENU();
    cin >> control;
    }





}



    return 0;
}