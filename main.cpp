#include <iostream>
#include "TV.h" //TV 객체가 가질 멤버 변수와 멤버 함수를 설계하는 파일(설계도)
using namespace std;

int main()
{
	ATV* MyTV = new ATV; // 객체 생성

	MyTV->On(); // 멤버 함수 사용
	MyTV->SetChannel(10); // 멤버 함수 사용
	MyTV->SetVolume(50); // 멤버 함수 사용

	cout << "현재 채널은 " << MyTV->GetChannel() << endl;
	cout << "현재 볼륨은 " << MyTV->GetVolume() << endl;

	delete MyTV;
	MyTV = nullptr;

	return 0;
}



