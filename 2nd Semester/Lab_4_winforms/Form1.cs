using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace student_info
{
    public partial class Form1 : Form
    {
        List<dept> depts = new List<dept>();





        public Form1()
        {
            InitializeComponent();
            info_listbox.Items.Add("ID \t NAME \t DEPT \t SECTION");
        }

        private void Dept_Add_button_Click(object sender, EventArgs e)
        {
            int code = Convert.ToInt32(DeptCode_Add_TB.Text);
            string name = Dept_Add_TB.Text;
            dept d = new dept(code, name);
            depts.Add(d);
            code_combobox.Items.Add(code);

            DeptCode_Add_TB.Clear();
            Dept_Add_TB.Clear();

        }

        private void Admit_button_Click(object sender, EventArgs e)
        {
            int code = Convert.ToInt32(code_combobox.Text);
            string name = stu_name_TB.Text;
            int id = Convert.ToInt32(stu_ID_TB.Text);
            string sec = stu_sec_TB.Text;

            foreach(dept d in depts)
            {
                if(d.code == code)
                {
                    d.add_student(name, id, sec);
                }
            }

            stu_name_TB.Clear();
            stu_ID_TB.Clear();
            stu_sec_TB.Clear();


        }

        private void show_button_Click(object sender, EventArgs e)
        {
            info_listbox.Items.Clear();
            info_listbox.Items.Add("ID \t NAME \t DEPT \t SECTION");
            int code = Convert.ToInt32(show_TB.Text);

            foreach(dept d in depts)
            {
                if (d.code == code)
                {
                    int count = d.scount();
                    for(int i=0; i<count; i++)
                    {
                        student s;
                        s = d.show(i);
                        string show = $"{s.id}\t{s.name}\t{d.name}\t{s.section}";
                        info_listbox.Items.Add(show);
                    }
                }
            }


















        }

        private void Clear_button_Click(object sender, EventArgs e)
        {
            info_listbox.Items.Clear();
            info_listbox.Items.Add("ID \t Name \t Dept \t Section");
        }
    }
}
