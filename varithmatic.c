#include<iostream>
#include<stdio.h>

int menu(){
int n;
printf("Choose From the given menu");
printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5. Exit\t");
scanf("%d",&n);
return n;
}


void Addition(){
 int i,arr[50],n,c=0;
 printf("How many variables Do you want ? ");
 scanf("%d",&n);
 printf("The Addition of %d variables is  ",n);
 for(i=1;c!=n;i++){
  arr[i]=65+c;
  if(i%2==0)
   printf("+");
  else{
   printf("%c",arr[i]);
   c++;
  }
 }
 printf("\n");
}

void Substraction(){
 int i,arr[50],n,c=0;
 printf("How many variables Do you want ? ");
 scanf("%d",&n);
 printf("The Substraction of %d variables is  ",n);
 for(i=1;c!=n;i++){
  arr[i]=65+c;
  if(i%2==0)
   printf("-");
  else{
   printf("%c",arr[i]);
   c++;
  }
 }
 printf("\n");
}

void Multiplication(){
 int x,n;
  printf("How many variables Do you want ? ");
 scanf("%d",&n); 
 printf("The Multiply of x variables to the degree of %d is x^%d \n",n,n);
}

void Division(){
 int num,deno,i,arr[50],brr[50];
 printf("How many variables Do you want in Numerator and Denomenator ? ");
 scanf("%d%d",&num,&deno);
 printf("The Division of %d variables as Numerator and %d variables as denominator is  ",num,deno);
 for(i=0;i<num;i++){
   arr[i]=65+i;
   printf("%c",arr[i]);}
 printf("/");
 for(i=0;i<deno;i++){
   brr[i]=80+i;
   printf("%c",brr[i]);}
 printf("\n");
}


int main(){
 while(1){
 switch(menu()){
 case 1:
  Addition();
  break;
 case 2:
  Substraction();
  break;
 case 3:
  Multiplication();
  break;
 case 4:
  Division();
  break;
 case 5:
  exit(0);
 default:
  printf("Wrong key\n");
 }
 }
 return 0;
}


