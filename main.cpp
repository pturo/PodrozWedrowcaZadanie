#include <iostream>

struct wedrowka {
    int stopni, minuta, sekunda;
};

int main() {
    // utworz tablice zawierającą te pola
    wedrowka droga[4];

    // Wczytaj położenie podane przez użytkownika w każdym
    // z tych 3 dni i oblicz sumę
    int d_pierwszy_st, d_pierwszy_min, d_pierwszy_sek;
    int d_drugi_st, d_drugi_min, d_drugi_sek;
    int d_trzeci_st, d_trzeci_min, d_trzeci_sek;
    int sum_1, sum_2, sum_3, sum_laczna_droga;
    std::cout << "Jako wedrowiec rozpoczales 3-dniowa podroz, idac na wschod." << std::endl;
    // Położenie pierwszego dnia
    std::cout << "Podaj polozenie 1 dnia:" << std::endl;
    std::cout << "Stopni: ";
    std::cin >> droga[0].stopni;
    d_pierwszy_st = droga[0].stopni;
    std::cout << "Minut: ";
    std::cin >> droga[1].minuta;
    d_pierwszy_min = droga[1].minuta;
    std::cout << "Sekund: ";
    std::cin >> droga[2].sekunda;
    d_pierwszy_sek = droga[2].sekunda;
    // Położenie drugiego dnia
    std::cout << "Podaj polozenie 2 dnia:" << std::endl;
    std::cout << "Stopni: ";
    std::cin >> droga[0].stopni;
    d_drugi_st = droga[0].stopni;
    std::cout << "Minut: ";
    std::cin >> droga[1].minuta;
    d_drugi_min = droga[1].minuta;
    std::cout << "Sekund: ";
    std::cin >> droga[2].sekunda;
    d_drugi_sek = droga[2].sekunda;
    // Położenie trzeciego dnia
    std::cout << "Podaj polozenie 3 dnia:" << std::endl;
    std::cout << "Stopni: ";
    std::cin >> droga[0].stopni;
    d_trzeci_st = droga[0].stopni;
    std::cout << "Minut: ";
    std::cin >> droga[1].minuta;
    d_trzeci_min = droga[1].minuta;
    std::cout << "Sekund: ";
    std::cin >> droga[2].sekunda;
    d_trzeci_sek = droga[2].sekunda;
    // Oblicz łaczną drogę i podaj odpowiedź.
    // (przyjmujemy, że stopień ma 60 min, a 1 min to 60 s - wynik można podać w sekundach, a potem w minutach ewentualnie.)
    // Pamiętać trzeba, że używając typu całkowitego int, odcinana jest część ułamkowa, zatem wyniki są zaokrąglone
    // do całości.
    sum_1 = d_pierwszy_st * 3600 + d_pierwszy_min * 60 + d_drugi_sek;
    sum_2 = d_drugi_st * 3600 + d_drugi_min * 60 + d_drugi_sek;
    sum_3 = d_trzeci_st * 3600 + d_trzeci_min * 60 + d_trzeci_sek;
    sum_laczna_droga = sum_1 + sum_2 + sum_3;
    std::cout << "W ciagu trzech dni przebyles laczna droge: "
    << sum_laczna_droga << " sekund, co daje to: " << (sum_laczna_droga / 60) << " minut i "
    << (sum_laczna_droga / 3600) << " stopni." << std::endl;
}