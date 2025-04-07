#include <gui/light_screen_screen/light_screenView.hpp>

light_screenView::light_screenView()
{

}

void light_screenView::setupScreen()
{
    light_screenViewBase::setupScreen();
}

void light_screenView::tearDownScreen()
{
    light_screenViewBase::tearDownScreen();
}

void light_screenView::setLights(int newVal){
	Unicode::snprintfFloat(lightsValBuffer, LIGHTSVAL_SIZE, "%.0f", newVal);
	lightsVal.invalidate();
}

void light_screenView::increase()
{
	lights_set_point++;
}

void light_screenView::decrease()
{
	lights_set_point--;
}
