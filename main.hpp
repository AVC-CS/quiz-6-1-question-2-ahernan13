#include <iostream>
#include <fstream>
#include <string>
#include "main.hpp"

int writeFile() {
    ofstream outFile("employee.txt");
    if (outFile) {
        cerr << "failed to open file for writing.\n";
        return 0;
    }

    int empN;
    cout << "enter the number of employees: ";
    cin >> empN;

    for (int i = 0; i < empN; ++i) {
        int id;
        string name, department;
        double salary;
        cout << "enter employee ID: ";
        cin >> id;
        cin.ignore();  
        cout << "enter employee name: ";
        getline(cin, name);
        cout << "enter department name: ";
        getline(cin, department);
        cout << "enter salary: ";
        cin >> salary;
        outFile << id << "\n" << name << "\n" << department << "\n" << salary << "\n";
    }
    outFile.close();
    return numberOfEmployees;
}
int readFile() {
    ifstream inFile("employee.txt");
    if (!inFile) {
        cerr << "failed to open file for reading.\n";
        return 0;
    }
    int id;
    string name, department;
    double salary;
    int empN = 0;
    while (inFile >> id) {
        inFile.ignore();  
        getline(inFile, name);
        getline(inFile, department);
        inFile >> salary;
        inFile.ignore();  
        cout << "employee ID: " << id << "\n";
        cout << "employee name: " << name << "\n";
        cout << "department name: " << department << "\n";
        cout << "salary: " << salary << "\n\n";
        numberOfEmployees;
    }
    inFile.close();
    return empN;
}
