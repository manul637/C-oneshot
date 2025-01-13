#include<stdio.h>


// SWAP TWO NUMBERS 

// void swap( int a ,int b);
// void _swap( int *a , int *b);


// int main(){
//     int x = 3 , y =7;
//     // int *m = 3 , *n= 7;

//     //  swap(x,y);
//     //  printf("x = %d y = %d \n" , x, y);


//      _swap(&x , &y);
//      printf("x = %d y = %d \n" , x, y); 
//     return 0;

// }

//Call by value

void swap (int a, int b){
    int t = a;
    a = b;
    b= t;
    printf("a = %d b = %d \n" , a , b);
}


//Call by reference 


void _swap( int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("a = %d b = %d \n" , *a , *b);
}





// FUNCTION TO CALCULATE THE SUM , PRODUCT AN DAVERAGE OF 2 NUMERS


void doWork( int a , int b , int *sum , int *prod, int *avg);

int main(){
    int a = 3 , b=2;
    int avg , sum , prod;
    doWork(a , b , &sum , &prod , &avg);

    printf("sum = %d \n product = %d \n average = %d " , sum , prod , avg);

    return 0;

}

void doWork(int a, int b, int *sum ,int *prod , int *avg){
       *sum = a +b;
       *avg = (a +b)/2;
       *prod = a*b;

    


}