#include "middle_str.h"

int itc_kol_slov(string str){
    int kol = 0;
    long long i = 0;
    while(str[i] != '\0'){
        if(str[i] == ' ')
            kol += 1;
        i++;
    }
    if (kol == 0)
        return kol;
    kol++;
    return kol;
}
