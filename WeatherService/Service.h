#pragma once
#include "Weather.h"
class Cervice
{
public:
	virtual Weather getWeather(std::string s) = 0;
};