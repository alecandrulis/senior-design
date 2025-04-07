#include <gui/temperature_screen_screen/temperature_screenView.hpp>

temperature_screenView::temperature_screenView()
{

}

void temperature_screenView::setupScreen()
{
    temperature_screenViewBase::setupScreen();
}

void temperature_screenView::tearDownScreen()
{
    temperature_screenViewBase::tearDownScreen();
}


void temperature_screenView::setTemperature(float newVal){
	Unicode::snprintfFloat(tempValBuffer, TEMPVAL_SIZE, "%.1f", newVal);
	tempVal.invalidate();

}

void temperature_screenView::increase()
{
	temp_set_point = temp_set_point + 5;
}

void temperature_screenView::decrease()
{
	temp_set_point = temp_set_point - 5;
}
