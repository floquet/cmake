// http://www.cplusplus.com/doc/tutorial/constants/

#include <iostream>
#include <cstdlib>  // contains EXIT_SUCCESS, EXIT_FAILURE
#include <cmath>    // M_PI

#define pi 3.14159
#define NEWLINE '\n'

int main ()
{

  double r = 5.0;
  double circle;

  const float pi_f = 3.14159265358979323846264338327950288419716939937510582097494;
  const double pi_d = 3.14159265358979323846264338327950288419716939937510582097494;
  const long double pi_l =3.14159265358979323846264338327950288419716939937510582097494;
  const char tab = '\t';

    circle = 2 * pi * r;
    std::cout << tab << "circumference = " << circle;
    std::cout << NEWLINE << NEWLINE;

    std::cout << "M_PI = " << M_PI << ": hex value = " << std::hexfloat << M_PI << std::defaultfloat << std::endl;
    std::cout << "pi_f = " << pi_f << ": hex value = " << std::hexfloat << pi_f << std::defaultfloat << std::endl;
    std::cout << "pi_d = " << pi_d << ": hex value = " << std::hexfloat << pi_d << std::defaultfloat << std::endl;
    std::cout << "pi_l = " << pi_l << ": hex value = " << std::hexfloat << pi_l << std::defaultfloat << std::endl;
    std::cout << "pi   = " << pi_l << ": hex value = " << std::hexfloat << pi   << std::defaultfloat << std::endl;

    return EXIT_SUCCESS;
}
