#include <stdio.h>
#include<string.h>
int v[10];
void members()
{
    
    printf("Here is the list of the participants \n ");
    printf("1.BJP \n ");
    printf("2.BSP \n ");
    printf("3.congress \n ");
    
}
void vote(){
    int d;
      members();
      printf("now choose any one  ");
      scanf("%d",&d);
      switch (d)
      {
      case 1:
      {
        v[0]++;
        printf("you have sucessfully given your vote \n ");
      }
        /* code */
        break;
     case 2:
     {
        v[1]++;
        printf("you have sucessfully given your vote \n ");
     }
     break;
     case 3:
     {
        v[2]++; 
        printf("you have sucessfully given your vote \n ");    }
        break;
      
      default:printf("enter something valid \n ");
        break;
      }


}

void voters()
{

    int h;char n[50];char c[12];
    printf("you have entered into the voters mode  \n ");
    label:
    printf("enter your name \n ");
    scanf("%s",n);//%s is for string
    printf("enter your aadhar card number \n  ");
    scanf("%s",c);
  if(((strcmp(n,"rajneesh")==0) && (strcmp(c,"rajneesh123")==0))  || 
       ((strcmp(n,"harshit")==0) && (strcmp(c,"harshit1234")==0))||
       ((strcmp(n,"dipanshu")==0) && (strcmp(c,"dipanshu123")==0)) ||
       ((strcmp(n,"mudit")==0) && (strcmp(c,"mudit123456")==0)))
    {
        printf("you are eleigible to give vote \n ");
         vote();

    }
    else
    {
        printf("you are not eligible for voting \n");
    }
    printf("press 1 to continue this mode \t ");
    scanf("%d",&h);if((h==1))
    {goto label;}
    else
    {
        main();
    }
    
   
    
}

/// @brief 

/// @brief 

void result()
{
    
    int max=v[0];int m=0;
    for(int i=0;i<sizeof(v)/sizeof(v[0]);i++)
    {
        if(v[i]>=max)
        {
            max=v[i];
            m=i;
        }
    
    }
   
    printf("The name of  party \t  \t no of votes gained \n");
    printf("\t 1.BJP \t  \t  = \t %d \n ",v[0]);
    printf("\t 2.BSP \t  \t  = \t %d \n ",v[1]);
    printf("\t 3.congress\t  = \t %d \n ",v[2]);
     switch (m)
    {
    case /* constant-expression */0:
          printf("\n \n winner is BJP with max no of votes \n ");

        /* code */
        break;
        case 1: printf("\n \n winner is BSP with max no of votes \n  ");
        break;
        case  2:printf("\n \n winner is congress with max no votes \n ");
        break;
    
    default:
        printf("no one won");
        break;
    }
}
    
void main()
{
    int b=0;
    printf("Welcome to the Voting System \n ");
    label2:
    printf("for entering into the voter mode enter 1 \n ");
    printf("for entering into results enter 2 \n ");
    printf("press 3 for exit \n ");

    scanf("%d",&b);
    switch (b)
    {
    case /* constant-expression */1:
           voters();
        /* code */
        break;
    case 2:
        result();
        break;
        case 3:
           printf("\n\tThank you visiting our site. \n ");
        break;
    
    default:printf("enter something valid \n "); goto label2;
    }

    
}
