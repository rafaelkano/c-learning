#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year, leapYear;
    printf("Enter a day, month and year: \n");
    scanf("%d%d%d", &day,&month,&year);

    if((day <= 0 || day > 31) || (month <= 0 || month > 12) || year < 0)
        printf("Error.. Try input the data again (dd mm yyyy): \n");
    else
    {
        if(year % 400 == 0)
            leapYear = 1;
        else if(year % 100 == 0)
            leapYear = 0;
        else if(year % 4 == 0)
            leapYear = 1;
        else
            leapYear = 0;
        
        if(day < 28)
            printf("%02d %02d %04d \n", day+1, month, year);
        else
        {
            if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
            {
                if(day < 31)
                    printf("%02d %02d %04d\n", day+1,month,year);
                else if(day == 31)
                    printf("01 %02d %04d\n", month+1,year);
            }
            else if(month == 12)
            {
                if(day < 31)
                    printf("%02d %02d %04d\n", day+1,month,year);
                else if(day == 31)
                    printf("01 01 %04d\n",year+1);                
            }
            else if(month == 4 || month == 6 || month == 9 || month == 11)
            {
                if(day < 30)
                    printf("%02d %02d %04d\n", day+1,month,year);
                else if(day == 30)
                    printf("01 %02d %04d\n", month+1,year);                    
            }
            else if(month == 2)
            {
                if(leapYear){
                    if(day < 29)
                        printf("%02d %02d %04d\n", day+1,month,year);
                    else if(day == 29)
                        printf("01 %02d %04d\n", month+1,year);  
                }
                else
                {
                    if(day < 28)
                        printf("%02d %02d %04d\n", day+1,month,year);
                    else if(day == 28)
                        printf("01 %02d %04d\n", month+1,year); 
                }
            }
        }
      
    }
    return 0;
}