#include "pch.h"
#include "Knight.h"


Knight::Knight(int color) : Piece(color)
{
	possibleMovements = std::vector<std::vector<Translation*>>  {
			{ new Translation(1, 2) },
			{ new Translation(2, 1) },
			{ new Translation(2, -1) },
			{ new Translation(1, -2) },
			{ new Translation(-1, -2) },
			{ new Translation(-2, -1) },
			{ new Translation(-2, 1) },
			{ new Translation(-1, 2) }
	};
}


Knight::~Knight()
{

}



std::vector<std::vector<Translation*>> Knight::getPossibleMovements()
{
	return possibleMovements;
}

Platform::String^ Knight::getName()
{
	return "Knight";
}

std::string Knight::getStringName()
{
	return "Knight";
}