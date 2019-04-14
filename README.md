# PK4_lab
Zadania PK4 “Iteratory i Algorytmy STL”

Iteratory:
Zadanie 1.
Stwórz kontener typu vector wypełniając go 20 pierwszymi liczbami naturalnymi za pomocą push_back(). Następnie utwórz iterator dla niego i przypisz mu element równy 9, skorzystaj z funkcji find() do wykonania tej operacji. Wyświetl zawartość wektora
Skonwertuj utworzony iterator na iterator odwrócony. Po wykonaniu tego zadania użyj metody base() na iteratorze. Dlaczego wartość iteratora uległa zmianie?

Zadanie 2.
Stwórz kontener deque typu double oraz dwa iteratory mu odpowiadające za wstawienie elementu na początek i na koniec.
Za pomocą odpowiednich iteratorów wstaw jeden element na początek i na koniec struktury. Wyświetl zawartość deque.
Wstaw następny element korzystając z metody back_inserter()
Wykorzystaj metodę copy(), gdzie parametrami są: początek,koniec listy oraz front_inserter().
Dla tego samego kontenera iterator wstawiający ogólny. Ustaw kontener dla następującej pozycji: container.begin()+2,następnie używając tej funkcji wstaw element.

Zadanie 3.
Posiadasz urządzenie, które nadaje częstotliwość z stacji radiowych. Nadaje ono częstotliwość z określoną zależnością Twoim zadaniem jest pierwsze znalezienie PODWÓJNEGO pojawienia się liczby.Częstotliwości jako liczby dodają się do siebie.
 Przykładowo: +1,-1 -> pierwsze znalezienie 0. 
  +3,+3,+4,-2,-4 -> pierwsze znalezienie 10
  //ZALECANE STOSOWANIE RELEASE , zadanie posiada testy jednostkowe! 
Dla utworzonej klasy Frequency napisać ciała następujących metod:
SavetoVector(string namefile) -> Otworzy plik do odczytu, a następnie używając getline() wpisze do wektora zawartość pliku “input.txt”
PuzzleSolver()->Uzupełni funkcje sprawdzającą częstotliwość o dwa fory wykorzystujące iteratory oraz  odpowiednią operację na iteratorach
Find() -> Wyszuka w całym wektorze, czy wynikowa liczba się tam znajdują i przypiszę na jej miejsce 20. W innym przypadku określi  za pomocą metody distance() odległość pomiędzy pierwszym, a ostatnią liczbą w wektorze.
Dane znajdują się w pliku input.txt

Algorytmy:

Zadanie 4.
Sprawdź działanie następujących funkcji:
	replace(beg, end, old_val, new_val);
	replace_if(beg, end, pred, new_val);
	replace_copy(beg, end, dest, old_val, new_val);
	replace_copy_if(beg, end, dest, pred, new_val);
Dla zadeklarowanych w pliku nagłówkowym "algorytmy.h" wektorów v1 (zawierający liczby) 
i v2 (pusty) uruchom poniższą funkcję i sprawdź zawartość obydwu wektorów. 
Uzasadnij działanie funkcji.
remove_copy_if(v1.begin(), v1.end(), back_inserter(v2), [](int i){return i%2;});

Zadanie 5.
Zaimplementuj fragment kodu ze slajdów "Algorytmy zmieniające kolejność elementów" i "Przekazanie funkcji do algorytmu" w taki sposób, aby operował na elementach listy.

Zadanie 6.
Napisz program ładujący liczby z pliku “zad6.txt” i wypisujący liczby parzyste do jednego pliku, liczby nieparzyste do drugiego i liczby posortowane(bez duplikatów) do trzeciego. Na wyjście standardowe należy wypisać sumę liczb z pliku.
W zadaniu użyj iteratorów strumienia we/wy i algorytmów for_each, accumulate.
Nie wolno wykorzystywać operatorów << i >> do zapisu/odczytu.
    

