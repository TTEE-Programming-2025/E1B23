#include <stdlib.h>
#include <stdio.h>
#include <conio.h> 

int main() {
    int code;
    char ch;
    
    //�B�J1 
    printf("........................................\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|             �{���]�p                 |\n");
    printf("|                                      |\n");
    printf("|              �@�~�@                  |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|           �Z��: E1B                  |\n");
    printf("|                                      |\n");
    printf("|           �y��: 23                   |\n");
    printf("|                                      |\n");
    printf("|           �m�W: ���f��               |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("|                                      |\n");
    printf("........................................\n");
    
    getch();
    
    system("CLS");
    
    //�B�J2 
    printf("�п�J4��ƱK�X: ");
    scanf("%d", &code);
    
    if(code == 2024) { 
        printf("�K�X���T�A�w��i�J�t��!\n");
        system("pause");
        system("CLS");
        
        //�B�J3 
        printf("****************************************\n");
        printf("*        �D��� - �п�ܿ�J����       *\n");
        printf("****************************************\n");
        printf("* 'A'...'Z' : Uppercase                *\n");
        printf("* 'a'...'z' : Lowercase                *\n");
        printf("* '0'...'9' : Digit                    *\n");
        printf("*   ��L    : Your name                *\n");
        printf("****************************************\n");
        printf("\n�п�J�@�Ӧr��: ");
        
        fflush(stdin);
        
        ch = getchar();
        
        if(ch >= 'A' && ch <= 'Z') {
            printf("Uppercase\n");
        } else if(ch >= 'a' && ch <= 'z') {
            printf("Lowercase\n");
        } else if(ch >= '0' && ch <= '9') {
            printf("Digit\n");
        } else {
            printf("E1B23 ���f��\n"); 
        }
        
        system("pause");
        system("CLS");
        
        //�߱o 
        printf("�߱o:\n");
        printf("�o�����@�~���F�O�ƲߦѮv�W�ҩұЪ��A\n");
        printf("�P�ɤ]���ڭ̾Ƿ|�p��ϥ�GitHub�C\n");
        printf("�]���O�Ĥ@���ϥΡA\n");
        printf("�ҥH�n���w��GitHub�A\n");
        printf("�o�ӹL�{��F�ڤ��֮ɶ��A\n");
        printf("�ӥB���M���v���оǡA\n");
        printf("���ܦh���٬Oť�������A\n");
        printf("�u��Ӱ��C\n");
        printf("���M�����A\n");
        printf("���Ƿ|�����ڪ����U���p�A\n");
        printf("�ҥH�ڷ|�V�O�Ƿ|�C\n");
        
        
    } else {
        
        printf("%c", '\a'); 
        printf("�K�X���~! \n");
        system("PAUSE");
    }
    
    return 0;
}
