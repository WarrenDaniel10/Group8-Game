#pragma once
#include "Allegro.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <iostream>

class ClassAllegro
{
public:
	ClassAllegro(int, int);
	~ClassAllegro();
	
private: 
	int ScreenWidth = 800;
	int ScreenHeight = 600;

};

