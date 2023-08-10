using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab_9_winforms
{
    public partial class Login_form : Form
    {
        public Login_form()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string user_name = u_name_tb.Text;
            string password = pass_tb.Text;

            foreach(user u in utility.users)
            {
                if(u.username != user_name && u.password != password)
                {
                    MessageBox.Show("Wrong username or Password");
                }
                else
                {
                    DashBoard_form df = new DashBoard_form();
                    df.Show();
                    this.Hide();
                }
            }
        }

        private void label4_Click(object sender, EventArgs e)
        {
            Form1 f1 = new Form1();
            f1.Show();
            this.Hide();
        }
    }
}
