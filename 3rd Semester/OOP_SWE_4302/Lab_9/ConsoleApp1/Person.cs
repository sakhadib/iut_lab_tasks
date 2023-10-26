using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class Person
    {
        public string Name { get; set; }
        public string address { get; set; }
        public int age { get; set; }

        public Person(string Name, string address, int age)
        {
            this.Name = Name;
            this.address = address;
            this.age = age;
        }
    }
}
