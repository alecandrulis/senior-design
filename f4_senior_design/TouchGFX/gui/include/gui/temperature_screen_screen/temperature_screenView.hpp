#ifndef TEMPERATURE_SCREENVIEW_HPP
#define TEMPERATURE_SCREENVIEW_HPP

#include <gui_generated/temperature_screen_screen/temperature_screenViewBase.hpp>
#include <gui/temperature_screen_screen/temperature_screenPresenter.hpp>

class temperature_screenView : public temperature_screenViewBase
{
public:
    temperature_screenView();
    virtual ~temperature_screenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TEMPERATURE_SCREENVIEW_HPP
