#include <iostream>
#include <map>
#include <random>
#include<algorithm>


void generateRandomAlphabet();
int generateRandomNumber(int min, int max);

int main()
{
    std::map<char,char> cipher;
    generateRandomAlphabet();





}

int generateRandomNumber(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min,max);

    return dis(gen);
}

void generateRandomAlphabet()
{
    std::vector<char> alph(26);
    std::vector<char> randAlph(26);

    char z = 'a';
    for_each(alph.begin(), alph.end(), [&](auto &i){ i=z++; });

    std::cout << std::endl;
    int m = 25;
    int randNum = 0;

    for_each(randAlph.begin(), randAlph.end(), [&](auto &i){ randNum = generateRandomNumber(0,m);
                                                             m--;
                                                             i = alph[randNum];
                                                             alph.erase(alph.begin()+randNum); });
}

