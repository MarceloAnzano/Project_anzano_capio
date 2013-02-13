#include "project.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <stdint.h>
#include <sstream>

using namespace std;

project::project()
{
    //ctor
}

project::~project()
{
    //dtor
}

bool project::isPrime(int num)
{
    if(num == 0)
        return true;
    if (num==1)
        return false;
    num = abs(num);
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}

void project::multiples_of_3_and_5()
{
    int temp=0;
    for(int i = 0;i<1000;i++)
    {
        if(i%3==0||i%5==0)
        {
            temp = i+temp;
        }
    }
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"The sum of all multiples of 3 or 5 below 1000 is: ";
    cout<<temp<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
}
void project::even_fibonacci()
{
    long int x=0, y=1,z=0, sum=0;
    while(x<4000000)
    {
        x = y + z;
        z = y;
        y = x;

        if(x%2==0)
        {
            sum = sum + x;
        }
    }
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"The sum of the even-valued terms of the fibonacci sequence is: ";
    cout<<sum<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
}

void project::largest_prime_factor()
{
    int i=2, temp=0;
    uintmax_t n=600851475143;

    while(i<7000)
    {
        if(isPrime(i))
        {
            if(n%i==0)
            {
               if(i>temp)
                temp=i;
            }
        }
        i++;
    }
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"The largest prime factor of the number 600851475143 is: ";
    cout<<temp<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
}

void project::largest_palindrome_product()
{
    int answer = 0;

	for(unsigned int i = 999; i != 99; i--)
		for(unsigned int j = 999; j != 99; j--) {

			int product = i*j;
			stringstream mystr2;
			mystr2 << product;
			string mystr = mystr2.str();
			unsigned int length = mystr.length();
			bool check = true;
			for(unsigned int k = 0; k < length/2; k++)
				if(mystr[k] != mystr[(length-k)-1]) {

					check = false;
					break;

					}

				if(answer <= product && check)
					answer = product;
			}
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"The largest palindrome made from the product of two 3-digit numbers is: ";
	cout << answer << endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
}

void project::smallest_multiple()
{
    int n=1;
    while(n%2!=0||n%3!=0||n%4!=0||
          n%5!=0||n%6!=0||n%7!=0||
          n%8!=0||n%9!=0||n%10!=0||
          n%11!=0||n%12!=0||n%13!=0||
          n%14!=0||n%15!=0||n%16!=0||
          n%17!=0||n%18!=0||n%19!=0||n%20!=0)
    {
        n++;
    }
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: ";
    cout<<n<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
}

void project::sum_square_diff()
{
    int sq1=0, sq2=0, temp=0;
    for(int i =0;i<=100;i++)
    {
        temp = temp + i;
        sq1 = sq1 + (i*i);
        sq2 = (temp*temp);
    }
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: ";
    cout<<sq2-sq1<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
}

void project::_10001st_prime()
{
    int div =0, n=0, i=1;

    while(n<10001)
    {
        if(isPrime(i))
        {
            div = i;
            n++;
        }
        i++;
    }
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"The 10 001st prime number is: ";
    cout<<div<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
}

void project::largest_product_in_series()
{
    int product=0,n=0,prod=0,b=0,a=0,c=0,d=0,e=0;
    string number = "73167176531330624919225119674426574742355349194934"
                "96983520312774506326239578318016984801869478851843"
                "85861560789112949495459501737958331952853208805511"
                "12540698747158523863050715693290963295227443043557"
                "66896648950445244523161731856403098711121722383113"
                "62229893423380308135336276614282806444486645238749"
                "30358907296290491560440772390713810515859307960866"
                "70172427121883998797908792274921901699720888093776"
                "65727333001053367881220235421809751254540594752243"
                "52584907711670556013604839586446706324415722155397"
                "53697817977846174064955149290862569321978468622482"
                "83972241375657056057490261407972968652414535100474"
                "82166370484403199890008895243450658541227588666881"
                "16427171479924442928230863465674813919123162824586"
                "17866458359124566529476545682848912883142607690042"
                "24219022671055626321111109370544217506941658960408"
                "07198403850962455444362981230987879927244284909188"
                "84580156166097919133875499200524063689912560717606"
                "05886116467109405077541002256983155200055935729725"
                "71636269561882670428252483600823257530420752963450";
    while(n < 995 )
    {
        a=number[n];
        a=a-48;
        b=number[n+1];
        b=b-48;
        c=number[n+2];
        c=c-48;
        d=number[n+3];
        d=d-48;
        e=number[n+4];
        e=e-48;
        prod =a*b*c*d*e;
        if(prod>product)
        {
            product = prod;
        }
        n++;
    }
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"The greatest product of five consecutive digits in the 1000-digit number is: ";
    cout<<product<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
}

void project::special_pytho_triplet()
{
    int a = 0, b = 0, c = 0, sum = 1000, product;
     bool test = false;
     for (a = 1; a < sum / 3 && !test; a++)
     {
         for (b = a; b < sum / 2 && !test; b++)
         {
             c = sum - a - b;

             if ((a*a) + (b*b) == (c*c) )
             {
                 test = true;
                 product=a*b*c;
             }
         }
     }
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"The product of the Special Pythagorean Triplet is: ";
    cout<<product<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
}

void project::summation_of_primes()
{
    int i= 0;
    uintmax_t sum=0;
    while(i<2000000)
    {
        if(isPrime(i))
        {
            sum = sum + i;
        }
        i++;
    }
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"The sum of all the primes below two million";
    cout<<sum<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
}
