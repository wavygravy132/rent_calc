#include <stdlib.h>
#include <stdio.h>

struct rent_payments
{
    double vairo_pay;
    double ask_dad;
};

void calc_payments(double rent, double electric, struct rent_payments *a)
{
    double electric_conner_preston_zach = electric / 3;
    double conner_zach_rent = (rent / 3) - 10;
    double preston_rent = (rent / 3) + 20;

    a->ask_dad = conner_zach_rent + preston_rent + 2 * electric_conner_preston_zach; //dad pays me rent plus conner and my portions of electric
    a->vairo_pay = conner_zach_rent + preston_rent - electric_conner_preston_zach;   //zach pays his portion of electric through this via vairo portal
}

void print_payments(double rent, double electric)
{
    struct rent_payments payments;
    struct rent_payments *payments_ptr = &payments;
    calc_payments(rent, electric, payments_ptr);
    printf("ask dad $%f\n", payments.ask_dad);
    printf("pay vairo $%f\n", payments.vairo_pay);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("please enter valid args\n");
        return -1;
    }
    print_payments(strtod(*(argv + 1), NULL), strtod(*(argv + 2), NULL));

    return 0;
}