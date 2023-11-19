using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_2_ID_210052106
{
    internal class classroom
    {
        private teacher teacher;
        private student student;

        public classroom()
        {
            teacher = new teacher();
            student = new student();
        }

        public void start_class()
        {
            teacher.teach(student);
        }
    }
}
