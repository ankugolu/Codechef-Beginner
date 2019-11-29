//PROBLEM NAME:-ATM
//PROBLEM CODE:-HS08TEST



//PROBLEM STATEMENT:-

//Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.


//Input:-

//Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.

//Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.


//Output:-Output the account balance after the attempted transaction, given as a number with two digits of precision. If there is not enough money in the account to complete the transaction, output the current bank balance.



//MY SUBMISSION:-

//Programming Language Used:- "C"

#include<stdio.h>

int main(void)
{
	int x;
	float y;
	scanf("%d %f",&x,&y);
    if((x+0.50)<=y)
    {
        if(x%5==0)
            printf("%.2f",(y-x-0.50));
        else
            printf("%.2f",y);
    }
    else
        printf("%.2f",y);
	return 0;
}