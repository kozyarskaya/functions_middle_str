#include "middle_str.h"


bool itc_isWord(string str){
    long long i = 0;
    bool bol = true;
    while(str[i] != '\0'){
        if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) && str[i] != 32)
            bol =  false;
        i++;
    }
    return bol;
}
