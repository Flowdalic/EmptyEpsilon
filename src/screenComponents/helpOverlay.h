#ifndef HELP_OVERLAY_H
#define HELP_OVERLAY_H

#include "gui/gui2_element.h"

class GuiCanvas;
class GuiPanel;
class GuiScrollText;

class GuiHelpOverlay : public GuiElement
{
private:
    GuiScrollText* text;

    string help_text = "";
public:
    GuiHelpOverlay(GuiContainer* owner, string title = "", string contents = "");
    GuiPanel* frame;

    virtual void setText(string new_text);
    virtual void onDraw(sp::RenderTarget& target);
};

#endif//HELP_OVERLAY_H
