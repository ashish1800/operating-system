#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
   int ArTime[20],BurTime[20];
   int i,least,count=0,t,n,plus=0;
   double WtTime=0,
TurnaroundTime=0,CompTime;
   int flag=0;
   float AvgWT,Avg_TAT;
   printf("\nEnter the total Number of Pricesses:\t");
   Scanf("%d",&n);
   System("clear");
   printf("\nEnter Details of %d Processes\n",n);
  int num;
   int Sumburst=0;
      for(i=0;i<n;i++)
      {
        A:printf("\nEnter Arrival Time:\t");
        Scanf("%d,"&ArTime[i]);
        if(ArTime[i]==0);
printf("you have enter ARRIVAL TIME as 0.\n\n");
   B:printf("nEnter a valid input:");
     printf("\n Press2:Enter again ARRIVAL TIME");
     printf("\n press2:to EXIT\n\n");
     printf("(:INPUT::");
     scanf("%d",&num);
     switch(num)
     {
      case1:goto A;
      break;
      case2:exit(0);
            default:
            printf("INVALID INPUT\n\n");
                goto B;
                break;
              }
             }
               printf("enter Burst time:\t")
               scanf("%d",&BurTime[i];

              sumburst=sumburst+BurTime[i];
              temp[i]=BurTime[i];
              temp[i}=burTime[i];
      }

       system("clear");
       BurTime[19]=999999;
       printf("\n\n\t\t::COMPLETION OF PROCESS::\n\n");
       printf("\nprocess\t Burst Time\tWaiting Time\tTurn AroundTime");
       int wt,TAT;
       for(t=0;count!=n;t++)
     {
        least=19;
        for(i=0;i<n;i++)
         {
          if((ArTime[i]<=t)&&(BurTime[i]>0))

         {
            least=i;
      }
      }
            BurTime[least]--;
            if(Burtime[least]==0)
      {
        count++;
        CompTime=t+1;
        if(count==1)
       {
        wt=WtTime;
        WtTime=WtTime+CompTime-ArTime[least]-temp[least];
        wt=WtTime-wt;
        AvgWT=AvgWT+wt;
        TAT=TurnAroundTime;
        TurnAroundTime=TurnAroundTime+CompTime-ArTime[least];
        TAT=TurnAroundTime -TAT;
        sleep(1);
        printf("\nP%d\t\t%d\t\t %d\t\t%d",(least+1),temp[least],wt,TAT);
      }
     else
      {
        flag++;
        plus=plus+2;
        wt=WtTime;
        wtTime=WtTime+CompTime-ArTime[least]-temp[least];
        wt=WtTime-wt+plus;
        AvgWT=AvgWT+wt;
        TAT=TurnAroundTime;
        TurnAroundTime=TurnAroundTime+CompTime-ArTime[least];
        TAT=TurnAroundTime-TAT+plus-1;
        Avg_TAT=Avg_TAT+TAT;
        sleep(1);
        printf("\np%d\t\t%d\t\t %d\t\t%d",(least+1),temp[least],wt,TAT);
      }
     }
      }
        int totalexecution=sumburst+(flag*2)+1;
        AvgWT=AvgWT/n;
        AVG_TAT+Avg_TAT/n;
        sleep(1);
        printf("\n\n\nTOATL TIME OF EXECUTION:%d",totalexecution);
        printf("\n\n||Average Waiting Time  :\t%if||\n",AvgWT);
        sleep(1);
        printf("||Average Turnaround Time:\t%||\n",Avg_TAT);
        return 0;
    }
      
