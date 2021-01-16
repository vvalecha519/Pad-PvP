#include "GameBoard.h"

#include "GameEngine/GameEngineMain.h"
#include "Game/GameEntities/OrbEntity.h"


using namespace Game;

GameBoard::GameBoard()
	: orb(nullptr)
{
	orb = new OrbEntity();

	GameEngine::GameEngineMain::GetInstance()->AddEntity(orb);

}


GameBoard::~GameBoard()
{

}


void GameBoard::Update()
{	
	
}