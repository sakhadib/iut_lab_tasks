using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RPS___Lab_2_learning
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void Clear_button_Click(object sender, EventArgs e)
        {
            Name_textBox.Clear();
            ID_textBox.Clear();
            Code_textBox.Clear();
            Marks_textBox.Clear();

            Name_textBox.Focus();
        }

        private void Submit_button_Click(object sender, EventArgs e)
        {
            string name = Name_textBox.Text;
            string id = ID_textBox.Text;
            string code = Code_textBox.Text;
            int marks = Convert.ToInt32(Marks_textBox.Text);

            string grade = "";
            if (marks >= 40)
            {
                grade = "Passed";
            }
            else
            {
                grade = "Failed";
            }

            string res = $"Result : {name}, ID {id} got {grade} in the course {code}";

            res_label.Text = res;
        }

        private void Marks_label_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
