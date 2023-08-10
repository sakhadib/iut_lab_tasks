using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_6
{
    internal class rent
    {
        List <book> rent_books = new List <book> ();
        public int book_id;
        public int user_id;
        public int duration;

        public rent (book b, int _user_id)
        {
            book_id = b.id;
            user_id = _user_id;
        }
        
    }
}
