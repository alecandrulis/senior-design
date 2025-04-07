#ifndef TEMPERATURE_SCREENPRESENTER_HPP
#define TEMPERATURE_SCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class temperature_screenView;

class temperature_screenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    temperature_screenPresenter(temperature_screenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~temperature_screenPresenter() {}

    virtual void notifyTemperatureSetPointChanged(float setPoint);

private:
    temperature_screenPresenter();

    temperature_screenView& view;
};

#endif // TEMPERATURE_SCREENPRESENTER_HPP
