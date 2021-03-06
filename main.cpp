#include "Game.hpp"

Game *game = nullptr;

int main(int argc, const char * argv[]) {

	game = new Game();
	while(game->running()) {
		game->handle_events();
		game->update();
		game->render();
	}

	game->clean();
	return 0;
}
