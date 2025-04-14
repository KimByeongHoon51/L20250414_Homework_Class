#include "TV.h"

void ATV::On()
{
    PowerOn = true;
}

void ATV::SetChannel(int NewChannel)
{
    Channel = NewChannel;
}

void ATV::SetVolume(int NewVolume)
{
    Volume = NewVolume;
}

int ATV::GetChannel()
{
    return Channel;
}

int ATV::GetVolume()
{
    return Volume;
}