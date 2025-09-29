#include <iostream>
using namespace std;

struct Student {
    string name;
    int grade;
    Student* next;
};

void display(Student* head) {
    cout << "Student List:" << endl;
    while (head) {
        cout << head->name << ": " << head->grade << endl;
        head = head->next;
    }
}

int main() {
    Student* head = nullptr;
    Student* tail = nullptr;
    string name;
    int grade, n;
    cout << "Enter number of students: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Enter name and grade: ";
        cin >> name >> grade;
        Student* temp = new Student{name, grade, nullptr};
        if (!head) { head = temp; tail = temp; }
        else { tail->next = temp; tail = temp; }
    }
    display(head);
    return 0;
}