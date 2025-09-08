#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <windows.h>
using namespace std;

class Student {
private:
    string name;                   
    set<string> subjects;           
    map<string, int> grades;       

public:
    Student(string n) : name(n) {}

    void addSubject(string subject, int grade) {
        subjects.insert(subject);   
        grades[subject] = grade;    
    }

    void printInfo() const {
        cout << "Студент: " << name << endl;
        cout << "Предметы и оценки:" << endl;
        for (auto &sub : subjects) {
            cout << "  " << sub << " -> " << grades.at(sub) << endl;
        }
        cout << endl;
    }

    float averageGrade() const {
        if (grades.empty()) return 0;
        int sum = 0;
        for (auto &p : grades) sum += p.second;
        return (float)sum / grades.size();
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    vector<Student> group;

    
    Student s1("Alex");
    s1.addSubject("Math", 90);
    s1.addSubject("Physics", 85);
    s1.addSubject("English", 78);

    Student s2("John");
    s2.addSubject("Math", 75);
    s2.addSubject("Biology", 88);
    s2.addSubject("English", 92);

    
    group.push_back(s1);
    group.push_back(s2);

    for (auto &st : group) {
        st.printInfo();
        cout << "Средний балл: " << st.averageGrade() << endl << endl;
    }

    return 0;
}
