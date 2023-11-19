using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
/*            MyList<int> list = new MyList<int>();
            list.addItem(1);
            list.addItem(2);
            list.addItem(3);
            list.addItem(4);

            int p = list.getItem(2);
            Console.WriteLine(p);
            Console.WriteLine(list.size());
            Console.WriteLine(list.removeItem(0));
            Console.WriteLine(list.size());
            Console.WriteLine(list.getItem(0));*/

            MyList<Person> persons = new MyList<Person>();

            Person p1 = new Person("a", "dhaka", 12);
            Person p2 = new Person("b", "khulna", 20);
            Person p3 = new Person("c", "Rajshahi", 10);

            Student s1 = new Student("x", "dhaka", 20, "IUT");
            Student s2 = new Student("y", "khulna", 22, "KUET");

            persons.addItem(p1);
            persons.addItem(p2);
            persons.addItem(p3);
            persons.addItem(s1);
            persons.addItem(s2);

            Console.WriteLine(persons.getItem(3).Name);

            Console.ReadLine();
        }
    }
}
