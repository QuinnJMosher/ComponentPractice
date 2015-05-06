#include "AIE.h"
#include <iostream>

#include "GameObject.h"
#include "GameObjConstructor.h"
#include "Component.h"

//constant vars
static int SCREEN_MAX_X = 900, SCREEN_MAX_Y = 600;

int main( int argc, char* argv[] )
{	
	Initialise(SCREEN_MAX_X, SCREEN_MAX_Y, false, "My Awesome Game");
    
    SetBackgroundColour(SColour(0, 0, 0, 255));


	//setup tick limiter
	float tickTime = 0;
	const float tickInterval = 1.0f / 60;

    //Game Loop
    do
	{
		tickTime += GetDeltaTime();
		if (tickTime >= tickInterval) {
			tickTime -= tickInterval;

			//update
			//read/act on input
		}
		//draw
        ClearScreen();

    } while(!FrameworkUpdate());

    Shutdown();

    return 0;
}
