#include "middle_str.h"

string itc_rmFreeSpace(string str){
    long long i = 0;
    string new_str = "";
    while(str[i] != '\0'){
        if((str[i] == 32 && str[i - 1] != 32) || str[i] < 32 || str[i] > 32)
            new_str += str[i];
        i++;
    }
    if((new_str[itc_len(new_str) - 1]) == 32)
        new_str = itc_slice_str(new_str, 0 , itc_len(new_str) - 2);

    return new_str;
}
