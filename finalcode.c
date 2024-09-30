#include <stdio.h>

int main() {
    printf("Welcome to our restraunt! We are happy to announce our special scheme of complimentary food! \n");
    printf("Please check if you are eligible or not... \n");

    int number;
    // Prompt the user to enter a number
   
    printf("Enter 1 if you have the special pass: ");
    scanf("%d", &number);

    // Check if they are eligible for the scheme 
    if (number == 1) {
        printf("Congragulations!!! you are eligible for the scheme\n");
        int couponcode;
        printf("Please enter your coupon code as 01 or 02: ");
        scanf("%d", &couponcode);
        if (couponcode == 01) {
            printf("You are having Megastar coupon! Now you can enjoy free food upto 4000/- rupees ...");
        } else {
            printf("You are having Star coupon. Now you can enjoy free food upto 2000/- rupees...");
        }
        
    } else {
        printf("Sorry! You are not eligible for this scheme... But you can still enjoy food from our restraunt on general entry");
    }

    return 0;
}
