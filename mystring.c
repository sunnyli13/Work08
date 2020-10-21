#include "mystring.h"

int mystrlen(char *s) {
    int len = 0;

    while (*s) {
        len++;
        s++;
    }

    return len;
}

char *mystrncpy(char *dest, char *source, int n) {
    int i = 0;

    while (i < n) {
        *(dest+i) = *(source+i);
        i++;
    }

    return dest;
}

char *mystrcat(char *dest, char *source) {
    int len = mystrlen(dest);
    int i;

    for (int i = 0; i < mystrlen(source); i++) {
        *(dest+len+i-1) = *(source+i+1);
    }

    return dest;
}

int mystrcmp(char *s1, char *s2) {
    int i = 0;

    while (*(s1+i) && *(s2+i)) {
        i++;
    }

    if (*(s1+i) == *(s2+i))
        return 0;

    else if (*(s1+i) == 0)
        return -1;

    else 
        return 1;
}

char *mystrchr(char *s, char c) {
    int i;

    for (int i = 0; i < mystrlen(s)+1; i++) {
        if (c == *(s+i))
            return s+i;
    }

    return 0;
}

