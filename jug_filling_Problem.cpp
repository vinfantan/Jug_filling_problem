#include<conio.h>
#include<stdio.h>
#include<malloc.h>
int goalx,goaly;
int jx,jy,d=1,flag=0;
long long int level;
struct node{

  int x,y;
  long long int level;
  struct node *next;
  struct node *pre;
  int move;
};
void checkexist(struct node *mat);
void fun(void);
void printresult(struct node *last,int ch);
int checkequality(int x,int y);
void apply(struct node *mat);
struct node *start,*rear;


int main()
{
     int x,y,i,j;
     printf("enter capacity of jug X and Y :\n");
     scanf("%d%d",&jx,&jy);
     printf("enter initial  X and Y\n");
     scanf("%d%d",&x,&y);
     struct node *temp;
     temp=(struct node *)malloc(sizeof(struct node));
     temp->next=NULL; temp->level=0; temp->pre=NULL; temp->move=0;
      temp->x=x;
      temp->y=y;

    start=temp;
    rear=temp;
    printf("\nenter goal X and Y\n");
    scanf("%d%d",&goalx,&goaly);
    printf("\nenter number of level upto you want to check => ");
    scanf("%d",&level);
   // if(checkequality(init,goal,x,y))
     if(checkequality(x,y))
    {
        printf("********** match found *******************");
    }
     else{
        fun();
     }

}
void fun()
 {
     struct node *run;
        run=start;
     while(run!=NULL)
         {     apply(run);
               run=run->next;
         }
         if(flag==0)
         {
             printf("\n Not Possible");
         }
         else{
            printf(" Number of possible solution is  %d  ",flag);
         }
 }
void apply(struct node *mat)
{

         if(mat->level==level)
         {
             return;
         }
         struct node *mat1,*mat2,*mat3,*mat4,*mat5,*mat6,*mat7,*mat8,*mat9,*mat10;
         mat1=(struct node *)malloc(sizeof(struct node));
         mat1->next=NULL; mat1->level=mat->level+1; mat1->pre=mat; mat1->move=mat->move; mat1->x=mat->x; mat1->y=mat->y;

         mat2=(struct node *)malloc(sizeof(struct node));
         mat2->next=NULL; mat2->level=mat->level+1; mat2->pre=mat; mat2->move=mat->move; mat2->x=mat->x; mat2->y=mat->y;

         mat3=(struct node *)malloc(sizeof(struct node));
         mat3->next=NULL; mat3->level=mat->level+1; mat3->pre=mat; mat3->move=mat->move; mat3->x=mat->x; mat3->y=mat->y;

         mat4=(struct node *)malloc(sizeof(struct node));
         mat4->next=NULL; mat4->level=mat->level+1; mat4->pre=mat; mat4->move=mat->move; mat4->x=mat->x; mat4->y=mat->y;

         mat5=(struct node *)malloc(sizeof(struct node));
         mat5->next=NULL; mat5->level=mat->level+1; mat5->pre=mat; mat5->move=mat->move; mat5->x=mat->x; mat5->y=mat->y;

         mat6=(struct node *)malloc(sizeof(struct node));
         mat6->next=NULL; mat6->level=mat->level+1; mat6->pre=mat; mat6->move=mat->move;mat6->x=mat->x; mat6->y=mat->y;

         mat7=(struct node *)malloc(sizeof(struct node));
         mat7->next=NULL; mat7->level=mat->level+1; mat7->pre=mat; mat7->move=mat->move;mat7->x=mat->x; mat7->y=mat->y;

         mat8=(struct node *)malloc(sizeof(struct node));
         mat8->next=NULL; mat8->level=mat->level+1; mat8->pre=mat; mat8->move=mat->move; mat8->x=mat->x; mat8->y=mat->y;

         mat9=(struct node *)malloc(sizeof(struct node));
         mat9->next=NULL; mat9->level=mat->level+1; mat9->pre=mat; mat9->move=mat->move; mat9->x=mat->x; mat9->y=mat->y;

         mat10=(struct node *)malloc(sizeof(struct node));
         mat10->next=NULL; mat10->level=mat->level+1; mat10->pre=mat; mat10->move=mat->move; mat10->x=mat->x; mat10->y=mat->y;

     //RULE NO 1.
     if((mat1->x)<jx)                //x=>4 jx=>4
                             //y=>3 jy=>3
     {
         mat1->move=1;
         mat1->x=jx;
         if(checkequality(mat1->x,mat1->y))
         {
                 //printf("\nlevel=> %ld\n",mat1->level);
                 printf("\n ************************match  found**************************************");
                 printresult(mat1,1);
                 printf("\npree any key to continue");
                 getch();
            }
             else {
                   checkexist(mat1);
             }

     }
     // RULE NO.2
     if(((mat2->y)<jy))
     {
         mat2->move=2;
         mat2->y=jy;

                  if(checkequality(mat2->x,mat2->y))
         {
                // printf("\nlevel=> %ld\n",mat2->level);
                 printf("\n ************************match  found**************************************");
                 printresult(mat2,2);
                 printf("\npree any key to continue");
                 getch();
            }
             else {
                   checkexist(mat2);
             }

     }
     // RULE NO.3
     /*
     if(mat3->x>0)
     {
         mat3->x=mat3->x-d;
                  if(checkequality(mat3->x,mat3->y))
         {
                 printf("\nup  level=> %ld\n",mat3->level);
                 printf("\n ************************match  found**************************************");
                 printresult(mat3,3);
                 printf("\npree any key to continue");
                 getch();
            }
             else {
                   checkexist(mat3);
             }

     }
     // RULE NO.4
     if(mat4->y>0)
     {
         mat4->y=mat4->y-d;

                  if(checkequality(mat4->x,mat4->y))
         {
                 printf("\nup  level=> %ld\n",mat4->level);
                 printf("\n ************************match  found**************************************");
                 printresult(mat4,4);
                 printf("\npree any key to continue");
                 getch();
            }
             else {
                   checkexist(mat4);
             }

     }    */
     // RULE NO.5
     if((mat5->x)>0)
     {
         mat5->move=5;
         mat5->x=0;

                  if(checkequality(mat5->x,mat5->y))
         {
                 //printf("\nup  level=> %ld\n",mat5->level);
                 printf("\n ************************match  found**************************************");
                 printresult(mat5,5);
                 printf("\npree any key to continue");
                 getch();
            }
             else {
                   checkexist(mat5);
             }

     }
     // RULE NO.6
     if((mat6->y)>0)
     {
         mat6->move=6;
         mat6->y=0;
                  if(checkequality(mat6->x,mat6->y))
         {
                 //printf("\nlevel=> %ld\n",mat6->level);
                 printf("\n ************************match  found**************************************");
                 printresult(mat6,6);
                 printf("\npree any key to continue");
                 getch();
            }
             else {
                   checkexist(mat6);
             }

     }
     // RULE NO.7
     if(((mat7->x)+(mat7->y))>=jx && (mat7->y)>0)
     {
         mat7->move=7;
         (mat7->y)=(mat7->y)-(jx-(mat7->x));   //pour water from 3L jug into 4L jug until 4L jug will fill
         mat7->x=jx;

                  if(checkequality(mat7->x,mat7->y))
         {
                // printf("\nlevel=> %ld\n",mat7->level);
                 printf("\n ************************match  found**************************************");
                 printresult(mat7,7);
                 printf("\npree any key to continue");
                 getch();
            }
             else {
                   checkexist(mat7);
             }

     }
     // RULE NO.8
     if(((mat8->x)+(mat8->y))>=jy && (mat8->x)>0)
     {
         mat8->move=8;
         mat8->x=(mat8->x)-(jy-(mat8->y));  mat8->y=jy;

                  if(checkequality(mat8->x,mat8->y))
         {
                 //printf("\nlevel=> %ld\n",mat8->level);
                 printf("\n ************************match  found**************************************");
                 printresult(mat8,8);
                 printf("\npree any key to continue");
                 getch();
            }
             else {
                   checkexist(mat8);
             }

     }
     // RULE NO.9
     if(((mat9->x)+(mat9->y))<=jx && (mat9->y)>0)
     {
          mat9->move=9;
         mat9->x=(mat9->x)+(mat9->y); mat9->y=0;  //pour all water in 4L jug

                  if(checkequality(mat9->x,mat9->y))
         {
                 //printf("\nlevel=> %ld\n",mat9->level);
                 printf("\n ************************match  found**************************************");
                 printresult(mat9,9);
                 printf("\npree any key to continue");
                 getch();
            }
             else {
                   checkexist(mat9);
             }

     }
     // RULE NO.10
     if(((mat10->x)+(mat10->y)<=jy && (mat10->x)>0))
     {
         mat10->move=10;
         mat10->y=(mat10->x)+(mat10->y); mat10->x=0;

                 if(checkequality(mat10->x,mat10->y))
         {
                 //printf("\nlevel=> %ld\n",mat10->level);
                 printf("\n ************************match  found**************************************");
                 printresult(mat10,10);
                 printf("\npree any key to continue");
                 getch();
            }
             else {
                   checkexist(mat10);
             }


     }


}

void printresult(struct node *last,int ch)
 {
     flag++;
     struct node *run,*temp[level];
     long int i=0,j;
     run=last->pre;
     temp[i]=last; i++;
     while(run!=NULL)
     {
         temp[i]=run; i++;
         run=run->pre;
     }
     printf("\n\n");
     for(j=i-2;j>0;j--)
     {
            //if(temp[j]->move=='1'){ printf("\nUP");}
             if(temp[j]->move==1){ printf("\nrule no 1 => fill  %dL jug ",jx);}
            if(temp[j]->move==2){ printf("\nrule no 2 => fill %dL jug",jy);}
            if(temp[j]->move==3){ printf("\nrule no 3 => pour some water of %dL jug",jx);}
            if(temp[j]->move==4){ printf("\nrule no 4 => pour some water of %dL jug",jy);}
            if(temp[j]->move==5){ printf("\nrule no 5 => empty %dL jug",jx);}
            if(temp[j]->move==6){ printf("\nrule no 6 => empty %dL jug",jy);}
            if(temp[j]->move==7){ printf("\nrule no 7 => pour water from %dL jug into %dL jug until %dL jug will full",jy,jx,jx);}
            if(temp[j]->move==8){ printf("\nrule no 8 => pour water from %dL jug into %dL jug until %dL jug will full",jx,jy,jy);}
            if(temp[j]->move==9){ printf("\nrule no 9 => pour %dL jug into %dL jug",jy,jx);}
            if(temp[j]->move==10){ printf("\nrule no 10 => pour %dL jug into %dL jug",jx,jy);}
              //print(temp[j]->ss,x,y);
              printf("\n %d \t %d",temp[j]->x,temp[j]->y);

     }
             if(temp[j]->move==1){ printf("\nrule no 1 => fill  %dL jug ",jx);}
            if(temp[j]->move==2){ printf("\nrule no 2 => fill %dL jug",jy);}
            if(temp[j]->move==3){ printf("\nrule no 3 => pour some water of %dL jug",jx);}
            if(temp[j]->move==4){ printf("\nrule no 4 => pour some water of %dL jug",jy);}
            if(temp[j]->move==5){ printf("\nrule no 5 => empty %dL jug",jx);}
            if(temp[j]->move==6){ printf("\nrule no 6 => empty %dL jug",jy);}
            if(temp[j]->move==7){ printf("\nrule no 7 => pour water from %dL jug into %dL jug until %dL jug will full",jy,jx,jx);}
            if(temp[j]->move==8){ printf("\nrule no 8 => pour water from %dL jug into %dL jug until %dL jug will full",jx,jy,jy);}
            if(temp[j]->move==9){ printf("\nrule no 9 => pour %dL jug into %dL jug",jy,jx);}
            if(temp[j]->move==10){ printf("\nrule no 10 => pour %dL jug into %dL jug",jx,jy);}
         //print(temp[j]->ss,x,y);
          // printf("\n%d", temp[j]->move);
           printf("\n %d \t %d",temp[j]->x,temp[j]->y);
 }

void checkexist(struct node *mat)
{
         struct node *temp,*t;
        temp=start;
        while(temp!=NULL)
        {
            if((temp->x)==(mat->x) && (temp->y)==(mat->y))
            {
                return;
            }
            temp=temp->next;
        }
      rear->next=mat;
      rear=mat;
      return;
}

int checkequality(int x,int y)
{
    if(x==goalx && y==goaly)
    {
        return 1;
    }

    return 0;
}



