/*
Example 9: Write a C Program that classifies the user as child, 
young and old according to age.
Note (Under 18 -> Child, between 18-50 -> Young, over 50 -> Elderly)
*/

#include<stdio.h>
int main(){
int age;
printf("Enter your age:\n");
scanf("%d",&age);

if(age<18)
printf("CHILD\n");
else if(age>=18&&age<=40)
printf("YOUNG\n");
else
printf("ELDERLY\n");

return 0;	
	
}
