#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    char ch;
    clock_t start,end;
    int i,n1,n2,a=0,b=0,again,con;
    double cpu_time_used;
    printf("\033[0;36m \t\t\t\t\t\tWelcome To this game.\033[0m\n");
    printf("\n\033[0;33mRules:\033[0m\n");
    printf("\033[0;32mEach level from level one to next level,step number will multiply by that level number so choose destination carefully!\033[0m\n");
    printf("\n\033[0;35mExample:This means in level 3 your steps will be 3 per step  and so on.\033[0m\n");
    printf("\033[0;32mLevel 1\n\033[0m");
    printf("Now your steps will be 1 step\n");
    printf("\033[0;32mFinal Destination will be: \033[0m");
    scanf("%d %d",&n1,&n2);
    for(i=1;; i++)
    {
        start=clock();

        while(1)
        {
            ch=getch();
            switch(ch)
            {

            case 'w':
            case 'W':
                ++a;
                printf("\033[0;36mYour current location is now : %d %d\033[0m\n",a*i,b*i);
                break;
            case 'a':
            case 'A':
                --b;
                printf("\033[0;36mYour current location is now : %d %d\033[0m\n",a*i,b*i);
                break;
            case 's':
            case 'S':
                --a;
                printf("\033[0;36mYour current location is now : %d %d\033[0m\n",a*i,b*i);
                break;
            case 'd':
            case 'D':
                ++b;
                printf("\033[0;36mYour current location is now : %d %d\033[0m\n",a*i,b*i);
                break;

            }
            if(a*i==n1&&b*i==n2)
            {
                printf("\033[0;31mGame Over.\033[0m");
                break;
            }
        }
        end=clock();
        cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
        printf("\n\033[0;33mCPU Time used to finish the game : %f\033[0m\n",cpu_time_used);


        printf("\n\033[0;36mDo you want to go to next level?\nSay 0 to exit or 1 to keep going :\033[0m");
        scanf("%d",&again);

        if(again!=0)
        {
            a=0,b=0;
            printf("\n\033[0;32m level %d \033[0m\n",i+1);
            printf("Now your steps will be %d steps\n",i+1);
            printf("\033[0;32mFinal Destination will be: \033[0m");
            scanf("%d %d",&n1,&n2);
            printf("\033[0;31mDid you choose your final destination correctly?\033[0m\n");
            printf("\033[0;31mIf not the game will not end and this will be your punishment.\033[0m\n");
            printf("Continue? 0 or 1\n");
            scanf("%d",&con);
            if(con==1)
            {
                continue;
            }
            else
            {
                break;
            }

            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}
