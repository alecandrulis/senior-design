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

	if (modelListener != 0) {
		modelListener -> notifyADCChanged(val);
		modelListener -> notifyTemperatureChanged(temperature);
		modelListener -> notifyHumidityChanged(humidity);


	}


}
