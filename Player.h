#ifndef __Player__
#define __Player__

#include <string>

#include "SDLGameObject.h"

class Player : public SDLGameObject
{
public:

	Player(const LoaderParams* pParams);

	void draw();
	void handleInput();
	void clean();
	void update();
};

#endif // __Player__
