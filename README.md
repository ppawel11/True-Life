# True Life

Opis projektu:

Program umożliwia przeprowadzenie symulacji ekosystemu. Występują w nim dwa rodzaje osobników: roślinożercy oraz mięsożercy. Osobniki tego samego gatunku mogą rozmnażać się, dodatkowo mięsożercy zjadają roślinożerców.

Wybór początkowej liczby osobników oraz ich umiejscowienia należy do użytkownika.

Całej symulacji brakuje kilku zaplanowanych wcześniej funkcjonalności (między innymi implementacji jedzenia dla roślinożerców...), ale prezentuje użycie kilku ciekawych wzorców projektowych.

#===========================

Przygotowanie środowiska:

$ sudo apt install qt5-default  
$ sudo apt install libboost-dev  

O ile nie są zainstalowane domyślnie:

$ sudo apt install make  
$ sudo apt install g++  

#===========================

Uruchomienie programu:

wewnątrz src/build-TrueLife-Desktop-Debug:  
$ make  
$ ./TrueLife  

