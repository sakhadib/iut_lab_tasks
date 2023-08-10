using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_6
{
    internal class book
    {
        public int id;
        public string title;
        public string author;
        public string publisher;
        public int quantity;

        public book (int _id, string _title, string _author, string _pub, int _qtty)
        {
            id = _id;
            title = _title;
            author = _author;
            publisher = _pub;
            quantity = _qtty;
        }

        public void rent_book()
        {
            quantity--;
        }
    }
}
