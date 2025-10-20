#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool backspaceCompare(char* s, char* t);

int main()
{
    char s1[] = "ab#c";
    char s2[] = "ad#c";
    
    if (backspaceCompare(s1, s2))
        printf("Strings are equal after backspace processing.\n");
    else
        printf("Strings are NOT equal after backspace processing.\n");
    
    return 0;
}

bool backspaceCompare(char* s, char* t){
    int s_len = strlen(s);
    int t_len = strlen(t);
    char sn[s_len + 1];
    char tn[t_len + 1];
    int cs = 0, ct = 0;
    for(int i = 0; i < s_len; i++){
        if(s[i] == '#'){
            if(cs > 0) cs--;
        }
        else sn[cs++] = s[i];
    }
    sn[cs] = '\0';
    for(int i = 0; i < t_len; i++){
        if(t[i] == '#'){
            if(ct > 0) ct--;
        } 
        else tn[ct++] = t[i];
    }
    tn[ct] = '\0';
    return strcmp(tn,sn) == 0;
}