#include <iostream>

using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    int totalCredits = 0;
    double totalGradePoints = 0.0;

    for (int i = 0; i < numCourses; ++i) {
        int credits;
        char grade;
        cout << "Enter credits for course " << i + 1 << ": ";
        cin >> credits;
        cout << "Enter grade (A, B, C, D, F) for course " << i + 1 << ": ";
        cin >> grade;

        double gradePoint;
        if (grade == 'A') {
            gradePoint = 4.0;
        } else if (grade == 'B') {
            gradePoint = 3.0;
        } else if (grade == 'C') {
            gradePoint = 2.0;
        } else if (grade == 'D') {
            gradePoint = 1.0;
        } else {
            gradePoint = 0.0;
        }

        totalCredits += credits;
        totalGradePoints += gradePoint * credits;
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "Total Credits: " << totalCredits << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
} 
