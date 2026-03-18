#include <iostream>
using namespace std;

// Structure to store student information
struct Student {
    string name;
    int age;
};

// Function to input student details
void inputStudents(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter age of student " << i + 1 << ": ";
        cin >> students[i].age;
    }
}

// Function to display student details
void displayStudents(Student students[], int n) {
    cout << "\nStudent Records:\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << students[i].name << ", Age: " << students[i].age << endl;
    }
}

int main() {
    int numberOfStudents;

    cout << "Enter the number of students: ";
    cin >> numberOfStudents;

    // Array to store student records
    Student students[numberOfStudents];

    // Input and display student information
    inputStudents(students, numberOfStudents);
    displayStudents(students, numberOfStudents);

    return 0;
}