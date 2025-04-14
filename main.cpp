#include <iostream>
#include "TV.h" //TV 객체가 가질 멤버 변수와 멤버 함수를 설계하는 파일(설계도)
// .h와 .cpp의 차이
// .h는 어떤 기능이 존재함을 선언(ex.계약서)
// .h는 다른 파일에서 함수/클래스의 존재를 알 수 있음.
// .cpp는 그 기능을 어덯게 구현하는지 정의(ex.실제 계약 절차)
// .h는 선언만 담고, .cpp는 정의를 담는다.

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



