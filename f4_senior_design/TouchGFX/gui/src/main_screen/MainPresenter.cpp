#include <gui/main_screen/MainView.hpp>
#include <gui/main_screen/MainPresenter.hpp>

MainPresenter::MainPresenter(MainView& v)
    : view(v)
{
}

void MainPresenter::activate()
{
}

void MainPresenter::deactivate()
{
}


void MainPresenter::notifyADCChanged(uint32_t newVal){
	view.setVal(newVal);
}

void MainPresenter::notifyTemperatureChanged(float newTemp){
	view.setTemperature(newTemp);

}

void MainPresenter::notifyHumidityChanged(float newHumidity){
	view.setHumidity(newHumidity);
}
