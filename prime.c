#include<stdio.h>
#include<stdbool.h>
#include<math.h>  //for sqrt

void is_prime(int x){

    if(x == 0 || x == 1)
        printf("Number is not prime!\n");

    else
    {
        bool temp = true;

        for(int i = sqrt(x); i > 1; --i)
        {
            if(x % i == 0)
            {
                temp = false;
                break;
            }
        }
        if(temp)
            printf("Number is prime!\n");
        else
            printf("Number is not prime!\n");
    }
}

int main(){

    int x;
    char c;

    printf("Wanna play? [Y/N]: ");

    while(scanf("%c", &c))
    {
        if(c == 'Y' || c == 'y')
        {
            printf("Please enter an integer: ");
            scanf("%d", &x);

            is_prime(x);

            printf("Wanna play again? [Y/N]: ");
            scanf("%c", &c);
        }
        else break;
    }
    return 0;
}