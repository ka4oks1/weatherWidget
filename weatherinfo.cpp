#include "weatherinfo.h"
using namespace weatherData;

weatherInfo::weatherInfo()
{
    this->temperatureCelsium = 0;
}

ss weatherInfo::getTemperatureCelsium(){

    return this->temperatureKalvin;

}

void weatherInfo::setTemperatureCelsium(ss temperature){

    if (temperature > 274 && temperature < 60 ){


    }
    else{

        custExep exep(custExep::Type::TEMPERATURE);

        throw exep;

    }

}
