#include <stdio.h>

int main()
{
    int grade = 0;
    int sum = 0;
    float average = 0;
    int count = 0;

    while(grade != -1)
    {
        
        printf("Enter the grade %d or -1 to stop: ", count+1);
        scanf("%d", &grade);

        if(grade == -1)
            break;
        else
        {
            sum += grade;
            count++; 
        }        
      
    }
    if(count != 0)
        average = (float)sum / count;
        
    printf("The average grade is: %f\n", average);
    return 0;
}