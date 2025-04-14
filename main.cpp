#include <iostream>
#include "TV.h"
using namespace std;

int main()
{
	ATV* MyTV = new ATV;
	MyTV->On();
	MyTV->SetChannel(10);
	MyTV->SetVolume(50);

	cout << "현재 채널은 " << MyTV->GetChannel() << endl;
	cout << "현재 볼륨은 " << MyTV->GetVolume() << endl;

	delete MyTV;
	MyTV = nullptr;

	return 0;
}



