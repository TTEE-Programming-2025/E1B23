#include <stdlib.h>
#include <stdio.h>
#include <conio.h> 

int main() {
    int code;
    char ch;
    
    //步驟1 
    printf("........................................\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|             程式設計                 |\n");
    printf("|                                      |\n");
    printf("|              作業一                  |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|           班級: E1B                  |\n");
    printf("|                                      |\n");
    printf("|           座號: 23                   |\n");
    printf("|                                      |\n");
    printf("|           姓名: 黃柏勳               |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("........................................\n");
    
    getch();
    
    system("CLS");
    
    //步驟2 
    printf("請輸入4位數密碼: ");
    scanf("%d", &code);
    
    if(code == 2024) { 
        printf("密碼正確，歡迎進入系統!\n");
        system("pause");
        system("CLS");
        
        //步驟3 
        printf("****************************************\n");
        printf("*        主選單 - 請選擇輸入類型       *\n");
        printf("****************************************\n");
        printf("* 'A'...'Z' : Uppercase                *\n");
        printf("* 'a'...'z' : Lowercase                *\n");
        printf("* '0'...'9' : Digit                    *\n");
        printf("*   其他    : Your name                *\n");
        printf("****************************************\n");
        printf("\n請輸入一個字元: ");
        
        fflush(stdin);
        
        ch = getchar();
        
        if(ch >= 'A' && ch <= 'Z') {
            printf("Uppercase\n");
        } else if(ch >= 'a' && ch <= 'z') {
            printf("Lowercase\n");
        } else if(ch >= '0' && ch <= '9') {
            printf("Digit\n");
        } else {
            printf("E1B23 黃柏勳\n"); 
        }
        
        system("pause");
        system("CLS");
        
        //心得 
        printf("心得:\n");
        printf("這次的作業除了是複習老師上課所教的，\n");
        printf("同時也讓我們學會如何使用GitHub。\n");
        printf("因為是第一次使用，\n");
        printf("所以要先安裝GitHub，\n");
        printf("這個過程花了我不少時間，\n");
        printf("而且雖然有影片教學，\n");
        printf("但很多我還是聽不太懂，\n");
        printf("只能照做。\n");
        printf("雖然很難，\n");
        printf("但學會之後對我的幫助不小，\n");
        printf("所以我會努力學會。\n");
        
        
    } else {
        
        printf("%c", '\a'); 
        printf("密碼錯誤! \n");
        system("PAUSE");
    }
    
    return 0;
}
