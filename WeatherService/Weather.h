#pragma once
#include <iostream>
class Weather
{
private:
    std::string city;
    double lon;
    double lat;
    double temperature;
    std::string weather;
    double windSpeed;
    int clouds;
public:
    Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds);
};