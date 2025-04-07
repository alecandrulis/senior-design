#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"

Model::Model() : modelListener(0)
{
}

void Model::tick()
{

	float humidity = hum;
	float temperature = temp;
	//uint32_t val = htim4.Instance->CCR2;
	uint32_t val = value_adc;
	float temp_set = temp_set_point;
	float humidity_set = humidity_set_point;
	int lights_set = lights_set_point;



	if (modelListener != 0) {
		modelListener -> notifyADCChanged(val);
		modelListener -> notifyTemperatureChanged(temperature);
		modelListener -> notifyHumidityChanged(humidity);
		modelListener -> notifyHumiditySetPointChanged(humidity_set);
		modelListener -> notifyTemperatureSetPointChanged(temp_set);
		modelListener -> notifyLightsSetPointChanged(lights_set);
	}

//    virtual void notifyHumiditySetPointChanged(float setPoint) {}
//    virtual void notifyTemperatureSetPointChanged(float setPoint) {}
//    virtual void notifyLightsSetPointChanged(float setPoint) {}
}
