#include "GameBoard.h"

#include "GameEngine/GameEngineMain.h"
#include "Game/GameEntities/OrbEntity.h"
#include "Game/GameEntities/BoardEntity.h"

using namespace Game;

GameBoard::GameBoard()
	:board(nullptr)
{
	board = new BoardEntity();

	GameEngine::GameEngineMain::GetInstance()->AddEntity(board);
}


GameBoard::~GameBoard()
{

}


void GameBoard::Update()
{	
	
}