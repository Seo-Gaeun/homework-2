#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "work02.h"
using namespace std;

//���� �Լ�
int main() {
    srand((unsigned)time(0));



    string name1, name2;
    cout << "***** ���� ������ �����մϴ�. *****" << endl;
    
    cout << "ù��° ���� �̸�>>" << endl;
    getline(cin, name1);
    cin.ignore();

    cout << "�ι�° ���� �̸�>>" << endl;
    getline(cin, name2);
    cin.ignore();
    
    




    return 0; //���� �Լ� ����
}