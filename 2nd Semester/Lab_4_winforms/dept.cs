using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace student_info
{
    class dept
    {
        public List<student> students = new List<student>();

        public int code;
        public string name;

        public dept(int _code, string _name)
        {
            code = _code;
            name = _name;
        }
        public dept ()
            { }


        public void add_student(string sname, int sid, string ssec)
        {
            student s = new student(sname, sid, ssec);
            students.Add(s);
        }

        public int scount()
        {
            return students.Count();
        }

        public student show(int index)
        {
            student s = students[index];
            return s;
        }

    }
}
