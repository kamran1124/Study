
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
    char str1[100], str2[100], str3[100], str4[100], str5[100], str6[100], str7[100], str8[100], str9[100];
    int i;
    int j;
    int k;
    int n;
    int l;
    printf("Welcome to Online IDE!! Happy Coding :)");
   
    printf("input any listings (minimum 3 words , maximum 5 words), "); // ранжирование алгоритм
    printf("Input them with space, input q if none");
    scanf("%s %s %s %s %s", str5, str6, str7, str8, str9); 
  
    printf("input any new words (4 words, input Q if none):");
    scanf("%s %s %s %s", str1, str2, str3, str4); 
    
    printf("input any definitions together with space between each, 3 digits"); // have to work on it
    scanf("%d", &k); 
    scanf("%d", &l);
    scanf("%d", &j); 
    
    printf("input associations that take no more than 3 seconds to form, 1 digit ");
    scanf("%d", &n); 
    
    
    printf("\nYour words are:\n%s %s %s %s %s\n", str5, str8, str6, str7, str9); //before ранжирование without third \n
    printf("%d", n); 
    printf("\n%s %s %s %s\n", str1, str2, str3, str4); // after ранжирование wtih first \n
    printf("%d", k);
    printf("%d", l);
    printf("%d\n", j);
    return 0;
}
