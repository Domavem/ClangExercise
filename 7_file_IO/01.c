// C Program to Write a Sentence to a File
// Enter a sentence: C Programming is fun
// Here, a file named program.txt is created. The file will contain C programming is fun text.

#include <stdio.h>

int main()
{
    char s[100];

    FILE *fileptr = fopen("07-01program.txt", "w"); //파일열어

    printf("Enter a sentence:"); //스트링 입력 저장
    scanf("%s", s);
    fgets(s, sizeof(s), stdin);
    //파일에 스트링 써
    fprintf(fileptr, "%s\n", s);

    //파일 닫아
    fclose(fileptr);

    return 0;
}