#include <stdio.h>
#include <string.h>
int toint(char []);
int main()
{
    char str[20];
    printf("Enter a String : ");
    gets(str);
    int len = strlen(str);
    int h,m,s;
   char *token;

   token = strtok(str, " :");
   do
   {
      printf("token: \"%s\"\n", token);
      int res=toint(token);
      printf("Int %d\n",res);
      if(h==NULL){
          h=res;
      }
      else if(m==NULL & h!=NULL){
          m=res;
      }
      else{
          s=res;
      }
   }
   while (token = strtok(NULL, " :"));
   /*printf("hour %d\n",h);
   printf("min %d\n",m);
   printf("sec %d\n",s);*/
   long long int t=(h*3600)+(m*60)+s;
   printf("Total seconds =  %lld\n",t);
   return 0;
}
int toint(char str[])
{
    int len=strlen(str);
    int i, num=0;
 
    for (i=0;i<len;i++)
    {
        num=num+((str[len-(i+1)]-'0')*pow(10, i));
    }
 
   return num;
}