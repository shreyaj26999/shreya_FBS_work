#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
//strlen() function
//Returns the length of the string(number of characters excluding null \0)
//Syntax:size_t strlen(const char *str);
int main()
{
	//strlen() function
    //Returns the length of the string(number of characters excluding null \0)
    //Syntax:size_t strlen(const char *str);
	printf("Use of strlen function: ");
	char s[5] = "Hello";
	printf("Length = %d\n",strlen(s));  //strlen(string)

    //Strcpy function
    //Copies one string to another.
    //Syntax:char* strcpy(char *dest,const char *src);
    printf("Use of strcpy() function: ");
    char s1[20],s2[20] = "Hello";
    strcpy(s1,s2);      //strcpy(destination,source)
    printf("Copied: %s\n",s1);
    
    //Strncpy function
    //Copies n characters from source to destination.
    //Syntax:char* strncpy(char *dest,const char *src,size_t n);
    printf("Use of strncpy() function: ");
    char s3[20],s4[]="Programming";
    strncpy(s3,s4,5);  //strncpy(destination,source,n)
    s3[5]='\0';
    printf("%s\n",s3);
    
    //strcat() function
    //Appends one string to another(adds at the end).
    //Syntax: char* strcat(char *dest,const char *src);
    printf("Use of strcat() function: ");
    char a[30] = "Hello";
    char b[] = "World";
    strcat(a,b);     //strcat(string1,string2)
    printf("%s\n",a);
    
    //strncat function
    //Appends n characters of one string to another.
    //Syntax: char* strcat(char *dest,const char *src,size_t n);
    printf("Use of strncat() function: ");
    char c[30] = "Hello";
    char d[] = "World!";
    strncat(a,b,5);    //strncat(string1,string2,n)
    printf("%s\n",a);
    
    //strcmp function
    //Compares two strings(case sensitve).returns 0 if equal.
    //Syntax: int strcmp(const char *str1,const char *str2);
    printf("Use of strcmp() function: ");
    printf("%d",strcmp("abc","abc"));  //strcmp("string1","string2")
    printf("\n");
    
    //strncmp function
    //Compares first n characters of two strings
	//Syntax:int strncmp(const char* str1,const char *str2,size_t n);
	printf("Use of strcmp() function: ");
	printf("%d",strncmp("abcd","abce",3));   //strcmp("string1","string2",n)
    printf("\n");
    
    //strchr function
    //Finds first occurance of a character in the string.
    //Syntax: char* strchr(const char *str,int ch);
    printf("Use of strchr() function: ");
    char *p = strchr("Hello",'l');
    printf("%s\n",p);
    
    //strrchr function
    //Finds last occurance of a character in the string.
    //Syntax: char *strrchr(const char *str,int ch);
    //printf("Use of strrchr() function: );
    //char *a = strchr("Hello",'l');
    //printf("%s\n",a);
    
    //strstr() function:
    //Finds first occurance of substring inside string.
    //Syntax:char* strstr(const char *haystack,const char *needle);
    printf("Use of strstr() function: ");
    char *str = strstr("Hello World","World");    //strstr("string","substring");
    printf("%s\n",str);
    
    //strtok() function:
    //Splits string into tokens.
    //Syntax:char* strtok(char *str,const char *delim);
    printf("Use of strtok() function: ");
    char string[] = "A,B,C";
    char *t = strtok(string,",");
    while(t)
    {
    	printf("%s\n",t);
    	t = strtok(NULL,",");
	}
	printf("\n");
	
	//strlwr() function
	//Converts a string to lowercase.
	//Syntax:char* strlwr(char *str);
	printf("Use of strlwr() function : ");
	char uppercase[] = "HELLO";
	printf("%s\n",strlwr(uppercase));  //strlwr(string);
	
	
	//strupr() function:
	//Converts string to uppercase.
	//Syntax:char* strupr(char *str);
	printf("Use of strupr() function : ");
	char lowercase[] = "HELLO";
	printf("%s\n",strupr(lowercase));    //strupr(string);
	
	//strrev() function: 
	//Reverse a string.
	//Syntax:char* strrev(char *str);
	printf("Use of strrev() function : ");
	char rev[]= "Firstbit";
	printf("%s\n",strrev(rev));         //strrev(string)
	
	//strdup() function:
	//Duplicates a string(allocates new memory).
	//printf("Use of strdup() function: ");
	//char *dup = strdup("Hello");
	//printf("%s\n",dup);
	//free(dup);
	
	//memset() function:
	//Fits memory with a constant byte.
	//Syntax:void* memset(void *ptr,int value,size_t n);
	printf("Use of memset() function: ");
	char set[10];
	memset(set,'*',5);
	set[5] = '\0';
	printf("%s\n",set);
	
	//memcpy() function:
	//Copies memory block(including strings)
	//Syntax: void *memcpy(void *dest,const void *src,size_t n);
	printf("Use of memcpy() function: ");
	char src[] = "Hello";
	char dest[10];
	memcpy(dest,src,6);
	printf("%s\n",dest);
	
	//memmove() function:
	//Copies memory safely even in overlapping.
	//Syntax: void* memmove(void *dest,const void *src,size_t n);
	printf("Use of remmove() function: ");
	char mem[] = "HelloWorld";
	memmove(mem+2,mem,5);
	printf("%s\n",mem);
	
	//memcmp() function:
	//Compares the first n bytes of two memory blocks(arrays,strings,structures).
	//Syntax:int memcmp(const void *ptr1,const void *ptr2,size_t n);
	printf("Use of memcmp() function: ");
	char stringg1[]="Firstbit";
	char stringg2[]="Solutions";
	int result = memcmp(stringg1,stringg2,5);
	if(result == 0)
	{
		printf("Both memory blocks are equal.\n");
	}
	else if(result > 0)
	{
		printf("stringg1 is greater than stringg2.\n");
	}
	else
	{
		printf("stringg1 is smaller than stringg2.\n");
	}
	
	
	//strerror() function:
	//Returns a human readable string(error message)corresponding to a given error number(error no).
	//Syntax: char* strerror(int errnum); 
	FILE *fp = fopen("a.txt","r");
	if(fp == NULL)
	{
		printf("Error number: %d\n",errno);
		printf("Error message: %s\n",strerror(errno));
	}
}