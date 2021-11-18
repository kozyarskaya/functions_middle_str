#include "middle_str.h"

int itc_find_str(string str1, string str2){
    long long len1 = 0;
    len1 =  itc_len(str1);
    long long len2 = 0;
    len2 = itc_len(str2);
    long long kol = 0;
    for (long long i = 0; i < len1; i++){
        kol = 0;
        if (str1[i] == str2[0]){
        for (long long j = 0; j < len2; j++){
            if (str1[i + j] == str2[j]){
                kol += 1;
            }
        }
        }
        if (kol == len2){
            return i;
        }
    }
    return -1;
}
