#include "middle_str.h"

bool itc_isIp(string str){
    long long i = 0, kol = 0;
    string new_str = "";
    if(str[itc_len(str) - 1] == '.' || itc_len(str) > 15 )
        return false;
    while(str[i] != '\0'){
        if (str[i] == '.'){
            if (str[i - 1] == '.')
                return false;
            if (itc_str_to_int(new_str) > 255)
                return false;
            new_str = "";
            kol = 0;
        }
        if(str[i] > '9' || str[i] < '0' && str[i] != '.')
            return false;
        if(str[i] != '.'){
            new_str += str[i];
            kol++;}
        if (kol > 3)
            return false;
        i++;
    }
    return true;
}

