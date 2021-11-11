#include "middle_str.h"

char itc_simvol(string str){
    char ch = ' ';
    long long i = 0, len = itc_len(str), kol = 1;
    while(str[i] != '\0'){
        for (long long j = i + 1; j <= len; j++){
        if (str[i] == str[j])
            kol++;
        }
        if (kol == 2)
             ch = str[i];
    i++;
    len--;
    }
    return ch;
    return '1';
}
