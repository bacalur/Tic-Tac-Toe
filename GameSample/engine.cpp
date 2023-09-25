#include "engine.h"

engine::engine() {

}

void engine::run()
{
	bool xMove = true;
	coordinate move;
	while (!gameOver()) {
		if (xMove) {
			move = xPlayer.Move_(board_);
		}
		else {
			move = oPlayer.Move_(board_);
		}
		xMove = !xMove;
		board.DoMove(move);
	}
}

bool engine::gameOver() const
{
	return false;
}