#include "whitepawn.h"


/*
 * Generates all possible moves for the piece
 */
QVector<Move > WhitePawn::getPossibleMoves(int x, int y)
{
    qDebug() << "White Pawn getPossibleMoves!!!!";
    QVector<Move> a;
    a.push_back(Move(x, y+1, false, false));
    a.push_back(Move(x, y+2, true, false));
    a.push_back(Move(x+1, y+1, false, true));
    a.push_back(Move(x-1, y+1, false, true));
    return a;
}

WhitePawn::WhitePawn(){}
WhitePawn::~WhitePawn(){}
