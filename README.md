# *"Sztuczne życie"*

### Opis

------

Zaproponować ciekawy scenariusz "gry w życie" w następującym rozumieniu: występują 2 rodzaje osobników: mięsożercy i roślinożercy. Każdy osobnik ma cechy takie jak zasięg wzroku, szybkość, itd. Cechy te dziedziczone są przez dzieci osobnika (po krzyżowaniu i mutacji). Każdy osobnik ma hierarchię potrzeb (jeść/spać/...). Zdefiniować ograniczenia, np. jak osobnik szybki to musi więcej jeść, jak widzi daleko to ma wąskie pole widzenia. Wynik symulacji proszę przedstawić w postaci graficznej (2D) (QT, SDL, OpenGL, inne). Powinno być możliwe śledzenie rozwoju obu populacji, jak również podglądanie cech wybranego osobnika.

------

### Prowadzący *info*

- **R. B.** ([strona](http://staff.elka.pw.edu.pl/~rbiedrzy/ZPR/index.html))
- rbiedrzy@elka.pw.edu.pl
- Konsultacje: czwartek 14:30 - 16:00 / email | pok. 24



###  Wymagania ogólne

- przenośne, koniecznie **Ubuntu 18.04**
- kompilacja + linkowanie -> *make* lub *Scons.*
- [styl kodowania](http://staff.elka.pw.edu.pl/~rbiedrzy/ZPR/StylKodowania.html)
- [porady programistyczne](http://staff.elka.pw.edu.pl/~rbiedrzy/ZPR/porady.html)
- Zewnętrzna biblioteka -> instalowanie w katalogu projektu
- Obsługa błędów -> wyjątki
- Testy klas i modułów
  - testy automatyczne,
  - testy modułowe z boost,
  - scenariusze testowe, itd.
- Nagłówek pliku -> autor kodu
- Nazewnictwo plików końcowych:
  - *Fijałkowski_Lech.zip*
  - *dokumentacja końcowa.pdf*
  - *dokumentacja wstępna.pdf*
  - katalog: *Szkielet aplikacji'*
  - katalog: *rozwiązanie zadania*
  - *temat projektu.txt*





## 1. Dokumentacja wstępna

#### Wymagania ze strony przedmiotu

- Należy opisać docelową funkcjonalność oprogramowania.
- Zakres realizowanych funkcji warto opisać biorąc pod uwagę faktyczne możliwości ich realizacji.
- Stopień realizacji jest brany pod uwagę przy ocenie końcowej wersji aplikacji.

#### Wymagania prowadzącego

- Wysyłka na maila
- Nawa pliku: *Fijałkowski_Lech.pdf*
- Literówki niedopuszczalne
- Podział prac w zespole: nieistotny
- Dokumentacja wstępna powinna zawierać:
  - rozwinięty opis tematu zadania (pokazujący że wiemy co mamy zrobić)
  - listę funkcjonalności
  - listę zadań (w tabeli):
    - problem --[dekompozycja]--> zadania --[dekompozycja]--> podzadania itd.
      warunek stopu: możliwe oszacowanie pracochłonności [h]
    - suma godzin >= 100h



## 2. Szkielet aplikacji

#### Wymagania ze strony przedmiotu

* ~~Ma zawierać istotne dla projektu biblioteki i narzędzia~~
* ~~Ma się kompilować i uruchamiać na różnych środowiskach~~
* ~~Ma zawierać skrypty do budowania aplikacji (np. SCons)~~
* ~~Przykładowe testy jednostkowe~~
* Kod ma być na repo (czyli github po prostu) :heavy_check_mark:

#### Wymagania prowadzącego

* Szkielet = 
  * skrypty budujące (np. SCons)
  * przykładowy program (który demonstruje użycie istotnych dla projektu bibliotek i narzędzi)
* Kompilacja i uruchamianie na różnych systemach
* Zawiera szkielet głównej klasy programu
* Przykładowe testy jednostkowe
* Wysłać e-mailem w .zip
* Instalacja bibliotek:
  * Zautomatyzować: skrypt lub pakiet Ubuntu
  * Ostatecznie (zamiast automatyzacji): opisać w README, co trzeba zainstalować
  * Sprawdzić, czy automat/opis działa, na Ubuntu z pendrive'a