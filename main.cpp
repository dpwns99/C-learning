#include <windows.h> // initial korean setting
#include <iostream>

using namespace std;

int main() {
    SetConsoleOutputCP(65001); // initial korean setting

    int age;

    cout << "나이를 입력해 주세요 : ";
    cin >> age;

    cout << "여러분의 나이는 " << age << "살 입니다." << endl;
    return 0;
}
