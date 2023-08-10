using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace student_info
{
    class student
    {
        public string name;
        public int id;
        public string section;

        public student (string _name, int _id, string _section)
        {
            name = _name;
            id = _id;
            section = _section;
        }

        public student ()
        { }
    }
}
