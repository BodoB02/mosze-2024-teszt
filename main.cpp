#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS + 1];                    // Helytelen hivatkozás és kibővítjük a tömböt
    std::cout << "1-100 ertekek duplazasa" << std::endl; // Hiányzó pontosvessző
    for (int i = 1; i <= N_ELEMENTS; i++)                // Kiegészítjök a ciklus követelményeit
    {
        b[i] = i * 2;
    }
    for (int i = 1; i <= N_ELEMENTS + 1; i++) // Kiegészítjök a ciklus követelményeit
    {
        std::cout << i << ". Ertek: " << b[i] << std::endl; // Hiányzó pontosvessző és az értékek kimutatása
    }
    std::cout << "Atlag szamitasa: ";
    int atlag = 0;                            // Inancializáció
    for (int i = 1; i <= N_ELEMENTS + 1; i++) // Hiányzó pontosvessző és ciklus követelményeinek kiegészítése
    {
        atlag += b[i]; // Hiányzó pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;

    int osszeg() {
        int ossz = 0;
        for (int i = 1; i < N_ELEMENTS; i++) {
            ossz += i;

        }
        std::cout << "Az érték:" + ossz;
    }
}