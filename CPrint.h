#ifndef __CPRINT__
#define __CPRINT__

#include <string>
#include <iostream>
#include <stdlib.h>

class CPrint{
public:
    CPrint();
    void msgbox(std::string sentence) const;
    void clear() const;
};

#endif