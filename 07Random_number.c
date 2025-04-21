// Program : To print random numbers
 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 void main(){
    int randnum;
    srand(time(0));
    randnum=(rand()%10)+1;
    printf("The random number is %d\n",randnum);
 }
