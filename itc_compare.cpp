#include "middle_str.h"

bool itc_compare(string str1, string str2){
    long long len1, len2;
    len1 = itc_len(str1);
    len2 = itc_len(str2);
    long long i = 0, kol = 0;
    if (len1 != len2)
        return false;
    while (str1[i] <= '\0'){
        if (str1[i] != str2[i])
            return false;
        i ++;
    }
    return true;
}
