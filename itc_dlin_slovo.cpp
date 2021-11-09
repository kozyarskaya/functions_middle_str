#include "middle_str.h"

string itc_dlin_slovo(string str){
    string max_len_str = "", new_str = "";
    long long kol = 0, i = 0;
    if (itc_kol_slov(str) == 1)
        return str;
    while (str[i] != '\0'){
        if (str[i] != ' '){
            kol++;
            new_str += str[i];
            }
        if (str[i] == ' '){
            if (kol > itc_len(max_len_str)){
                max_len_str = new_str;
            }
            kol = 0;
            new_str = "";
        }
        i++;
    }
    if (kol > itc_len(max_len_str)){
         new_str += str[i - 1];
         max_len_str = new_str;
    }
    return max_len_str;
    return "-1";
}
