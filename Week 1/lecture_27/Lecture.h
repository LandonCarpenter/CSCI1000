#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student
{
    int ID;
    string last_name;
    string first_name;
};


class Lecture
{
    public:
        Lecture();
        addStudent();
        removeStudent();
        findStudent(int id);
        findStudent(string _last_name);
        findStudent(Student s);
    private:
        vector<Student> _students;
        string _course_name;
        int _enrolled_students;


};