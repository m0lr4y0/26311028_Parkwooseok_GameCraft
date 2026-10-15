#pragma once
#include "GameTime.h"
#include "GameInput.h"
#include "GraphicEngine.h"
class GameScene;

class App

{
public:
	App();
	virtual ~App();
	int Init();
	int Update();
	int Render();
    void Destroy();
	int Run();
protected:
	GameTime m_gameTime     {};
	GraphicEngine* m_pGraphicEngine {};
	GameInput* m_pGameInput {};
	GameScene* m_pGameScene {};
};

extern App* g_pApp;
