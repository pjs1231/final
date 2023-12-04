1.코드

#include <stdio.h>

​

int main(int argc, char *argv[]) {

    FILE *s, *t;

    char c;

​

    s = fopen(argv[1], "r"); 

    t = fopen(argv[2], "w");

​

    while ((c = fgetc(s)) != EOF)

        fputc(c, t);

​

    fclose(s);

    fclose(t);

​

    return 0;

}

2.컴파일 방법
    
    mkdir anu 
    cd anu

    notepad mycp.c
    
    #include <stdio.h>

​

int main(int argc, char *argv[]) {

    FILE *s, *t;

    char c;

​

    s = fopen(argv[1], "r"); 

    t = fopen(argv[2], "w");

​

    while ((c = fgetc(s)) != EOF)

        fputc(c, t);

​

    fclose(s);

    fclose(t);

​

    return 0;

}   
저장
    cl mycp.c
    mycp.exe f1.txt f2.txt
    
    
    자가체점:100점
