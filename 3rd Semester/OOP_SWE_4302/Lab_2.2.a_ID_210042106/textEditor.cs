using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_2._2.a_ID_210042106
{
    internal class textEditor
    {
        private buffer buffer;
        private file file;

        public textEditor(file file)
        {
            this.file = file;
            this.buffer = new buffer("");     //initiating buffer automatically. Not from user
        }

        public void open()
        {
            Console.WriteLine("Opening File " + file.getFileName());
            buffer = new buffer("Content of " + file.getFileName());
        }

        public void edit(string newcontent)
        {
            Console.WriteLine("Editing Content...");
            buffer = new buffer(newcontent);
        }

        public void save()
        {
            Console.WriteLine("Saving chanes to file " + file.getFileName());
        }

        public void close()
        {
            Console.WriteLine("Closing file :" + file.getFileName());
            buffer = null;
        }

        public string getContent()
        {
            return buffer.getContent();
        }
    }
}
