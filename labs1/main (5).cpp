#include <iostream> 
#include <string> 
using namespace std; 
struct Student {    string name;     int roll;     float marks; }; 
int main() { 
    Student student1; 
    // Input student details 
    cout << "Enter student name: "; 
    getline(cin, student1.name);  // Using getline to allow spaces 
    cout << "Enter roll number: "; 
    cin >> student1.roll; 
    cout << "Enter marks: "; 
    cin >> student1.marks; 
    // Display student details 
    cout << "\nStudent Details:\n"; 
    cout << "Name: " << student1.name << endl; 
    cout << "Roll Number: " << student1.roll << endl; 
    cout << "Marks: " << student1.marks << endl;