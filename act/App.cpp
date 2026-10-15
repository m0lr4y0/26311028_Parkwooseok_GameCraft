#include "App.h"

void App::Destroy()
{

}


App::~App()
{

}

int App::Init()
{
	//랜더링 엔진 초기화
	//game time 초기화
	m_gameTime.Init();
	//input 초기화
	m_pGameInput = new GameInput;
	if (0 > m_pGameInput->Init())
	{
		Destroy();
		return -1;
	}
	//씬 초기화
	m_pGameScene = new GameScene;
	if (0 > m_pGameScene->Init())
	{
		delete m_pGameScene;
		return -2;

	}
	//time 관련 초기화
	
	
	return 0;
}
int App::Update()
{
	
	//game time 업데이트
	
	//input 업데이트
	//씬 업데이트
	//time 관련 업데이트

	return 0;
}

int App::Render()
{
	return 0;
}

int App::Run()
{
	int hr = 0;
	while (true)
	{
		if (0 > this->Update())
	}
}
