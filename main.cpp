#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <windows.h>
using namespace std;

// Вектор - динамический массив
// class Student {
// private:
//   string name;
//   vector<int> grades;

// public:
//   Student(string name) : name(name) {}

//   void addGrade(int grade) {
//     grades.push_back(grade);
//   }

//   void printGrades() const {
//     cout << "Grades for " << name << ": ";
//     for (int grade : grades) {
//       cout << grade << " ";
//     }
//     cout << endl << "\n";
//   }

//   float averageGrade() const {
//     if (grades.empty()) return 0;
//     int sum = 0;
//     for (int g : grades) sum += g;
//     return (float) sum / grades.size();
//   }
// };

// int main() {
//   Student st("Alex");
//   st.addGrade(88);
//   st.addGrade(85);
//   st.addGrade(84);
//   st.printGrades();
//   cout << "Average grade: " << st.averageGrade() << endl;
// }

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 // СЕТ - МНОЖЕСТВО
 // set<int> s;
 // s.insert(1);
 // s.insert(3);
 // s.insert(2);
 // s.insert(5);
 // s.insert(4);
 // s.insert(2); // duplicate

 //  for(int x : s ){
 //   cout<< x << " ";
 //  }

 // МАП - АССОЦИАТИВНЫЙ МАССИВ

 // map<string, int> age;
 // age["Alex"] = 23;
 // age["John"] = 25;

 // for (auto p : age){
 //  cout << p.first << " " << p.second << endl;
 // }
 // map[key] = value;
 // at(key)
 // count(key)
 // find(key)
 // erase(key)

 // vector<string> words = {"cat", "dog", "cat", "bird", "dog"};
 // map<string, int> freq;

 // for (string w : words) {
 //   freq[w]++; // если ключа ещё нет, он создаётся автоматически
 // }

 // for (auto p : freq) {
 //   cout << p.first << " -> " << p.second << endl;
 // }

 map<string, string> phoneBook;
 phoneBook["Alex"] = "33";
 phoneBook["Madiyar"] = "23";
 phoneBook["33"] = "Alex";
 phoneBook["23"] = "Madiyar";

 cout << phoneBook["23"] << endl;  // найдёт по имени

}