#include <iostream>

// Funktion zur Anzeige der aktuellen Wechselkurse
void display_conversion_rates() {
    std::cout << "Current Conversion Rates:\n";
    std::cout << "1 Colombian Peso = 0.049 USD\n";
    std::cout << "1 Brazilian Real = 0.17 USD\n";
    std::cout << "1 Peruvian Sol = 0.26 USD\n";
}

// Funktion zur Rückgabe der Umrechnungskurse
double get_conversion_rate(std::string currency) {
    if (currency == "pesos") return 0.049;
    if (currency == "reais") return 0.17;
    if (currency == "soles") return 0.26;
    return 0.0; // Falls ungültige Währung eingegeben wird
}

int main() {
    display_conversion_rates();
    return 0;
}
