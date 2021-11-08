#include "middle_str.h"

unsigned char itc_registr(unsigned char c){
    if (c >= 'a' && c <= 'z')
        return c - ' ';
    if (c >= 'A' && c <= 'Z')
        return c + ' ';
    return c;
    }

