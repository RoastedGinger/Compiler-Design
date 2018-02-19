# include<stdio.h>
# include<conio.h>
void main()
 {
   char a[20],i=0;
   int b,c,flag=0;
   clrscr();
   printf("enter identifier to check");
   scanf("%s",&a);
   b=(int) a[i];
      if((b>=65 && b<=90) || (b>=97 && b<=122) || (b==95))
      {
	for(i=1;i<=20;i++)
	{
	  c=(int)a[i];
	 if((c==95) || (c>=48 && c<=57) || (c>=32 && c<=47))
	 {
	  printf("it cannot be used\n");
	  break;
	 }
	 else
	  flag=1;
       }
      }
      else
       printf("it cannot be used");
       if(flag==1)
       printf("it can be used");
   getch();
   }