#include <string>

#include "format.h"

using std::string;


std::string pad(long s){
    if(s<10){
        return std::string("0"+std::to_string(s));
    }else{
        return  std::to_string(s);
    }
}

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
std::string Format::ElapsedTime(long time) { 
    long hours = time/(3600);
    long minutes =  (time/60)%60;
    long seconds  = time %60;
    return std::string(pad(hours)+":"+pad(minutes)+":"+pad(seconds));
 }