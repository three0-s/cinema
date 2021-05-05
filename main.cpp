#include "CPrint.h"

int main(){
    CPrint pbuffer;
    int a, b;

    while(true){
        pbuffer.msgbox("Welcome to LIM Cinema! Professor Fuck off!:) ");
        
        std::cin >> a;
        pbuffer.clear();
        std::cin >> b;
    }
     
    return 0;
}