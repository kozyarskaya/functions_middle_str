#include "middle_str.h"

string itc_maxCharWord(string str){
    string max_len_str = "", new_str = "";
    long long len = 0, i = 0, start = 0;
    if (itc_find_str(str, " ") == -1)
        return "error";
    while(str[i] != '\0'){
        if (str[i] == 32){
            if (str[i - 1] != 32)
                new_str = itc_slice_str(str, start, i - 1);
                len = itc_len(new_str);
            if (new_str[len - 1] < 65 || (new_str[len - 1] > 90 && new_str[len - 1] < 97) || new_str[len - 1] > 122)
                new_str = itc_slice_str(new_str, 0, len - 2);
                len = itc_len(new_str);
            if (len > itc_len(max_len_str) && itc_isWord(new_str) == 1)
                max_len_str = new_str;
            start = i + 1;
            len = 0;
            new_str = "";
            }
        i++;

    }

     new_str = itc_slice_str(str, start, itc_len(str) - 1);
     len = itc_len(new_str);
     if (len > itc_len(max_len_str) && itc_isWord(new_str) == 1){
         max_len_str = new_str;
    }
    if (max_len_str == " ")
        return "error";
    return max_len_str;
    return "error";
}
