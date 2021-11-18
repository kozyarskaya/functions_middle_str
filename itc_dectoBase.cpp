#include"middle_str.h"

string itc_decToBase(int num, int base){
    int ch = 0;
    string ss16 ="0123456789ABCDEF", str = "", new_str = "";
    if(num < 0){
        new_str += "-";
        num *= (-1);
    }
    while(num > 0){
        ch = num % base;
        str += ss16[ch];
        num /= base;
    }
    for(long long i = (itc_len(str) - 1); i >= 0; i--){
        new_str += str[i];
    }

    return new_str;
}
