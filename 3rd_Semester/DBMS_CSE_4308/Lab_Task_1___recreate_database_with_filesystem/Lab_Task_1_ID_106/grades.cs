using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_Task_1_ID_106
{
    internal class grades
    {
        public int id { get; set; }
        public double gpa { get; set; }
        public int semester { get; set; }

        public grades(int id, double gpa, int semester)
        {
            this.id = id;
            this.gpa = gpa;
            this.semester = semester;
        }

        public grades() { }
    }
}
