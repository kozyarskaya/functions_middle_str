#include "middle_str.h"

string itc_Cezar(string str, int k){
long long i = 0;
int h = 0;
string new_str = "";
while(str[i] != '\0'){
        if ((str[i] + k) > 'z'){
            h = (str[i] + k) - 123;
            new_str += 'a' + h;
        }
        else if ((str[i] + k) > 'Z' && (str[i] + k) < 'a'){
            h = (str[i] + k) - 91;
            new_str += 'A' + h;
        }
        else if((str[i] + k) > 'a'&& (str[i] + k) < 'z' || (str[i] + k) < 'Z' && (str[i] + k) > 'A') {
            new_str += str[i] + k;
        }
        else{
            new_str += str[i];
        }
    i++;

}
return new_str;

}
