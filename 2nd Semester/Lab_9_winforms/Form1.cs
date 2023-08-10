using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace Lab_9_winforms
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            utility.load_users();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string name = name_tb.Text;
            string user_name = u_name_tb.Text;
            string password = pass_tb.Text;
            int count = password.Length;
            string retype_pass = re_pass_tb.Text;

            if(utility.users.Count > 0)
            {
                foreach (user u in utility.users)
                {
                    if (u.username == user_name)
                    {
                        
                        if (count >= 6)
                        {
                            if (password == retype_pass)
                            {
                                string path = "userid.txt";
                                StreamWriter sw = File.AppendText(path);
                                user uu = new user(user_name, name, password);
                                utility.users.Add(uu);
                                string ss = $"{user_name},{password},{name}";
                                sw.WriteLine(ss);
                                sw.Close();

                                Login_form lf = new Login_form();
                                lf.Show();
                                this.Hide();
                                
                            }
                            else
                            {
                                MessageBox.Show("Passwords do not match");
                            }
                            
                        }
                        else
                        {
                            MessageBox.Show("Password must be 6 or more characters");
                        }
                    }
                    else
                    {
                        MessageBox.Show("Username exists. Try another");
                    }
                }
            }
            else
            {
                
                string path = "userid.txt";
                StreamWriter sw = File.AppendText(path);
                user uu = new user(user_name, name, password);
                utility.users.Add(uu);
                string ss = $"{user_name},{password},{name}";
                sw.WriteLine(ss);
                sw.Close();

                Login_form lf = new Login_form();
                lf.Show();
                this.Hide();
            }
        }
    }
}
