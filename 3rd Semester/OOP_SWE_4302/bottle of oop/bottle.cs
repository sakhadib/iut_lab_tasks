using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bottle_of_oop
{
    public class bottle
    {

        int number_of_bottles = 99;

        public bottle(int number_of_bottles)
        {
            this.number_of_bottles = number_of_bottles;
        }

        public bottle()
        {

        }


        public string verse(int num_of_current_verse)
        {

            string my_verse = "";
            switch (num_of_current_verse)
            {
                case 0: 
                    my_verse = "No more bottles of milk on the wall, no more bottles of milk.\n" +
                        "Go to the store and buy some more, " + number_of_bottles + " bottles of milk on the wall.\n";
                    break;

                case 1: 
                    my_verse = "1 bottle of milk on the wall, 1 bottle of milk.\n" +
                        "Take it down and pass it around, no more bottles of milk on the wall.\n";
                    break;

                case 2: 
                    my_verse = "2 bottles of milk on the wall, 2 bottles of milk.\n" +
                        "Take one down and pass it around, 1 bottle of milk on the wall.\n";
                    break;

                default:
                    my_verse = num_of_current_verse + " bottles of milk on the wall, " + num_of_current_verse + " bottles of milk.\n" +
                            "Take one down and pass it around, " + (num_of_current_verse - 1) + " bottles of milk on the wall.\n";
                    break;
            };

            return my_verse;
        }

        public string verses(int min, int max)
        {
            string ret = "";

            for(int i=max; i>= min; i++)
            {
                ret += verse(i);
            }

            return ret;
        }

        /*public string song()
        {
            string ret = "";
            for (int i = 99; i >= 0; i++)
            {
                ret += verse(i);
            }

            return ret;
        }*/
    }
}
