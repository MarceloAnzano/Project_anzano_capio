#ifndef PROJECT_H
#define PROJECT_H
#include <string>

using namespace std;

class project
{
    public:
        project();
        virtual ~project();

        void multiples_of_3_and_5(); //problem 1
        void even_fibonacci(); //problem 2
        void largest_prime_factor(); //problem 3
        void largest_palindrome_product(); //problem 4
        void smallest_multiple(); //problem 5
        void sum_square_diff(); //problem 6
        void _10001st_prime(); //problem 7
        void largest_product_in_series(); //problem 8
        void special_pytho_triplet(); //problem 9
        void summation_of_primes(); //problem 10
        void largest_product_grid();//problem 11
        void divisible_triangular_number(); //problem 12
        void largest_sum(); //problem 13
        void longest_collatz_sequence(); //problem 14
        void diophantine_reciprocals_a(); //problem 15
        void power_digit_sum(); //problem 16
        void number_letter_count(); //problem 17
        void max_path_sum_one(); //problem 18
        void counting_sundays(); //problem 19
        void factorial_digit_sum();//Problem 20
        void name_scores(); //Problem 21
        void first_1000_digit_fibonacci(); //Problem 22
        void truncable_primes(); //Problem 23
    protected:
    private:
        void sievefor23();
        bool isPrime(int);
        int countFactors(int);
        void seive(int n);
        int sumDigits(string);
        int getScore(string s);
};

#endif // PROJECT_H
