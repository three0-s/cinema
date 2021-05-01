#include"CSeat.h"

CSeat::CSeat(std::string name, std::string phonenumber, bool gender, std::string movie_name, int schedule_num) : CPerson_Info(name, phonenumber, gender), CMovie_Info(movie_name, schedule_num) {};

void CSeat::addnum() {}

