#include "4.h"

int getChar(char ch);
int h1(int key);
int h2(int key);
long long getKey(char str[]);
int find(char str[], char hash[][DICTIONARY_STR_SIZE]);
int insert(char str[], char hash[][DICTIONARY_STR_SIZE]);

void dictionary(void){
    int i, count;
    char str[DICTIONARY_STR_SIZE], op[DICTIONARY_STR_SIZE];
    char hash[DICTIONARY_ARY_STR_SIZE][DICTIONARY_STR_SIZE];
    
    scanf("%d",&count);

    for(i = 0; i < count; i++){
        scanf("%s %s", op, str);
    
        if(op[0]=='i'){
            insert(str, hash);
        }else{
            if(find(str, hash)){
                printf("yes\n");
            }else{
                printf("no\n");
            }
        }
    }
}

int getChar(char ch){
    if(ch == 'A'){
        return 1;
    }
    else if(ch == 'C'){
        return 2;
    }
    else if(ch == 'G'){
        return 3;
    }
    else if(ch == 'T'){
        return 4;
    }
    else{
        return 0;
    }
}

int h1(int key){
    return key % DICTIONARY_ARY_STR_SIZE;
}

int h2(int key){
    return 1 + (key % (DICTIONARY_ARY_STR_SIZE - 1));
}

long long getKey(char str[]){
    long long sum = 0, p = 1, i;
    for(i = 0; i < strlen(str); i++){
        sum += p*getChar(str[i]);
        p *= 5;
    }
    return sum;
}

int find(char str[], char hash[][DICTIONARY_STR_SIZE]){
    long long key, i, h;
    key=getKey(str);
    for(i = 0; ; i++){
        h=(h1(key) + i * h2(key)) % DICTIONARY_ARY_STR_SIZE;
        if(strcmp(hash[h], str)==0){
            return 1;
        }
        else if(strlen(hash[h])==0){
            return 0;
        }
    }
}

int insert(char str[], char hash[][DICTIONARY_STR_SIZE]){
    long long key, i, h;
    key=getKey(str);
    for(i = 0; ; i++){
        h=(h1(key) + i * h2(key)) % DICTIONARY_ARY_STR_SIZE;
        if(strcmp(hash[h], str)==0){
            return 1;
        }
        else if(strlen(hash[h])==0){
            strcpy(hash[h], str);
            return 0;
        }
    }
}