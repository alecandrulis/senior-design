#ifndef HUMIDITY_SCREENVIEW_HPP
#define HUMIDITY_SCREENVIEW_HPP

#include <gui_generated/humidity_screen_screen/humidity_screenViewBase.hpp>
#include <gui/humidity_screen_screen/humidity_screenPresenter.hpp>

class humidity_screenView : public humidity_screenViewBase
{
public:
    humidity_screenView();
    virtual ~humidity_screenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void setHumidity(float newVal);
    virtual void increase();
    virtual void decrease();
protected:
};

#endif // HUMIDITY_SCREENVIEW_HPP
