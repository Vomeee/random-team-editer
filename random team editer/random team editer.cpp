#include <iostream>
#include <algorithm>
#include <random>
#include <vector>

using namespace std;

int main()
{
    string team_name1;
    string team_name2;
    int num;
    vector<string> names;

    cout << "팀 이름 1:";
    cin >> team_name1;
    cout << "팀 이름 2:";
    cin >> team_name2;
    cout << "사람 수:";
    cin >> num;

    cout << "닉네임 하나씩 입력:";

    for (int i = 0; i < num; i++) {
        string temp;
        cin >> temp;
        names.push_back(temp);
    }
    random_device rd;
    mt19937 gen(rd());

    shuffle(names.begin(), names.end(), gen);

    cout << endl << endl << "============================================================" << endl << endl;

    cout << team_name1 << "팀: " << endl;
    

    for (int i = 0; i < size(names) / 2; i++)
    {
        cout << names[i] << endl;
    }

    cout << endl << endl;

    cout << team_name2 << "팀: " << endl;
    

    for (int i = size(names) / 2; i < size(names); i++)
    {
        cout << names[i] << endl;
    }

    cout << endl << endl;

    cout << "============================================================" << endl << endl;

    // 사용자에게 종료하기 전에 입력을 기다리도록 함
    cout << "프로그램을 종료하려면 엔터를 누르세요..." ;
    cin.ignore(); // 버퍼 비우기
    cin.get(); // 사용자의 입력 기다리기

    return 0;
}
