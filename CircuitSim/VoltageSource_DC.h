#pragma once
#include "Component.h"
#include "Application.h"

class VoltageSource_DC :
    public Component
{
public:
    VoltageSource_DC(ImVec2 gridPositon);

    void HandleInput(const ImVec2& offset, const float& gridSize, const float& zoom, const int& opMode);
    void Draw(ImDrawList* drawList, const ImVec2& offset, const float& gridSize, const float& zoom) override;
private:
    void DrawEditMenu();

    float m_Voltage = 5.0f;
};

