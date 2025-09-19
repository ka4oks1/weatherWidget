#ifndef WEATHERINFO_H
#define WEATHERINFO_H

#include <custexep.h>

namespace weatherData{

typedef signed short ss;

class weatherInfo
{

    signed short temperatureCelsium;
    signed short temperatureFarenheit;
    signed short temperatureKalvin;

public:
    weatherInfo();


    ss getTemperatureCelsium();
    void setTemperatureCelsium(ss temperature);
};

}
#endif // WEATHERINFO_H
