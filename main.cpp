#include <iostream>
#include <cstdlib>
#include "student.h"
using namespace std;
student stu[100000];
int n;
int welcome() {
    cout << "****************学生信息管理系统***************" << endl;
    cout << "*                 1.添加学生                  *" << endl;
    cout << "*                 2.删除学生                  *" << endl;
    cout << "*                 3.查找学生                  *" << endl;
    cout << "*                 4.退出系统                  *" << endl;
    cout << "***********************************************" << endl;
    cout << "请输入选项：（1-4）";
    int num;
    cin >> num;
    return num;
}
void addStu(string stuName, int stuChinese, int stuMath, int stuEnglish, int stuNum) {
    stu[n].setName(stuName);
    stu[n].setChinese(stuChinese);
    stu[n].setMath(stuMath);
    stu[n].setEnglish(stuEnglish);
    stu[n].setNum(stuNum);
    n++;
}
void deleteStu(int stuNum) {
    for (int i = 0; i < n; i++) {
        if (stu[i].putNum() == stuNum) {
            for (int j = i; j < n - 1; j++) {
                stu[j] = stu[j + 1];
            }
        }
    }
    n--;
}
void findStu(string stuName) {
    for (int i = 0; i < n; i++) {
        if (stu[i].putName() == stuName) {
            cout << "学生姓名：" << stu[i].putName() << endl;
            cout << "学生语文成绩：" << stu[i].putChinese() << endl;
            cout << "学生数学成绩：" << stu[i].putMath() << endl;
            cout << "学生英语成绩：" << stu[i].putEnglish() << endl;
            cout << "学生学号：" << stu[i].putNum() << endl;
        }
    }
}
void findStu(int stuNum) {
    for (int i = 0; i < n; i++) {
        if (stu[i].putNum() == stuNum) {
            cout << "学生姓名：" << stu[i].putName() << endl;
            cout << "学生语文成绩：" << stu[i].putChinese() << endl;
            cout << "学生数学成绩：" << stu[i].putMath() << endl;
            cout << "学生英语成绩：" << stu[i].putEnglish() << endl;
            cout << "学生学号：" << stu[i].putNum() << endl;
        }
    }
}
string name;
int chinese, math, english, num;
int main() {
    start:
    int select = welcome();
    switch (select) {
    case 1:
        cout << "请输入学生姓名：";
        cin >> name;
        cout << "请输入学生语文成绩：";
        cin >> chinese;
        cout << "请输入学生数学成绩：";
        cin >> math;
        cout << "请输入学生英语成绩：";
        cin >> english;
        cout << "请输入学生学号：";
        cin >> num;
        addStu(name, chinese, math, english, num);
        break;
    case 2:
        cout << "请输入删除学生的学号：";
        cin >> num;
        deleteStu(num);
        break;
    case 3:
        ok:
        cout << "请输入查找类型：（1.按姓名查找 2.按学号查找）：";
        int yes;
        cin >> yes;
        switch (yes) {
        case 1:
            cout << "请输入姓名：";
            cin >> name;
            findStu(name);
            break;
        case 2:
            cout << "请输入学号：";
            cin >> num;
            findStu(num);
            break;
        default:
            cout << "输入错误！" << endl;
            goto ok;
            break;
        }
        break;
    case 4:
        exit(0);
        break;
    default:
        cout << "输入错误！" << endl;
        break;
    }
    system("pause");
    system("cls");
    goto start;
    return 0;
}