#include "Frequency.h"


Frequency::Frequency() :temp(0)
{
	givenvalue.reserve(1000);
	repeated.reserve(1000);
	repeated.push_back(0);
}

bool Frequency::SavetoVector(string namefile)
{
	file.open(namefile);
	if (file.is_open()) { //  file found and opened

		file.close();
		return true;
	}
	return false;
}


int Frequency::PuzzleSolver()
{
	while (true) {
		for (it1 = givenvalue.begin(); it1 != givenvalue.end(); ++it1) {
			temp += *it1;
			repeated.push_back(temp);
			

		}

	}

}

int Frequency::getTemp() const
{
	return temp;
}

bool Frequency::find()
{
	return true;
}

