//A - program to convert temperature into celcius or farenhite.

#include <stdio.h>
int main(){
    char x;
    float y;
    printf("Enter c for celsius and f for fahrenheit: ");
    scanf("%c",&x);
    if(x == 'c'){
        printf("Enter temperature in fahrenheit:");
        scanf("%f",&y);
        printf("Temperature in degree celsius is %.2f C",(y-32)*((float)5/(float)9));
    }
    else if(x == 'f'){
        printf("Enter temperature in celsius : ");
        scanf("%f",&y);
        printf("Temperature in fahrenheit is %.2f F",((9*y)/5)+32);
    }
    else{
        printf("The option entered is not available, please check and run again!");
    }
    return 0;

}