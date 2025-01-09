#include<stdio.h>

// void printHello();

// int main () {
//     printHello();
//     return 0;

// }

// void printHello() {
//     printf("hello!");
// }


// FUNCTION TO PRINT NAMASTE AND BONJOUR FOR INDIAN AND FRENCH RESPECTIVELY .

// void namaste();
// void bonjour();

// int main() {
//     char ch;

//     printf(" enetr f for french and i for indian :");
//     scanf("%c" , &ch);

//     if( ch == 'i') {
//         namaste() ;
//     } else if ( ch == 'f' ){
//         bonjour();
//     } else {
//         printf("error") ;
//     }
 
//     return 0;
// }


// void namaste(){
//     printf("Namaste \n");
// }

// void bonjour() {
//     printf("bonjour \n");
// }


//FUNCTION TO PRINT TABLE

// int sum(int a , int b);
// void printTable( int a);


// int main() {
//     int n;
//     printf("enter number :");
//     scanf("%d" , &n);

//     printTable(n);

//     return 0;
// }


// int sum(int x , int y) {
//     return x +y ;
// }

// void printTable(int n){
//     for(int i = 1 ; i<= 10 ; i++){
//         printf("%d \n" , n*i);
//     }
// }




//GST CALCULATOR :



// void calculatePrice(float value);

// int main(){
//     float value;
//     printf("enetr value :");
//     scanf("%f" , &value);

//     calculatePrice(value);


//     return 0;
// }

// void calculatePrice(float value) {
//     value = value + ( 0.18 * value);
//     printf(" final price is %f" , value);

// }



// SUM OF FIRST N NATURAL NUMBER  BY RECCURSION .


// int sum(int n);

// int main(){
//     printf("sum is : %d" , sum(5));


//     return 0;
// }

// int sum(int n){
//     if(n==1){
//         return 1;
//     }

//     int sumNm1 = sum(n-1);
//     int sumN = sumNm1 + n;
//     return sumN;
// }



//FACTORIAL OF N BY RECURSION FUNCTION 



// int fact(int n);

// int main(){
//     printf("fact is : %d", fact(5));

//     return 0;
// }

// int fact(int n){
//     if(n==0){
//         return 1;
//     }

//     int factNm1 = fact(n-1);
//     int fact = factNm1 * n;
//     return fact;
// }



// CELCIUS TO FARENHITE



// float convertTemp( float celcius);


// int main(){
//     float far = convertTemp(0);
//     printf(" temperatur in farenhite is : %f" , far);


//     return 0;

// }

// float convertTemp( float celcius){
//     float far = celcius * (9/5) + 32;
//     return far;

// }



//CALCULATE PERCENTAGE 

// int calPercent( int maths , int chemistry , int pps);

// int main () {
//     int maths = 90;
//     int chemistry = 98;
//     int pps = 100;

//     printf(" percentage is : %d" , calPercent(maths , chemistry, pps));
// }

// int calPercent( int maths , int chemistry ,int pps){
//     return ((maths + chemistry + pps)/3);
// }





// FABIONACCI NUMBER BY RECURSSION 


// int fab(int n);

// int main(){
//     fab(6);

//     return 0;
// }

// int fab(int n){
//     if(n==0){
//         return 0;
    
//     }
//     if(n==1){
//         return 1;
//     }

//     int fabNm1 = fab(n-1);
//     int fabNm2 = fab(n-2);
//     int fabN = fabNm1 + fabNm2;
//     printf("fab of %d is %d " , n ,fabN);
//     return fabN;
// }