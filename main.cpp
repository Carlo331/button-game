#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    int ny;
    int State = true;
    int Score = 0;
    while (State == true){
        int ButtonNumber = 0;
        int Sjanse = 100;
        int prosent = 50;
        while (State == true){
        std::cout  << "| trykk på enter for å trykke på knappen: ";
        srand(time(NULL));
        if (std::cin.get() == '\n'){
            ButtonNumber = ButtonNumber + 1; 
            std::cout << ButtonNumber;
            if (ButtonNumber > Score){
                    Score = ButtonNumber;
                }
            std::cout << " ";
            int random = rand() % Sjanse + 1;
            if (random == Sjanse){
                std::cout << "<-- du fikk/du døde | high score = ";
                std::cout << Score;
                break;
            }
            Sjanse = 100 / ButtonNumber;
        }
        else{
            std::cout <<"halla!";
        }   
        }
        std::cout  << " | skriv in 1 for å starte på nytt: ";
        std::cin >> ny;
        if (ny == 1){
            State = true;
        }
        else{
            std::cout <<" hade bra(:";
        }
    }
    return 0;
}
