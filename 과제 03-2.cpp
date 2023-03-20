// 과제 03-2.cpp
#include<iostream>
using namespace std;


int main()
{
	int answer;

	cout << "지금 당장 여행을 간다면 어디로 가시겠어요? 아래 항목중 선택해 숫자(정수)를 입력하고 엔터를 치세요\n1. 산\n2. 바다\n3. 설산\n4. 집 앞\n5. 선택지에 없다." << endl;
	cin >> answer;

	if (answer == 1)
		cout << "당신은 1번을 선택하였습니다.\n당신의 MBTI는 ENTP입니다." << endl;
	else if (answer == 2)
		cout << "당신은 2번을 선택하였습니다.\n당신의 MBTI는 ESFJ입니다." << endl;
	else if (answer == 3)
		cout << "당신은 3번을 선택하였습니다.\n당신의 MBTI는 ENFJ입니다." << endl;
	else if (answer == 4)
		cout << "당신은 4번을 선택하였습니다.\n당신의 MBTI는 INFJ입니다." << endl;
	else if (answer == 5)
		cout << "당신은 5번을 선택하였습니다.\n당신의 MBTI는 INTP입니다." << endl;
		
	
	return 0;
}