#include <stdio.h>
#include <string.h>
    int main()
    {
    int i=0;
        int length()
        {
        char s[1000];
        int i;
        printf("Enter a string: ");
        scanf("%s", s);
        for(i = 0; s[i] != '\0'; ++i);
        printf("Length of string: %d", i);
        return 0;
        }
        
        int copy()
        {
                char s1[100], s2[100], i;
        printf("Enter string s1: ");
        scanf("%s",s1);
        for(i = 0; s1[i] != '\0'; ++i)
        {
            s2[i] = s1[i];
        }
        s2[i] = '\0';
        printf("String s2: %s", s2);
        return 0;
    }
    
    	int concat()
    	{
    	char str1[50], str2[50], i, j;
  		 printf("\nEnter first string: ");
  		 scanf("%s",str1);
  		 printf("\nEnter second string: ");
   		scanf("%s",str2);
 for (i = 0; str1[i]!='\0'; i++);
 for (j = 0; str2[j]!='\0'; j++, i++)
  	{
  		str1[i] = str2[j];
  	}
  	str1[i] = '\0';
  	printf("\n String after the Concatenate = %s", str1);
   }
   
   			int compare()
   			{
   			char str1[30], str2[30];
   			int i;
   			printf("\nEnter two strings :");
   			scanf("%s",str1);
  			scanf("%s",str2);
  			 i = 0;
   			while (str1[i] == str2[i] && str1[i] != '\0')
     		 i++;
   			if (str1[i] > str2[i])
    		  printf("str1 > str2");
  			 else if (str1[i] < str2[i])
    		  printf("str1 < str2");
  			 else
   		   printf("str1 = str2");
 			  return (0);
   }
   
   
   	int reverse()
   	{
   char str[100], temp;
   int i, j = 0;
   printf("\nEnter the string :");
   scanf("%s",str);
   i = 0;
   j = strlen(str) - 1;
   while (i < j) 
   {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
   printf("\nReverse string is :%s", str);
   return (0);
}

printf("Enter choice 1-length 2-copy 3-concat 4-compare 5-reverse /n");
scanf("%d",&i);
switch(i)
{
case 1:length();
		break;
case 2:copy();
break;
case 3:concat();
break;
case 4:compare();
break;
case 5:reverse();
break;
default: printf("Error");
break;
}
}



   			
   
        
