#ifndef LIGHT_SCREENVIEW_HPP
#define LIGHT_SCREENVIEW_HPP

#include <gui_generated/light_screen_screen/light_screenViewBase.hpp>
#include <gui/light_screen_screen/light_screenPresenter.hpp>

class light_screenView : public light_screenViewBase
{
public:
    light_screenView();
    virtual ~light_screenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LIGHT_SCREENVIEW_HPP
