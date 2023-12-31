#pragma once

#include <chrono>
#include "Context.h"

#include "Input/InputManager.h"
#include "Physics/Raster.h"
#include "Renderer/TextRenderer.h"
#include "GameLogic/GameLogic.h"
#include "Physics/Physics.h"
#include "Utility/Profiler.h"

class Engine {
public:
    Engine();
    ~Engine();

    void Initialize();
    void Run();
    void Terminate();

private:
    Context* context;
    std::chrono::high_resolution_clock::time_point lastFrameTime;
    std::chrono::high_resolution_clock::time_point lastDebugTime;
    int frameCount;

    void Tick(double deltaTime);
    void ParseEvents();
    void Render();
    void RenderGame();
};