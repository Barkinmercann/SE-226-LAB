#include <iostream>
#include <string>

using namespace std;

int main() {

    // Question 1
    string name;
    string student_id;

    cout << "What is your name?" << endl;
    cin >> name;


    cout << "Hello " << name << "." << endl;

    cout << "What is your Student ID?" << endl;
    cin >> student_id;

    cout << "Your ID is " << student_id << "." << endl;

    //  Question 2
    int var1, var2, sum, diff, prod;

    cout << "Enter the value of var1: ";
    cin >> var1;

    cout << "Enter the value of var2: ";
    cin >> var2;

    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;

    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout << "sum = " << sum << endl;
    cout << "diff = " << diff << endl;
    cout << "prod = " << prod << endl;

    // Question 3
    string name3;
    int lab_grade, midterm_grade, final_grade;
    double last_score;

    cout << "Enter student's name: ";
    cin >> name3;
    getline(cin, name3);

    cout << "Enter student's lab grade: ";
    cin >> lab_grade;

    cout << "Enter student's midterm grade: ";
    cin >> midterm_grade;

    cout << "Enter student's final grade: ";
    cin >> final_grade;

    last_score = (0.25 * lab_grade) + (0.35 * midterm_grade) + (0.4 * final_grade);

    cout << "Name: " << name3 << endl;
    cout << "Lab: " << lab_grade << endl;
    cout << "Midterm: " << midterm_grade << endl;
    cout << "Final: " << final_grade << endl;
    cout << "Last Score: " << last_score << endl;

    // Question 4
    cout << "*\n**\n***\n**\n*";



    return 0;
}



