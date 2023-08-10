using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace lab_5
{
    internal class file
    {
        public string name;
        public string content;
        public double size;
        public bool is_editable;

        public file(string _name, string _con, bool _is_editable)
        {
            name = _name;
            content = _con;
            size = System.Text.Encoding.UTF8.GetByteCount(_con);
            is_editable = _is_editable;
        }

        public file()
        {

        }

        public double show_size()
        {
            return size;
        }
    }
}
