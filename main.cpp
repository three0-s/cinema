#include <iostream>
#include <string>
#include <stdlib.h>

void msgbox(std::string sentence){
        //(60, 15) center position
        int size = sentence.size();

        for(int i = 0; i < 10; i++)
            std::cout << "\n";

        for(int i = 0; i < 2; i++){
            for(int i = 0; i < 60 - (int)(size*1.8/2); i++){
                std::cout << " ";
            }
            for(int j = 0; j < (int)size*1.8; j++){
                std::cout << "-";
            }
            std::cout <<"\n";
        }
        std::cout <<"\n";
        //print the message
        for(int i = 0; i < 60 - (int)(size/2); i++){
            std::cout << " ";
        }
        std::cout << sentence << "\n\n\n";

        for(int i = 0; i < 2; i++){
            for(int i = 0; i < 60 - (int)(size*1.8/2); i++){
                std::cout << " ";
            }
            for(int j = 0; j < (int)size*1.8; j++){
                std::cout << "-";
            }
            std::cout <<"\n";
        }
}
void clear(){
    system("cls");
}

int main(){
    msgbox("Welcome to LIM Cinema!");
    int a, b;
    std::cin >> a;
    
    system("cls");
    std::cin >> b;
    return 0;
    
}