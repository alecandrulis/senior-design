#ifndef HUMIDITY_SCREENPRESENTER_HPP
#define HUMIDITY_SCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class humidity_screenView;

class humidity_screenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    humidity_screenPresenter(humidity_screenView& v);

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

    virtual ~humidity_screenPresenter() {}

    virtual void notifyHumiditySetPointChanged(float setPoint);


private:
    humidity_screenPresenter();

    humidity_screenView& view;
};

#endif // HUMIDITY_SCREENPRESENTER_HPP
