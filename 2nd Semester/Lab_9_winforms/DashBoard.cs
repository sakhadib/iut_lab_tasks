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
    public partial class DashBoard_form : Form
    {
        public DashBoard_form()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Login_form lff = new Login_form();
            lff.Show();
            this.Hide();
        }
    }
}
