#pragma once
#include "Model.h"
#include "WorldTransform.h"

class player{
public:
	void Initialize(Model* model, uint32_t textureHandle);
	void Update();
	void Draw();

};