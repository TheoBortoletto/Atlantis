#include <allegro5\allegro5.h>

int main() {

	al_init();		//Inicializa��o do Allegro
	ALLEGRO_DISPLAY* display = al_create_display(1280, 900);		//Cria��o de "tela"
	al_rest(10);
}
