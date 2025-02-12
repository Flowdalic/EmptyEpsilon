#include "gui2_panel.h"

GuiPanel::GuiPanel(GuiContainer* owner, string id)
: GuiElement(owner, id)
{
}

void GuiPanel::onDraw(sp::RenderTarget& renderer)
{
    renderer.drawStretchedHV(rect, 25.0f, "gui/widget/PanelBackground.png");
}

bool GuiPanel::onMouseDown(glm::vec2 position)
{
    return true;
}
