#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

class Course {
public:
    Course(string code = "", string title = "", int credit = 0)
        : ccode(code), ctitle(title), ccredit(credit), cgrade(0) {}

    string get_code() const {
        return ccode;
    }

    string get_title() const {
        return ctitle;
    }

    int get_credit() const {
        return ccredit;
    }

    float get_grade() const {
        return cgrade;
    }

    void set_grade(float grade) {
        cgrade = grade;
    }

private:
    string ccode;
    string ctitle;
    int ccredit;
    float cgrade;
};

class Student {
public:
    Student(string code, string name) : scode(code), sname(name) {
        courses[0] = Course("CS101", "Introduction to Computer Science", 3);
        courses[1] = Course("MATH201", "Calculus I", 4);
        courses[2] = Course("PHYS101", "Introduction to Physics", 4);
        courses[3] = Course("CHEM101", "Introduction to Chemistry", 3);
        courses[4] = Course("ENGL101", "English Composition I", 3);
    }

    void register_course(string ccode, float cgrade) {
        for (int i = 0; i < 5; i++) {
            if (courses[i].get_code() == ccode) {
                courses[i].set_grade(cgrade);
                break;
            }
        }
    }

    float calc_gpa() const {
        float total_grade = 0;
        float total_credit = 0;
        for (int i = 0; i < 5; i++) {
            total_grade += courses[i].get_grade() * courses[i].get_credit();
            total_credit += courses[i].get_credit();
        }
        return total_credit > 0 ? total_grade / total_credit : 0;
    }

    string get_name() const {
        return sname;
    }

    bool operator<(const Student& other) const {
        return calc_gpa() > other.calc_gpa();
    }

private:
    string scode;
    string sname;
    Course courses[5];
};

int main() {
    int n;
    cin >> n;

    vector<Student> students;
    for (int i = 0; i < n; i++) {
        string scode, sname;
        cin >> scode >> sname;
        Student student(scode, sname);
        for (int j = 0; j < 5; j++) {
            string ccode;
            float cgrade;
            cin >> ccode >> cgrade;
            student.register_course(ccode, cgrade);
        }
        students.push_back(student);
    }

    sort(students.begin(), students.end());

    cout << fixed << setprecision(5);
    for (const auto& student : students) {
        cout << student.get_name() << " " << student.calc_gpa() << endl << endl;
    }

    return 0;
}