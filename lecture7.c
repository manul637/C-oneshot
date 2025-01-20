#include<stdio.h>


// ENTER PRICES OF THREE ITEMS  AND PRINT FINAL COST WITH GST 

// int main() {
//     float prices[3];
//     scanf("%f", &prices[0]);
//     scanf("%f", &prices[1]);
//     scanf("%f", &prices[2]);

//     printf("total price 1: %f \n" , prices[0] + (0.18 * prices[0]));
//     printf("total price 2: %f \n" , prices[1] + (0.18 * prices[1]));
//     printf("total price 3: %f \n" , prices[2] + (0.18 * prices[2]));

//     return 0 ;

// }




// int main() {

//      int love = 100;
//      int *ptr= &love;

//      printf(" output = %u" , *ptr);

//     return 0;

// }


// print all the number of adhar .// TRAVERSE AN ARRAY


// int main(){

// int adhaar[5] ;

// int *ptr = &adhaar[0];

// //FOR INPUT 

// for( int i = 0; i<5 ; i++){
//     printf("%d index :  " , i);
//     scanf("%d" , (ptr +1));     // (ptr +1) ----->&adhaar[i]


// }

// // FOR OUTPUT

// for(int i=0 ; i<5 ; i++){
//     printf("%d index : %d\n " , i , *(ptr +1));      // *(ptr +1 )----> adhaar[i]
// }

// return 0;
// }


// ARRAY AS AN FUNCTION ARGUMENT 


// int printNumbers( int arr[] , int n);


// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printNumbers(arr , 6);
//   return 0;
// }

// int printNumbers( int arr[] , int n ){
//     for (int i=0 ; i<n ; i++ ){
//         printf("%d \t" , arr[i]);
//     }

// }


// 2 d matrix   

// int main(){
//     int marks[2][3] ; // _  _  _ / _  _  _
    
//     marks[0][0]= 90;
//     marks[0][1]= 92;
//     marks[0][2]= 99;


//     marks[1][0]= 98;
//     marks[1][1]= 96;
//     marks[1][2]= 91;


//     printf("%d" , marks[0][0]);

//     return 0;
    
//     }



// WAF TO COUNT NUM OF ODD NUMBE RIN AN ARRAY

// int countOdd(int arr[] , int n );

// int main(){
    
//    int arr[8] = { 1, 27 , 38, 71, 96, 57, 61};
   

//    printf(" number of odd number is : %d " ,countOdd(arr ,8) );
   
     

//     return 0;
// }

// int countOdd(int arr[] , int n ){
//       int x = 0;
    
//     for(int i =0 ; i < n ; i++ ){
//         if( arr[i] % 2 !=0){
//             x++;
//         }
//     }
//     return x ;

// }



// WAF TO REVERSE AN ARRAY

int reverse( int arr[] , int n);
void printArr( int arr[] , int n);

int main (){
    int arr[] = { 3 , 6, 8, 5, 7, 9, 2, 9};

    reverse(arr , 8);
    return 0;
}

int printArr( int arr[] , int n){
    
}

int reverse(int arr[] , int n){

    for(int i = 0 ; i < n/2 ; i++){
        int firstval = arr[i];
        int secondval = arr[n-i-1];
        arr[i] = secondval;
        arr[n-i-1] = firstval;

    
}