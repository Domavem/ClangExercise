// C Program to Store Information of a Student Using Structure
// Enter information:
// Enter name: Jack
// Enter roll number: 23
// Enter marks: 34.5
// Displaying Information:
// Name: Jack
// Roll number: 23
// Marks: 34.5

#include <stdio.h>
struct Student
{

    char name[50];
    int roll;
    float marks;

} s;

int main()
{

    printf("Enter information.\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin); // 이름을 s스트럭쳐의 어레이인 name 으로 인풋한다.

    printf("Enter roll number:");
    scanf("%d", &s.roll); //s 스트럭쳐의 인트인 roll
    printf("Enter marks:");
    scanf("%f", &s.marks); //s 스트럭쳐의 플롵인 marks

    printf("Displaying information.\n");
    printf("Name: %s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %f\n", s.marks);
}

//존나 헷갈리네ㅡㅡ