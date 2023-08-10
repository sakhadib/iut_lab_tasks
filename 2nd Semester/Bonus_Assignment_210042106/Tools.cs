using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bonus_Assignment_210042106
{
    public static class Tools
    {
        public static int l = 1;
        public static int p = 1;
        public static void greet()
        {
            Console.WriteLine("\n\tWelcome To this Console App\n");
        }

        public static void bye()
        {
            Console.WriteLine("\n\n\tGoodby GoodMan\n");
        }

        public static void lec_info()
        {
            Console.WriteLine($"\n\n\tNow presenting Lecturer - {l} Info\n");
            l++;
        }

        public static void prof_info()
        {
            Console.WriteLine($"\n\n\tNow presenting Professor - {p} Info\n");
            p++;
        }


    }
}
