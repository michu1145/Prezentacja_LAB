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
		while (getline(file, line))
			givenvalue.push_back(stoi(line));

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
			for (it2 = repeated.begin(); it2 != repeated.end() - 1; ++it2)
			{
				if ((*it2 == temp) || (*it2 == *(it2 + 1)))
					return temp;


			}

		}

	}

}

int Frequency::getTemp() const
{
	return temp;
}

bool Frequency::find()
{
	for (auto it = givenvalue.begin(); it != givenvalue.end(); ++it) {
		if (*it == getTemp()) {
			*it = 20;
			return false;
		}
		else {
			distance(givenvalue.begin(), givenvalue.end());
			return true;
		}
	}
}

