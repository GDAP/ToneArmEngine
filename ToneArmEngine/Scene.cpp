#include "Scene.h"
#include "Camera.h"

using namespace vgs;

Scene::Scene()
	: m_currentCamera(nullptr)
{
}

bool Scene::Init()
{
	return true;
}

void Scene::Update(float dt)
{
	Node::Update(dt);
}

void Scene::SetCurrentCamera( Camera* camera ) {
	m_currentCamera = camera;
	AddChild(camera); 
}