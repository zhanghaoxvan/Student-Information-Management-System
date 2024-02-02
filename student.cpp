#include "student.h"
student::student(string name, int chinese, int math, int english) {
    this->name = name;
    this->chinese = chinese;
    this->math = math;
    this->english = english;
}
student::student() {
    this->name = "";
    this->chinese = 0;
    this->math = 0;
    this->english = 0;
}
student::~student() {
    this->name = "";
    this->chinese = 0;
    this->math = 0;
    this->english = 0;
}

void student::setName(string name) {
    this->name = name;
}
string student::putName() {
    return this->name;
}
void student::setChinese(int chinese) {
    this->chinese = chinese;
}
int student::putChinese() {
    return this->chinese;
}
void student::setMath(int math) {
    this->math = math;
}
int student::putMath() {
    return this->math;
}
void student::setEnglish(int english) {
    this->english = english;
}
int student::putEnglish() {
    return this->english;
}
void student::setNum(int num) {
    this->num = num;
}
int student::putNum() {
    return this->num;
}

void student::operator=(student right) {
    this->name = right.name;
    this->chinese = right.chinese;
    this->math = right.math;
    this->english = right.english;
}