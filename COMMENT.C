# include<stdio.h>
# include<conio.h>
void main()
{
  char comment[100];
  int i,j,flag=0,slag=0;
  printf("enter comment \n");
  gets(comment);
      for(i=0;i<=100;i++)
      {
       if(comment[i] == '/' && comment[i+1] == '/') {
       slag=1;
       printf("comment encountered in %d and %d index",i,i+1);
       break;
       }
	 else if(comment[i] == '/' && comment[i+1] == '*')
	      {

		   for(j=i+2;j<=100;j++)
		    {
		     if(comment[j] == '*' && comment[j+1] == '/')
		      {
			flag=1;
			printf("comment started from %d",i);
			printf("comment ended at %d ",j+1);
		      }
		    }
		  if(flag==1)
		  {
		  printf("its a comment\n");
		  goto x;
		  }
		  else
		  printf("its not comment\n");

	      break;
	      }
       }
	if(slag==1)
	printf("comment\n");
	else
	printf("not a comment");
 // printf(comment);
x :  getch();
}
