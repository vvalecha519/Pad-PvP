#include "PlayerMovementComponent.h"

#include "GameEngine/GameEngineMain.h"
#include "GameEngine/EntitySystem/Components/SoundComponent.h"

#include "GameEngine/Util/TextureManager.h"
#include "GameEngine/Util/AnimationManager.h"

#include <SFML/Window/Keyboard.hpp>

using namespace Game;

PlayerControlComponent::PlayerControlComponent()
	: m_animComponent(nullptr)
	, m_playerSoundComponent(nullptr)
{

}


PlayerControlComponent::~PlayerControlComponent()
{

}


void PlayerControlComponent::Update()
{
	Component::Update();

	if (GameEngine::GameEngineMain::GetInstance()->IsGameOver())
	{
		return;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		wantedVel.x -= playerVel * dt;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		wantedVel.x += playerVel * dt;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		wantedVel.y -= playerVel * dt;
		if (m_playerSoundComponent)
		{
			m_playerSoundComponent->RequestSound(true);
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		wantedVel.y += playerVel * dt;
		if (m_playerSoundComponent)
		{
			m_playerSoundComponent->RequestSound(false);
		}
	}

}