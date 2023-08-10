using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bonus_Assignment_210042106
{
    class Teacher
    {
        // defining Attributes
        public string name;
        public string dept;
        public int weekly_class_hr;
        public int book;

        //defining Constructors
        public Teacher(string aname, string adept, int class_hr, int bookno)
        {
            name = aname;
            dept = adept;
            book = bookno;

        }
        public Teacher() 
        {
            
        }

        //defining common attributes
        

        public string isauthor()
        {
            if (book > 0) 
                return $"Published Total {book} books";
            else 
                return $"Published no books";
        }

        public int chember()
        {
            if (dept == "CSE")
            {
                return 501;
            }
            else if (dept == "EEE")
            {
                return 401;
            }
            else
            {
                return 101;
            }
        }
    }
}
