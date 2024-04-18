#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{

    string student = "";
    int numOfGrades;
    double grade;
    double totalGrade = 0;
    cout << "Enter the name of the student: ";
    getline(cin, student);
    cout << "How many grades do you want to enter?: ";
    cin >> numOfGrades;
    cin.ignore();

    vector<double> grades;
    for (int i = 0; i < numOfGrades; i++)
    {
        grade = 0;
        cout << "Enter grade #" << (i + 1) << ": ";
        cin >> grade;
        grades.push_back(grade);
        totalGrade += grade;
    }

    cout << "=======================================\n";
    cout << "Student name: " << student << endl;
    cout << "Grade average: " << (totalGrade / numOfGrades);
}
