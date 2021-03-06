// Distributed under the MIT License (MIT) (see accompanying LICENSE file)

#pragma once

#include <imgui.h>


// Widget drawing ImGui demo.
class FImGuiDemo
{
public:

	void DrawControls();

private:

	ImVec4 ClearColor = ImColor{ 114, 144, 154 };

	int32 ShowDemoWindowMask = 0;
	int32 ShowAnotherWindowMask = 0;
};
