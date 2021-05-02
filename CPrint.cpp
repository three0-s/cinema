#include "CPrint.h"

CPrint::CPrint(){}

void CPrint::clear() const{
    system("cls");
}
void CPrint::msgbox(std::string sentence) const{
    //(60, 15) center position
    int size = sentence.size();

    for(int i = 0; i < 10; i++)
        std::cout << "\n";

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < (int)size*1.5; j++){
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
        for(int j = 0; j < (int)size*1.5; j++){
            std::cout << "-";
        }
        std::cout <<"\n";
    }
}