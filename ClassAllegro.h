#pragma once
#include "Allegro.h"
class ClassAllegro
{

private:

	ClassAllegro(const int width, const int height);
	~ClassAllegro(void);
	

public:
	static void initialize(const int width, const int height);
	static void shutdown(void);

	static const int FPS;
	static ALLEGRO_DISPLAY* display;
	static ALLEGRO_TIMER* timer;
	static ALLEGRO_EVENT_QUEUE* event_queue;

};

