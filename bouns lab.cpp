#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define nn <<"\n"
#define ee <<" "<<
#define ee_ <<" "
#define ll long long
#define cins string s;cin>>s
#define cinn int n;cin>>n
#define cint int t;cin>>t;while(t--)
#define foor(i,a,n) for(int i=a;i<n;i++)
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
 
vector<string> vp;
vector<string> vf;
float gpa=0;
float hours=0;

class Course
{
public:
    string name, code;
    float grade, hours;
    
        Course(string code, string name, float hours)
        {
            this->code = code;
            this->name = name;
            this->hours = hours;
            grade = 0;
        };
        //Course();
        //~Course();

    string get_code(){
        return code;
    };
    float get_grade(){
        return grade;
    };
    int get_hour(){
        return hours;
    };
    void set_grade(float grade)
    {
        this->grade = grade;
    };
};
 

 
void print_courses_statu(bool is_passed, string code, string name)
{
    string s;
    if (is_passed)
        s="P ";
    else
        s="F ";
    s+=code;
    s+=" - ";
    s+=name;
    if (is_passed)
        vp.push_back(s);
    else
        vf.push_back(s);
};


Course course[5];
class Student
{
public:
    string name, code;
    Student(string name, string code)
    {
        this->name = name;
        this->code = code;
        course[0] = Course("CS101", "Introduction to Computer Science", 3);
        course[1] = Course("MATH201", "Calculus I", 2);
        course[2] = Course("PHYS101", "Introduction to Physics", 4);
        course[3] = Course("CHEM101", "Introduction to Chemistry", 3);
        course[4] = Course("ENGL101", "English Composition I", 1);
    };
    //~Student();
    void register_course(string code, float grade) 
    {
        for (int i = 0; i < 5; i++)
        {
            if (course[i].get_code() == code)
            {
                course[i].set_grade(grade);
                break;
            }
        }
    }

    float calculate_gpa() 
    {
        float t_grade = 0;
        float t_hour = 0;
        for (int i = 0; i < 5; i++)
        {
            t_grade += course[i].get_grade() * course[i].get_hour();
            t_hour += course[i].get_hour();
        }
        if (t_hour)
        {
            return (t_grade / t_hour);
        }
        return 0;
    }

    string get_name()
    {
        return name;
    }

};
 
int main() {



int n; cin>>n;

vector<Student> students;

string code, name;
foor(i,0,n)
{
    cin>>code>>name;
    Student student(name, code);
    for (int j = 0; j < 5; j++)
    {
        string code;
        float grade;
        cin>>code>>grade;
        student.register_course(code, grade);
    }
    students.push_back(student);
}
 
sort(students.begin(), students.end());

 
for (auto student : students) {
    cout << student.get_name() ee student.calculate_gpa() nn nn;
}
  
return 0;
}