#include <gui/humidity_screen_screen/humidity_screenView.hpp>

humidity_screenView::humidity_screenView()
{

}

void humidity_screenView::setupScreen()
{
    humidity_screenViewBase::setupScreen();
}

void humidity_screenView::tearDownScreen()
{
    humidity_screenViewBase::tearDownScreen();
}

void humidity_screenView::setHumidity(float newVal){
	Unicode::snprintfFloat(humValBuffer, HUMVAL_SIZE, "%.1f", newVal);
	humVal.invalidate();
}

void humidity_screenView::increase()
{
	humidity_set_point = humidity_set_point + 5;
}

void humidity_screenView::decrease()
{
	humidity_set_point = humidity_set_point - 5;
}
