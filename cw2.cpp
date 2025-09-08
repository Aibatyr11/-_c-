#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <sstream>
using namespace std;

// 1. Подсчет уникальных слов
void countUniqueWords(const string& text) {
    set<string> uniqueWords;
    string word;
    stringstream ss(text);

    while (ss >> word) {
        uniqueWords.insert(word);
    }

    cout << "Количество уникальных слов: " << uniqueWords.size() << endl;
    cout << "Слова: ";
    for (const auto& w : uniqueWords) {
        cout << w << " ";
    }
    cout << endl;
}

// 2. Класс Library
class Library {
private:
    map<string, string> books;
public:
    void addBook(const string& title, const string& author) {
        books[title] = author;
    }

    void findBook(const string& title) {
        auto it = books.find(title);
        if (it != books.end()) {
            cout << "Книга найдена: " << it->first 
                 << " — автор: " << it->second << endl;
        } else {
            cout << "Книга \"" << title << "\" не найдена." << endl;
        }
    }

    void printAll() {
        cout << "\nСписок книг в библиотеке:" << endl;
        for (auto& [title, author] : books) {
            cout << "Название: " << title << " | Автор: " << author << endl;
        }
    }
};

// 3. Подсчет студентов по курсам
struct Student {
    string name;
    int course;
};

void countStudentsByCourse(const vector<Student>& students) {
    map<int, vector<Student>> courseMap;

    for (auto& st : students) {
        courseMap[st.course].push_back(st);
    }

    cout << "\nКоличество студентовв на каждом курсе:\n";
    for (auto& [course, studs] : courseMap) {
        cout << "Курс " << course << ": " << studs.size() << " студентов" << endl;
        for (auto& s : studs) {
            cout << " - " << s.name << endl;
        }
    }
}

int main() {
    // 1.
    cout << "Задача 1" << endl;
    string text = "hello world hello cpp world set map unique";
    countUniqueWords(text);

    // 2. 
    cout << "Задача 2" << endl;
    Library lib;
    lib.addBook("Война и мир", "Лев Толстой");
    lib.addBook("Преступление и наказание", "Фёдор Достоевский");

    lib.printAll();
    lib.findBook("Преступление и наказание");
    lib.findBook("Гарри Поттер");

    // 3. 
    cout << "Задача 3" << endl;
    vector<Student> students = {
        {"Иван", 1},
        {"Мария", 2},
        {"Петр", 1},
        {"Анна", 3},
        {"Олег", 2}
    };

    countStudentsByCourse(students);

    return 0;
}
