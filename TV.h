#pragma once

class ATV
{
public:
	bool PowerOn;
	int Channel;
	int Volume;

	void On();
	void Off();
	void SetChannel(int NewChannel);
	void SetVolume(int NewVolume);
	int GetChannel();
	int GetVolume();

};

