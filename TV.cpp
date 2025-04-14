#include "TV.h"

void ATV::On()
{
    PowerOn = true;
}

void ATV::Off()
{
    PowerOn = false;
}

void ATV::SetChannel(int NewChannel)
{
    Channel = NewChannel;
}

int ATV::GetChannel()
{
    return Channel;
}

void ATV::SetVolume(int NewVolume)
{
    Volume = NewVolume;
}

int ATV::GetVolume()
{
    return Volume;
}