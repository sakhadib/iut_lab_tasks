using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Web;

namespace Lab_6
{
    abstract class User
    {
        public int id;
        public string name;
        public string address;

        public User(int _id, string _name, string _Address)
        {
            id = _id;
            name = _name;
            address = _Address;
        }
    }

    class regular_user : User
    {
        List<book> r_user_bookArray = new List<book>();
        int Type = 2;
        public regular_user(int _id, string _name, string _address) : base(_id, _name, _address)
        {

        }

        public void rent_book(book b)
        {
            r_user_bookArray.Add(b);
        }

    }

    class special_user : User
    {
        List<book> s_user_bookArray = new List<book>();
        int Type = 1;
        public special_user(int _id, string _name, string _address) : base(_id, _name, _address)
        {

        }

        public void add_book(book b)
        {
            s_user_bookArray.Add(b);
        }

        public void remove_book(book b)
        {
            foreach(book _b in s_user_bookArray) 
            {
                if(b.title == _b.title )
                {
                    s_user_bookArray.Remove(_b);
                    break;
                }
            }
        }

        public int b_count()
        {
            int count = s_user_bookArray.Count;
            return count;
        }

        public book show_book(int i)
        {
            return s_user_bookArray[i];
        }
    }


}
