#include <iostream>
#include <math.h>
#include <vector>

std::vector <float> function(std::vector <float>* tab, float f, int s) {
    int i = 1;
    for (auto it : *tab) {
        f = pow(3, it);
        std::cout << i << ".Punkt: x: " << it << ", y: " << f << std::endl;
        it++;
        i++;
    }
    return *tab;
}

int main() {
    int s;
    float f = 0;
    float input;

    std::cout << "Podaj ilosc puntkow: ";
    std::cin >> s;

    if (s > 0) {
        std::vector <float> tab;
        tab = {};
        std::cout << "Podaj wspolrzedne x punktow: " << std::endl;

        for (int i = 0; i < s; i++) {
            std::cin >> input;
            tab.push_back(input);
        }

        function(&tab, f, s);
    }
    else {
        std::cout << "Ilosc punktow nie moze byc mniejsza od 1.";
        return 0;
    }

    return 0;
}
