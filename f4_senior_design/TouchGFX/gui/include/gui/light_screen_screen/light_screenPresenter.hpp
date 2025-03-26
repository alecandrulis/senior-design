#ifndef LIGHT_SCREENPRESENTER_HPP
#define LIGHT_SCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class light_screenView;

class light_screenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    light_screenPresenter(light_screenView& v);

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

    virtual ~light_screenPresenter() {}

private:
    light_screenPresenter();

    light_screenView& view;
};

#endif // LIGHT_SCREENPRESENTER_HPP
