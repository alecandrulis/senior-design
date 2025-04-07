#include <gui/light_screen_screen/light_screenView.hpp>
#include <gui/light_screen_screen/light_screenPresenter.hpp>

light_screenPresenter::light_screenPresenter(light_screenView& v)
    : view(v)
{

}

void light_screenPresenter::activate()
{

}

void light_screenPresenter::deactivate()
{

}

void light_screenPresenter::notifyLightsSetPointChanged(int setPoint)
{
	view.setLights(setPoint);
}

