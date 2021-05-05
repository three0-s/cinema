#include "CPrint.h"



CPrint::CPrint(){}

void CPrint::clear() const{
    //for(int i = 0; i < 60; i++)
    //    std::cout << "\n";
    system("cls");
}
void CPrint::msgbox(std::string sentence) const{
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

void CPrint::pyo(std::string col1, std::string col2, std::string* col1_ptr, std::string* col2_ptr, int col1_size, int col2_size) const{
    
}