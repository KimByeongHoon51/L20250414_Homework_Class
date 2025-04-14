#include "Volume.h"

void AVolume::SetVolume(int Vol)
{
	if (Vol >= 0 && Vol <= 100)
	{
		Volume = Vol;
	}
}
int AVolume::GetVolume()
{
	return Volume;
}