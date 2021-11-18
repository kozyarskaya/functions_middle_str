#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

bool itc_isDigit(unsigned char c);

unsigned char itc_toUpper(unsigned char c);

unsigned char itc_changeCase(unsigned char c);

bool itc_compare(string str1, string str2);

int itc_countWords(string str);

string itc_dlin_slovo(string str);

string itc_maxCharWord(string str);

char itc_sameChar(string str);

bool itc_isFirstInSecond(string str1, string str2);

string itc_Cezar(string str, int k);

string itc_rmFreeSpace(string str);

bool itc_isIp(string str);

string itc_DecToBin(string str);

string itc_decToBase(int num, int base);

long long itc_len(string str);

string itc_slice_str(string str, int start, int finish);

int itc_find_str(string str1, string str2);

long long itc_covert_num(long long number, int ss);

bool itc_isWord(string str);

long long itc_str_to_int(string str);

string itc_int_to_str(long long num);

int itc_len_num(long long number);


#endif // MIDDLE_STR_H_INCLUDED
