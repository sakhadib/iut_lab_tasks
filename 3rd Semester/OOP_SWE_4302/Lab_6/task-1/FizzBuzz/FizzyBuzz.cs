using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FizzBuzz
{
    public class FizzyBuzz
    {
        public string GetFizzyBuzz(int n)
        {
            if(n % 3 == 0 && n % 7 == 0)
            {
                return "FizzBuzz";
            }
            else if (n % 3 == 0)
            {
                return "Fizz";
            }
            else if (n % 7 == 0)
            {
                return "Buzz";
            }
            else
            {
                return "Gotcha";
            }
        }
        public FizzyBuzz() { }
    }
}
