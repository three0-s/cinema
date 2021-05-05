#include "CPrint.h"
#include <windows.h>
#include <string>

int main(){
    CPrint pbuffer;
    int a, b;
    std::string A="Zones";
    std::string B="Times";
    std::string arrayA[5] = {"1 zone", "2 zone", "3 zone", "4 zone", "5 zone"};
    std::string arrayB[5] = {"1 time", "2 time", "3 time", "4 time", "5 time"};

    while(true){
        pbuffer.msgbox("Welcome to LIM Cinema! Professor Fuck off!:) ");
        
        Sleep(3000);
        pbuffer.clear();

        pbuffer.pyo(A, B, arrayA, arrayB, A.size(), B.size(), 5);
    }
     
    return 0;
}