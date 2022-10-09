#include<stdio.h> 
#include<conio.h> 
int main() 
{ 
	char word[100]; 
	printf("Enter word: "); 
	scanf("%s",word);	
	int i,count=0; 
	for(i=0;word[i]!='\0';i++) 
		count++;		
 
	printf("\nSplitting word into characters:"); 
	for(i=0;i<count;i++)	
	printf("\n%c",word[i]); 
 
	getch(); 
	return 0; 
} 
