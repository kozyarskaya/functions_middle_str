#include "middle_str.h"

long long itc_str_to_int(string str){
    long long number = 0, i = 0;
    int ch = 0;
    while(str[i] != '\0'){
        ch = str[i] - 48;
        number = number * 10 + ch;
        i ++;
    }
    return number;
}
