#include<stdio.h>
int main(){
    int input,i;
    printf("Enter the range upto which prime numbers has to be found");
    scanf("%d",&input);
    int prime[input+1];

    //first initialize every element to be prime
    for(i=0;i<=input;i++){
        prime[i]=1;
    }

    for(int number=2;number*number<=i;number++){
        if(prime[number]==1){
            //update the multiples of number as not prime..
            for(int i=number*number;i<=input;i=i+number){
                prime[i]=0;
            }
        }
    }
    //if array elements initialized to 0 means not a prime and 1 means prime
    for(int iterator=2;iterator<=input;iterator++){
            if(prime[iterator]==1){
                printf("%d ",iterator);
            }
        }

}
