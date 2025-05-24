#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if(marks>=0 && marks<=100)
    {
        if(marks>=90)
        {
            printf("A+,Excellent\n");
        }
        else
        {
            if(marks>=80)
            {
                printf("A, Very Good");
            }
            else
            {
                if(marks>=70)
                {
                    printf("B, Good");
                }
                else
                {
                    if(marks>=60)
                    {
                        printf("C, Average");
                    }
                    else
                    {
                        if(marks>=50)
                        {
                            printf("D, Pass");
                        }
                        else
                        {
                            printf("F, Fail");
                        }
                    }
                }
            }
        }
        
    }
    return 0;
}
