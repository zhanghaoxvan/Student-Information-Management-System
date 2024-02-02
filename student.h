#pragma once
#include <string>
#include <iostream>
using namespace std;
class student {
private:
    string name;
    int chinese, math, english;
    int num;
public:
    student(string, int, int, int);
    student();
    ~student();

    void setName(string);
    string putName();
    void setChinese(int);
    int putChinese();
    void setMath(int);
    int putMath();
    void setEnglish(int);
    int putEnglish();
    void setNum(int);
    int putNum();

    void operator=(student);
};