#include"middle_str.h"

bool itc_isFirstInSecond(string str1, string str2){
    long long bol = itc_find_str(str2, str1);
    if (bol == -1)
        return false;
    return true;
}
