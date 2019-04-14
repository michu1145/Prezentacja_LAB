#include "Frequency.h"


Frequency::Frequency():temp(0)
{
	wjektor.reserve(1000);
	powtorzenia.reserve(1000);
	powtorzenia.push_back(0);
}

void Frequency::savefile(string namefile) 
{
	file.open(namefile);
	if (file.is_open()) { //  file found and opened
		while (getline(file, line))
			wjektor.push_back(stoi(line));

		file.close();
		}
	}

int Frequency::PuzzleSolver()
{
	while (true) {
		for (it1 = wjektor.begin(); it1 != wjektor.end(); ++it1) {
			temp += *it1;
			powtorzenia.push_back(temp);
			for (it2 = powtorzenia.begin(); it2 != powtorzenia.end() - 1; ++it2)
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
	
