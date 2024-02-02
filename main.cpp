#include <iostream>
#include <cstdlib>
#include "student.h"
using namespace std;
student stu[100000];
int n;
int welcome() {
    cout << "****************ѧ����Ϣ����ϵͳ***************" << endl;
    cout << "*                 1.���ѧ��                  *" << endl;
    cout << "*                 2.ɾ��ѧ��                  *" << endl;
    cout << "*                 3.����ѧ��                  *" << endl;
    cout << "*                 4.�˳�ϵͳ                  *" << endl;
    cout << "***********************************************" << endl;
    cout << "������ѡ���1-4��";
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
            cout << "ѧ��������" << stu[i].putName() << endl;
            cout << "ѧ�����ĳɼ���" << stu[i].putChinese() << endl;
            cout << "ѧ����ѧ�ɼ���" << stu[i].putMath() << endl;
            cout << "ѧ��Ӣ��ɼ���" << stu[i].putEnglish() << endl;
            cout << "ѧ��ѧ�ţ�" << stu[i].putNum() << endl;
        }
    }
}
void findStu(int stuNum) {
    for (int i = 0; i < n; i++) {
        if (stu[i].putNum() == stuNum) {
            cout << "ѧ��������" << stu[i].putName() << endl;
            cout << "ѧ�����ĳɼ���" << stu[i].putChinese() << endl;
            cout << "ѧ����ѧ�ɼ���" << stu[i].putMath() << endl;
            cout << "ѧ��Ӣ��ɼ���" << stu[i].putEnglish() << endl;
            cout << "ѧ��ѧ�ţ�" << stu[i].putNum() << endl;
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
        cout << "������ѧ��������";
        cin >> name;
        cout << "������ѧ�����ĳɼ���";
        cin >> chinese;
        cout << "������ѧ����ѧ�ɼ���";
        cin >> math;
        cout << "������ѧ��Ӣ��ɼ���";
        cin >> english;
        cout << "������ѧ��ѧ�ţ�";
        cin >> num;
        addStu(name, chinese, math, english, num);
        break;
    case 2:
        cout << "������ɾ��ѧ����ѧ�ţ�";
        cin >> num;
        deleteStu(num);
        break;
    case 3:
        ok:
        cout << "������������ͣ���1.���������� 2.��ѧ�Ų��ң���";
        int yes;
        cin >> yes;
        switch (yes) {
        case 1:
            cout << "������������";
            cin >> name;
            findStu(name);
            break;
        case 2:
            cout << "������ѧ�ţ�";
            cin >> num;
            findStu(num);
            break;
        default:
            cout << "�������" << endl;
            goto ok;
            break;
        }
        break;
    case 4:
        exit(0);
        break;
    default:
        cout << "�������" << endl;
        break;
    }
    system("pause");
    system("cls");
    goto start;
    return 0;
}