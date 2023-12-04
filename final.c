cd c:\

cd C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\

vcvars64.bat 

vcvars64

​

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
    컴파일 명령 실
cd C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\
cl copyfile.c
    프로그램 실행
copyfile source.txt target.txt

    자가체점:100점
