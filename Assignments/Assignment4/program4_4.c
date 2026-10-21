#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CheckVotingEligibility
//  Description   : Accept age and check if it is eligible for voting
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 21/10/2026
//
//////////////////////////////

void CheckVotingEligibility(int iAge){

    if(iAge < 0){
        printf("Invalid age\n");
    }
    else if( iAge >= 18){
        printf("Eligible for Voting\n");
    }
    else{
        printf("Not eligible for Voting\n");
    }
    
}

int main(){
    int iAge = 0;

    printf("Enter your age : ");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}