#include "middle_str.h"

string itc_rmFreeSpace(string str){
    long long i = 0;
    string new_str = "";
    while(str[i] != '\0'){
        if((str[i] == 32 && str[i - 1] != 32) || str[i] < 32 || str[i] > 32)
            new_str += str[i];
        i++;
    }
    return new_str;
}
