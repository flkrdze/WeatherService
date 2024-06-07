#pragma once
#include "Service.h"
#include "Weather.h"
#include "json-develop/include/nlohmann/json.hpp"
class JsonService :public Cervice
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};

};

