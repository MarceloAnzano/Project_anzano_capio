#include <iostream>
#include <string>
#include <cstdlib>
#include "project.h"

using namespace std;

const string Problem[]={"Multiples of 3 and 5",
                        "Even Fibonacci numbers",
                        "Largest prime factor",
                        "Largest palindrome product",
                        "Smallest multiple",
                        "Sum square difference",
                        "10001st prime",
                        "Largest product in a series",
                        "Special Pythagorean triplet",
                        "Summation of primes","Exit"};

const int NUM_PROBLEMS=10;
const int EXIT=NUM_PROBLEMS+1;

int main()
{
    project proj;
    bool done = false;
    int i=0, ch=0;

    while (done==false)
    {
        system("cls");
        for(i=0; i<(NUM_PROBLEMS+1);i++)
           {
               cout<<(i+1)<<". "<<Problem[i]<<endl;
           }

        cout<<"choose problem: ";
        cin>>ch;

        switch(ch)
            {
                case 1:
                    proj.multiples_of_3_and_5();
                    break;
                case 2:
                    proj.even_fibonacci();
                    break;
                case 3:
                    proj.largest_prime_factor();
                    break;
                case 4:
                    proj.largest_palindrome_product();
                    break;
                case 5:
                    proj.smallest_multiple();
                    break;
                case 6:
                    proj.sum_square_diff();
                    break;
                case 7:
                    proj._10001st_prime();
                    break;
                case 8:
                    proj.largest_product_in_series();
                    break;
                case 9:
                    proj.special_pytho_triplet();
                    break;
                case 10:
                    proj.summation_of_primes();
                    break;
                case EXIT:
                    done=true;
                    break;
            }
        system("pause");
    }

return 0;
}
