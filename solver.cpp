#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace std;
using namespace std::complex_literals;

using namespace solver;



        RealVariable operator+(const RealVariable& number1, const RealVariable& number2)
        {
            
            return number1;
        }

        RealVariable operator/(const RealVariable& number1, const RealVariable& number2)
        {
            RealVariable ans;
            return ans;
        }

        //sub oprions

        RealVariable operator- (const RealVariable& number1, const RealVariable& number2)
        {
            RealVariable ans;
            return ans;
        }

        //multiplay options

        RealVariable operator* (const RealVariable& number1, const RealVariable& number2)
        {
            RealVariable ans;
            return ans;
        }

        //compare options

        RealVariable operator== (const RealVariable& number1, const RealVariable& number2)
        {
            RealVariable ans;
            return ans;
        }

        //power options

        RealVariable operator^ (const RealVariable& number1, const int number2)
        {
            RealVariable ans;
            return ans;
        }


    

       //sum options 

      ComplexVariable operator+ (const ComplexVariable& number1, const ComplexVariable& number2)
      {
          ComplexVariable ans;
          return ans;
      }
     
      //division option

      ComplexVariable operator/ (const ComplexVariable& number1, const ComplexVariable& number2)
      {
          ComplexVariable ans;
          return ans;
      }

      //sub oprions

      ComplexVariable operator- (const ComplexVariable& number1, const ComplexVariable& number2)
      {
           ComplexVariable ans;
           return ans;
      }

      //multiplay options

      ComplexVariable operator* (const ComplexVariable& number1, const ComplexVariable& number2)
      {
          ComplexVariable ans;
          return ans;
      }

      //compare options

      ComplexVariable operator== (const ComplexVariable& number1, const ComplexVariable& number2)
      {
          
          return number1 ;
      }

      //power options

      ComplexVariable operator^ (const ComplexVariable& number1, const int number2)
      {
          ComplexVariable ans;
          return ans;
      
    };


