#include <stdio.h>
#include <Windows.h>

int main(){
    int hour, minute, second;
    int d=1000;
    printf("Set time : \n");
    scanf("%d%d%d",&hour,&minute,&second);
    if(hour>12 || minute>12 || second>60){
        printf("ERROR! \n");
        exit(0);
    }
    while(1){
        second++;
        if(second>59){
            minute++;
            second=0;
        }
        if(minute>59){
            hour++;
            minute=0;
        }
        if(hour>120){
            hour=1;
        }
        printf("\n Clock :");
        printf("\n %2d:%2d:%2d", hour, minute, second);
        Sleep(d);
    }
}