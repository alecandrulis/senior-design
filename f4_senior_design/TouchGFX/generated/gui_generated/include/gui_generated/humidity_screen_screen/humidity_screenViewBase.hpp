/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef HUMIDITY_SCREENVIEWBASE_HPP
#define HUMIDITY_SCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/humidity_screen_screen/humidity_screenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>

class humidity_screenViewBase : public touchgfx::View<humidity_screenPresenter>
{
public:
    humidity_screenViewBase();
    virtual ~humidity_screenViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void increase()
    {
        // Override and implement this function in humidity_screen
    }
    virtual void decrease()
    {
        // Override and implement this function in humidity_screen
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::TextArea text;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton1;
    touchgfx::TextAreaWithOneWildcard humVal;
    touchgfx::ButtonWithIcon buttonWithIcon1;
    touchgfx::ButtonWithIcon buttonWithIcon1_1;

    /*
     * Wildcard Buffers
     */
    static const uint16_t HUMVAL_SIZE = 10;
    touchgfx::Unicode::UnicodeChar humValBuffer[HUMVAL_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<humidity_screenViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;
    touchgfx::Callback<humidity_screenViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // HUMIDITY_SCREENVIEWBASE_HPP
