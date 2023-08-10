using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Linq;

namespace Lab_6
{
    public partial class rent_b_id_cb : Form
    {
        List <regular_user> regular_Users= new List <regular_user> ();
        List <special_user> special_Users= new List <special_user> ();
        public rent_b_id_cb()
        {
            InitializeComponent();
            //Regular
            //Special
        }

        private void Add_user_button_Click(object sender, EventArgs e)
        {
            int id = Convert.ToInt32(user_id_tb.Text);
            string name = user_name_tb.Text;
            string Address = user_address_tb.Text;
            string type = user_type_cb.Text;

            if(type == "Regular")
            {
                regular_user ru1 = new regular_user(id, name, Address);
                regular_Users.Add (ru1);
            }
            else
            {
                special_user su1 = new special_user(id, name, Address);
                special_Users.Add (su1);
                dropbox.Items.Add(name);
            }

            user_type_book_cb.Items.Add(name);
            
        }

        private void show_user_Click(object sender, EventArgs e)
        {
           
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int id = Convert.ToInt32(book_id_tb.Text);
            string title = book_title_tb.Text;
            string author = book_author_tb.Text;
            string publisher = book_publisher_tb.Text;
            int quantity = Convert.ToInt32(book_quantity_tb.Text);
            string type = user_type_book_cb.Text;

            int flag = 0;
            foreach(special_user su1 in special_Users)
            {
                if(su1.name == type) { flag++; }
            }
            if(flag == 0)
            {
                MessageBox.Show("Insufficiant Rights");
            }
            else
            {
                book b = new book(id, title, author, publisher, quantity);
                foreach (special_user su1 in special_Users)
                {
                    su1.add_book(b);
                }
            }
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int id = Convert.ToInt32(book_id_tb.Text);
            string title = book_title_tb.Text;
            string author = book_author_tb.Text;
            string publisher = book_publisher_tb.Text;
            int quantity = Convert.ToInt32(book_quantity_tb.Text);
            string type = user_type_book_cb.Text;

            int flag = 0;
            foreach (special_user su1 in special_Users)
            {
                if (su1.name == type) { flag++; }
            }
            if (flag == 0)
            {
                MessageBox.Show("Insufficiant Rights");
            }
            else
            {
                book b = new book(id, title, author, publisher, quantity);
                foreach (special_user su1 in special_Users)
                {
                    su1.remove_book(b);
                }
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string type = dropbox.Text;
            foreach(special_user su1 in special_Users)
            {
                if (su1.name == type)
                {
                    int n = su1.b_count();
                    for(int i = 0; i<n; i++)
                    {
                        book b = su1.show_book(i);
                        string s = $"{b.id}\t{b.title}\t{b.author}\t{b.quantity}";
                        listbox.Items.Add(s);
                    }
                }
            }
        }
    }
}
