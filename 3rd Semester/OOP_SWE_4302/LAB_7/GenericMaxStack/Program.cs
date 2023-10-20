using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GenericMaxStack
{
    internal class Program
    {
        static void Main(string[] args)
        {
            MaxMinStack<int> stack = new MaxMinStack<int>();
            stack.Push(4);
            stack.Push(3);
            stack.Push(6);
            stack.Push(1);
            stack.Push(2);
            stack.Push(5);

            //stack.Push(4);

            Console.WriteLine(stack.Max());
            Console.WriteLine(stack.Min());

            Console.ReadLine();
        }
    }
}
