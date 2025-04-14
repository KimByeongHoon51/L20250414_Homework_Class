#pragma once

class ATV
{
public:
	bool PowerOn;
	int Channel;
	int Volume;

	void On();
	void SetChannel(int Channel);
	void SetVolume(int Volume);
	int GetChannel();
	int GetVolume();

};

