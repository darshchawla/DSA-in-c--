#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rollNumber;
    float physics;
    float chemistry;
    float maths;
    float percentage;
    char grade;
};
int main()
{
    Student s1;
    s1.name = "Darsh.";
    s1.rollNumber = 75;
    s1.physics = 97;
    s1.chemistry = 99;
    s1.maths = 95;
    s1.percentage = 97;
    s1.grade = 'A';

    cout << "Name of the student -> " << s1.name << endl;
    cout << "Roll number of the student -> " << s1.rollNumber << endl;
    cout << "Marks obtained in physics -> " << s1.physics << endl;
    cout << "Marks obtained in chemistry -> " << s1.chemistry << endl;
    cout << "Marks obtained in maths -> " << s1.maths << endl;
    cout << "Percentage of student -> " << s1.percentage << "%" << endl;
    cout << "Grade obtained by student -> " << s1.grade << endl;

    return 0;
}