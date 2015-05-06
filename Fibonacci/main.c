//
//  main.c
//  Fibonacci
//
//  Created by JIAN WANG on 5/6/15.
//  Copyright (c) 2015 JWANG. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("Enter nth:");
    scanf("%d", &n);

    if (n ==1) {
        printf("The first Fibonacci number is 0\n");
    } else if (n==2) {
        printf("The first Fibonacci number is 1\n");
        
    } else {
        int firstNumber = 0;
        int secondNumber = 1;
        int newNumber =0;
        
        int i =2;
        while (i < n) {
            newNumber = firstNumber + secondNumber;
            firstNumber = secondNumber;
            secondNumber = newNumber;
            i++;
        }
        
        printf("The %d th Fibonacci number is %d\n", n, newNumber);
    }
}
