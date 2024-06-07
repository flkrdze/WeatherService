#pragma once
#include "Service.h"
#include "Weather.h"
class JsonService :public Cervice
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};

};

