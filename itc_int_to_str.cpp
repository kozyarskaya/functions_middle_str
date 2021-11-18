#include "middle_str.h"

string itc_int_to_str(long long num){
    char ch = '#';
    string str = "", new_str = "";
    while(num > 0){
        ch = (num % 10) + 48;
        str += ch;
        num /=10;
    }
    for(long long i = (itc_len(str) - 1); i >= 0; i--){
        new_str += str[i];
    }
    return new_str;
}
