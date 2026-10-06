#include<iostream>
#include<string>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
    float marks;
public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void display(){
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout<< "------------------------" << endl;
    }
};

int main() {
    Student students[100];
    int n;
    cout<<"===== Student Management System =====" << endl;
    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].input();
    }

    cout << "\n\n===== Student Details =====\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    return 0;
}