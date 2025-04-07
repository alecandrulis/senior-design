#include <gui/humidity_screen_screen/humidity_screenView.hpp>
#include <gui/humidity_screen_screen/humidity_screenPresenter.hpp>

humidity_screenPresenter::humidity_screenPresenter(humidity_screenView& v)
    : view(v)
{

}

void humidity_screenPresenter::activate()
{

}

void humidity_screenPresenter::deactivate()
{

}

void humidity_screenPresenter::notifyHumiditySetPointChanged(float setPoint){
	view.setHumidity(setPoint);
}
