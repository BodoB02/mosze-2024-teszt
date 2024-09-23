#include<iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS+1]; //Incorrect nameing and extending the array
    std::cout << "1-100 ertekek duplazasa" << std::endl; //Missing semicolon
    for (int i = 1; i <= N_ELEMENTS; i++) //Compliting the requirements for the loop
    {
        b[i] = i * 2;
    }
    for (int i = 1; i <= N_ELEMENTS+1; i++) //Compliting the requirements for the loop
    {
        std::cout << i << ". Ertek: " << b[i] << std::endl; //Missing semicolon és az értékek kimutatása
    }
    std::cout << "Atlag szamitasa: ";
    int atlag = 0; //Initalization
    for (int i = 1; i <= N_ELEMENTS+1; i++) //Missing semicolon
    {
        atlag += b[i]; //Missing semicolon
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}