using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Student : Person
    {
        public string University { get; set; }

        public Student(string Name, string Address, int Age, string University) : base(Name, Address, Age)
        {
            this.Name = Name;
            this.address = Address;
            this.age = Age;
            this.University = University;
        }

        public void study()
        {
            Console.WriteLine("Student " + Name + " Studying");
        }

    }
}
