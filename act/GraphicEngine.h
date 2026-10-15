#pragma once
#include <glc2d.h>
class GraphicEngine
{
public:
	int Init();
	void Destroy();
	int Update();
	int Render();
	int Run();
public:
	void SetColor(unsigned long color);
};

