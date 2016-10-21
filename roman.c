 #include<stdio.h>
#include<string.h>

int digitValue(char);

int main(){

    char roman_Num[1000];
    int i=0;
    long int n =0;
   
    printf("Enter any roman number (Valid digits are I, V, X, L, C, D, M):  \n");
    scanf("%s",roman_Num);
   
    while(roman_Num[i]){
        
         if(digitValue(roman_Num[i]) < 0){
             printf("Invalid roman digit : %c",roman_Num[i]);
             return 0;
         }
            
         if((strlen(roman_Num) -i) > 2){
             if(digitValue(roman_Number[i]) < digitValue(roman_Num[i+2])){
                 printf("Invalid roman number");
                 return 0;
             }
         }

         if(digitValue(roman_Num[i]) >= digitValue(roman_Num[i+1]))
             n= n + digitValue(roman_Num[i]);
         else{
             n = n + (digitValue(roman_Num[i+1]) - digitValue(roman_Num[i]));
             i++;
         }
         i++;
    }
        
    printf("Its decimal value is : %ld",n);
   
    return 0;

}

int digitValue(char c){

    int value=0;

    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case 'D': value = 500; break;
         case 'M': value = 1000; break;
         case '\0': value = 0; break;
         default: value = -1; 
    }

    return value;
}
