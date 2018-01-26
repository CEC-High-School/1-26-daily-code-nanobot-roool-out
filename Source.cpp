#include <allegro5\allegro.h>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	ALLEGRO_DISPLAY*gamewindow = NULL;
	al_init();
	gamewindow = al_create_display(700, 700);
	//al_set_window_position
	while (1) {
		al_clear_to_color(al_map_rgb(rand(), rand(), rand()));
		al_flip_display();
		system("pause");
	}
	al_destroy_display(gamewindow);
}