#include<stdio.h>

main()
{
   FILE *p;
   char data[100];

   p = fopen("C:/c language task/utsav.txt","a");

   if(p == NULL){
   	    printf("File could not open");
   }	
   else{

        printf("Enter Data");
        gets(data);
        fputs("\n",p);
        fputs(data,p);
        printf("Data Add Sucessfull....");

   }
   fclose(p);
   printf("\n===============\n");
   p = fopen("C:/c language task/utsav.txt","r");
   if(p == NULL){
   	    printf("File could not open");
   }	
   else{

        while(fgets(data,20,p) != NULL)
        {
        	printf("%s",data);
		}
   }
   fclose(p);

}
