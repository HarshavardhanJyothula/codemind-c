#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e;
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    float tm,p;
    tm=a+b+c+d+e;
    p=(tm/500)*100;
    char grade;
    if(p>=90)
    {
        printf("Grade A");
    }
    else if(p>=80)
    {
        printf("Grade B");
    }
    else if(p>=70)
    {
        printf("Grade C");
    }
    else if(p>=60)
    {
        printf("Grade D");
    }
    else if(p>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}