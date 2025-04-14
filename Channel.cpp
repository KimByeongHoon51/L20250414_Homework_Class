#include "Channel.h"

void AChannel::SetChannel(int Chn)
{
	if (Chn >= 1 && Chn <= 999)
	{
		Channel = Chn;
	}
}
int AChannel::GetChannel()
{
	return Channel;
}