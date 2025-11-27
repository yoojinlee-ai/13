#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

// 구조체 정의
struct student {
    int ID;           // 학번
    char name[20];    // 이름
    double grade;     // 학점
};

int main(int argc, char *argv[]) {
    // 변수 선언 및 초기화
    struct student stud = {10, "es", 4.3};

    // 학번, 이름, 학점 값 변경
    stud.ID = 17;
    strcpy(stud.name, "song");
    stud.grade = 2.0;

    // 각각 출력
    printf("ID: %d, name: %s, grade: %.1f\n", stud.ID, stud.name, stud.grade);

    system("pause");
    return 0;
}

