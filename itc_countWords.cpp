#include "middle_str.h"

int itc_countWords(string str){
    int kol = 0;
    long long i = 0;
    bool bol = true;
    while(str[i] != '\0'){
        if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) && str[i] != 32){
            bol = false;
        }
        if(str[i] == 32 && bol == true)
            kol += 1;
        if(str[i] == 32 && bol == false){
            bol = true;}
        i++;
    }
    if(bol == false)
        return kol;
    kol++;
    return kol;
}
