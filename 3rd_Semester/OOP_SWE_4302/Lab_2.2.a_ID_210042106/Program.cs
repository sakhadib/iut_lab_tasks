using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_2._2.a_ID_210042106
{
    internal class Program
    {
        static void Main(string[] args)
        {
            file file = new file("document.txt");
            textEditor textEditor = new textEditor(file);

            textEditor.open();
            Console.WriteLine("Initial Content : " + textEditor.getContent());

            textEditor.edit("updated Content.");
            Console.WriteLine("updated Content : "+ textEditor.getContent());

            textEditor.save();
            textEditor.close();

            Console.ReadLine();
        }
    }
}
