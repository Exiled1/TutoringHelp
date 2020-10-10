#include "lab2.h"

using namespace std;

int main() {
    fstream f;
    f.open("inputs.txt");
    int num_students;
    f >> num_students;
    student *roster = create_student_db(num_students);
    get_student_db_info(roster, num_students, f);
    call_func(roster, num_students, f);
    delete_student_db_info(roster);
    f.close();
    return 0;
}
