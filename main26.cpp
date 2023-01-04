#include <stdio.h>
#include <conio.h>

main()
{
	int day, month, year;
	printf("Enter day   ");
	for (;;)
	{
		scanf("%i",&day);
		if ((day<32)&&(day>0))
		{
			break;
		}
		else
		{
			printf("Wrong range! Enter a number from 1 to 31\nEnter day   ");	
		}
	}
	printf("Enter month  ");
	for(;;)
	{
		scanf("%i",&month);
		if ((month<13)&&(month>0))
		{
			break;		
		}
		else
		{
			printf("Wrong range! Enter a number from 1 to 12\nEnter month   ");	
		}	
	}
	printf("Enter year   ");
	for(;;)
	{
		scanf("%i",&year);
		if (year>-1)
		{
			break;
		}
		else
		{
			printf("Wrong range! Enter a number from 0\nEnter year   ");	
		}
		
	}
		int leap_year = (year%4);
		if (leap_year==0)
		{
			printf("\nleap-year\n");
		}
		else
		{
			printf("\nDon't leap-year\n");
		}                                    
		int east_callendar = (year%12);
		switch(east_callendar)
		{ 
			case 0:
			{
				printf("Year of Monkey\n");
			}
			break;
            case 1:
           	{
                printf("Year of Rooster\n");
            }
            break;
            case 2:
            {
           		printf("Year of Dog\n");
           	}
            break; 
            case 3:
            {
                printf("Year of Pig\n");
            }	
            break;
            case 4:
            {
                printf("Year of Rat\n");
            }
            break;
            case 5:
            {
                printf("Year of Bull\n");
            }
            break;
            case 6:
            {
                printf("Year of Tiger\n");
            }
            break;
            case 7:
            {
                printf("Year of Rabbit\n");
            }	
			break;
            case 8:
            {
                printf("Year of Dragon\n");
            }
                break;
            case 9:
            {
                printf("Year of Snake\n");
            }	
            break;
            case 10:
        	{
                printf("Year of Horse\n");
            }
            break;
            case 11:
            {
                printf("Year of Goat\n");
			}
            break;                         
            default:
            {
                printf("Error");
            } 
		}
		if(((day>=21)&&(month==12))||((day<=20)&&(month==1)))
		{
    		printf("Zodiac sign - Capricorn");
		}
     	if(((day>=21)&&(month==1))||((day<=20)&&(month==2)))
		{
			printf("Zodiac sign - Aquarius");
    	}
     	if(((day>=21)&&(month==2))||((day<=20)&&(month==3)))
		{
    		printf("Zodiac sign - Fishes");
    	}
     	if(((day>=21)&&(month==3))||((day<=20)&&(month==4)))
		{
    		printf("Zodiac sign - Aries");
    	}
     	if(((day>=21)&&(month==4))||((day<=20)&&(month==5)))
		{
    		printf("Zodiac sign - Calf");
		}
		if(((day>=21)&&(month==5))||((day<=20)&&(month==6)))
		{
			printf("Zodiac sign - Twins");
		}
		if(((day>=21)&&(month==6))||((day<=20)&&(month==7)))
		{
    		printf("Zodiac sign - Crayfish");
    	}

		if(((day>=21)&&(month==7))||((day<=20)&&(month==8)))
		{
			printf("Zodiac sign - Lion");
    	}

    	if(((day>=21)&&(month==8))||((day<=20)&&(month==9)))
		{
    		printf("Zodiac sign - Virgo");
    	}

    	if(((day>=21)&&(month==9))||((day<=20)&&(month==10)))
		{
    		printf("Zodiac sign - Scales");
    	}

    	if(((day>=21)&&(month==10))||((day<=20)&&(month==11)))
		{
    		printf("Zodiac sign - Scorpion");
    	}

    	if(((day>=21)&&(month==11))||((day<=20)&&(month==12)))
		{
    		printf("Zodiac sign - Sagittarius");
    	}
}