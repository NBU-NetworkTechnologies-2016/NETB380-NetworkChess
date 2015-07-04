#include "knight.h"

Knight::Knight()
{
}

Knight::~Knight()
{
}

QVector<Move > Knight::getPossibleMoves(int x, int y)
{
    qDebug() << "King getPossibleMoves!!!!";
    QVector<Move> a;
    a.push_back(Move(x+1, y+2, false, false, true));
    a.push_back(Move(x-1, y+2, false, false, true));
    a.push_back(Move(x+1, y-2, false, false, true));
    a.push_back(Move(x-1, y-2, false, false, true));
    a.push_back(Move(x+2, y+1, false, false, true));
    a.push_back(Move(x+2, y-1, false, false, true));
    a.push_back(Move(x-2, y+1, false, false, true));
    a.push_back(Move(x-2, y-1, false, false, true));
    return a;
}

