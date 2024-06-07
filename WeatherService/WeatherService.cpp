#include "Service.h"
#include <iostream>

int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");

}
