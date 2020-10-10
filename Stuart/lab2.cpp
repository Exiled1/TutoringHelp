#include "lab2.h"

using namespace std;

struct student {
    string first_name;
    string last_name;
    string ID_num;
    string major;
};

student *create_student_db(int a) {
    student *students = new student[a];
    return students;
}


void get_student_db_info(student *students, int a, fstream &f) {

    for (int i = 0; i < a; i++) {
        f >> students[i].ID_num;
        f >> students[i].first_name;
        f >> students[i].last_name;
        f >> students[i].major;
    }
}


void delete_student_db_info(student *students) {
    delete[] students;
}

void bubbleSort_id(student *roster, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++)
            if (roster[j].ID_num[0] > roster[j + 1].ID_num[0]) {
                swap(roster[j], roster[j + 1]);
            }
    }
}

void bubbleSort_name(student *roster, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++)
            if (roster[j].last_name[0] > roster[j + 1].last_name[0]) {
                swap(roster[j], roster[j + 1]);
            }
    }
}

void call_func(student *roster, int n, fstream &f) {
    ofstream output;
    output.open("output.txt");
    int sort_choice;
    do {
        cout << "would you like to sort by name(1) or ID number(2)?" << endl;
        cin >> sort_choice;
        if (sort_choice == !1 || !2) {
            cout << "please enter a valid choice" << endl;
        }
    } while (sort_choice == !1 || !2);
    get_student_db_info(roster, n, f);
    if (sort_choice == 1) {
        bubbleSort_name(roster, n);
        output << "ALPHABETICAL" << "\n" << endl;
        for (int i = 0; i < n; i++) {
            output << " " << roster[i].last_name << " " << roster[i].first_name << endl;
        }
    } else {
        bubbleSort_id(roster, n);
        output << "NUMERICAL" << "\n" << endl;
        for (int i = 0; i < n; i++) {
            output << " " << roster[i].ID_num << " " << roster[i].first_name << endl;
        }
    }
    output.close();
}

