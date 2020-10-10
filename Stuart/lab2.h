

#ifndef __LAB2_H
#define __LAB2_H

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

struct student;

student *create_student_db(int a);

void get_student_db_info(student *students, int a, fstream &f);

void delete_student_db_info(student *students);

void bubblesort_id(student *roster, int n);

void bubblesort_name(student *roster, int n);

void call_func(student *roster, int n, fstream &f);

#endif