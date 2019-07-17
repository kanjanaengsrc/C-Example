#define _POSIX_C_SOURCE	199309L
#include<stdio.h>
#include<string.h>
#ifdef _WIN32
#include<windows.h>
#else
#include<unistd.h>
#endif // _WIN32
/*
This program is written to show freshly student.
These procedures below are follow a simulated story.
Copyright (c) Kanjana Eiamsaard, 20190717
Version 1.0 is able to process both Windows and Linux.
*/
int main(void){
    int age = 0, i = 0, year = 1;
    char couple[] = "n";
    printf("Program: Hello, How old are you\n");
    printf("User: ");
    scanf("%d",&age);
    //Age condition
    if (age > 25){
        printf("Please go home Auntly!!\n");
    }else{
        printf("Program: Nice to meet you young lady\n");
        printf("Program: Have you got a couple yet?\n");
        printf("User: ");
        scanf("%s",couple);
        if(strcmp(couple,"n") == 0){   //cannot use without including string.h
            while(i<5){
                printf("Program: May I be your couple\n");
                i++;
            }
        }else{
            while(1){
                printf("Program: I have been waiting you for %d years\n",year);
                year++;
                #ifdef _WIN32
                Sleep(1000*3);
                #else
                sleep(3);
                #endif
            }
        }
    }
    return 0;
}
