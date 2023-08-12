using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_Task_1_ID_106
{
    internal class student
    {
        public int id { get; set; }
        public string name { get; set; }
        public int age { get; set; } 
        public string blood_group { get; set; }
        public string department { get; set; }

        private List<grades> _grades = new List<grades>();

        public student(int id, string name, int age, string blood_group, string department)
        {
            this.id = id;
            this.name = name;
            this.age = age;
            this.blood_group = blood_group;
            this.department = department;
        }

        public void add_grade(grades grade)
        {
            _grades.Add(grade);
        }

        public double avg_gpa()
        {
            double total = 0;
            foreach(grades g in _grades)
            {
                total += g.gpa;
            }
            double avg = total / _grades.Count();
            return avg;
        }

        public grades low_gpa()
        {
            double l_gpa = 10;
            grades gg = new grades();
            foreach(grades g in _grades)
            {
                if(g.gpa < l_gpa)
                {
                    l_gpa = g.gpa;
                    gg = g;
                }
            }
            return gg;
        }
    }
}
