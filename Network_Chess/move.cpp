#include "move.h"

/*
 * Object which holds all the checks which must be performed on a move and it's new coordinates
 */
Move::Move(int x, int y, bool must_be_first, bool must_contain_enemy, bool can_fly)
{
    this->x = x;
    this->y = y;
    this->must_be_first = must_be_first;
    this->must_contain_enemy = must_contain_enemy;
    this->can_fly = can_fly;
}

Move::Move(){}
