#include <iostream>
#include <string>

using namespace std;

int main()
{
    string studentName;
    double assignment, midterm, finalExam, total;
    char grade;

    cout << "===== STUDENT GRADE CALCULATOR =====" << endl;

    // Student name
    cout << "Enter student name: ";
    getline(cin, studentName);

    // Assignment: maximum 20
    cout << "Enter assignment mark (0 - 20): ";
    cin >> assignment;

    if (assignment < 0 || assignment > 20)
    {
        cout << "Error! Assignment mark must be between 0 and 20." << endl;
        return 0;
    }

    // Midterm: maximum 30
    cout << "Enter midterm mark (0 - 30): ";
    cin >> midterm;

    if (midterm < 0 || midterm > 30)
    {
        cout << "Error! Midterm mark must be between 0 and 30." << endl;
        return 0;
    }

    // Final exam: maximum 50
    cout << "Enter final exam mark (0 - 50): ";
    cin >> finalExam;

    if (finalExam < 0 || finalExam > 50)
    {
        cout << "Error! Final exam mark must be between 0 and 50." << endl;
        return 0;
    }

    // Calculate total
    total = assignment + midterm + finalExam;

    // Calculate grade
    if (total >= 90)
    {
        grade = 'A';
    }
    else if (total >= 80)
    {
        grade = 'B';
    }
    else if (total >= 70)
    {
        grade = 'C';
    }
    else if (total >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    // Display result
    cout << "\n===== RESULT =====" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Assignment: " << assignment << "/20" << endl;
    cout << "Midterm: " << midterm << "/30" << endl;
    cout << "Final Exam: " << finalExam << "/50" << endl;
    cout << "Total: " << total << "/100" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}