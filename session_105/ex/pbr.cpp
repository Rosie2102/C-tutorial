#include <iostream>

using namespace std;

void figure_me_out(int& a, int b, int& c) {
    cout <<  a << " " << b << " " << c << endl;
    a++;
    b++;
    c++;
    cout <<  a << " " << b << " " << c<< endl;
}


void compute_coins (int coin_value, int& num, int& amount_left) {
    // TO Do
    num = amount_left / coin_value ;
    amount_left = amount_left - num * coin_value;
}

void exercise_1 () {

    int x, y, z;
    x = 5;
    y = 11;
    z = 101;

    figure_me_out(x, y, z);
    cout <<  x << " " << y << " " << z << endl;
}

void exercise_2 () {
    int amount = 95; // in cents
    int number_of_quarter_coins = 0;
    int number_of_dime_coins = 0;
    int number_of_penny_coins = 0;

    int quarter_coin_value = 25;
    int dime_coin_value = 10;
    int penny_coin_value = 1;

    compute_coins(quarter_coin_value, number_of_quarter_coins, amount);
    compute_coins(dime_coin_value, number_of_dime_coins, amount);
    compute_coins(penny_coin_value, number_of_penny_coins, amount);

    cout << number_of_quarter_coins << " quaters, " << number_of_dime_coins << " dimes, " << number_of_penny_coins << " pennies" << endl;
}

int main () {
    
    exercise_2();
    return 0;
}

