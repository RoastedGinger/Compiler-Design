#include <stdio.h>
#include <string.h>
const char * array[] = {
   "auto" ,	"break" ,	"case" ,	"char",
"const", 	"continue" ,	"default" ,	"do",
"double" ,	"else" 	,"enum" ,	"extern"
,"float" ,	"for" ,	"goto" ,	"if",
"int" ,	"long" ,	"register" ,	"return"
, "short" ,	"signed" ,	"sizeof" ,	"static"
, "struct" 	,"switch", 	"typedef" ,	"union"
   ,"unsigned" 	,"void" 	,"volatile" 	,"while"
};
#define n_array (sizeof (array) / sizeof (const char *))
int main(int argc, char **argv)
{
   char a[100],keywords[32] ={};
   int b,i=0,j=1,c,flag=0,z;
   printf("identify character\n");
   gets(a);
   b=(int)a[i];
   if(b>=32 && b<=64)
   {
       printf("the first character cannot start with number/symbol");
   }
   else{
       for(z=0;z<n_array;z++){
        if(strcmp(a,array[z])==0)
        {
           printf("keyword cannot be identifier\n");
           goto x;
        }    
       }
       
   while(a[j]!='\0')
       {
           c=(int)a[j];
          if((c>=32 && c<=47) || (c>=58 && c<=64)) {
              printf("symbol or keywords cannot be accepted in between\n");
              break;
          }
          else
              flag=1;
          j++;
          
       }
     }
   x:  if(flag==1)
         printf("accepted");
   }
