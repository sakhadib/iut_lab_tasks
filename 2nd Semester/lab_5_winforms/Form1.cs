using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Schema;

namespace lab_5
{
    public partial class Form1 : Form
    {
        List<file> files= new List<file>();
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int m = 0;
            string name = add_name_tb.Text;
            string type = Add_type_CB.Text;
            string content = Add_content_tb.Text;

            bool _type = false;
            if(type == "Editable")
            {
                _type = true;
            }
            else
                _type = false;

            file f = new file(name, content, _type);
            files.Add(f);
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int index=0;
            string name = rmv_name_tb.Text;
            for(int i=0; i<files.Count; i++) 
            {
                if (files[i].name == name) 
                {
                    index = i; 
                    break;
                }
            }
            files.RemoveAt(index);
            MessageBox.Show("Removed");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int index=0;
            string name = update_name_tb.Text;
            for (int i = 0; i < files.Count; i++)
            {
                if (files[i].name == name)
                {
                    index = i;
                    break;
                }
            }
            bool a = files[index].is_editable;
            if (a==false)
            {
                MessageBox.Show("READ ONLY");
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            int index = 0;
            string name = update_name_tb.Text;
            for (int i = 0; i < files.Count; i++)
            {
                if (files[i].name == name)
                {
                    index = i;
                    break;
                }
            }
            bool a = files[index].is_editable;
            if (a == true)
            {
                files[index].content = update_content_tb.Text;
            }
            else
            {
                MessageBox.Show("READ ONLY");
            }

        }

        private void button5_Click(object sender, EventArgs e)
        {
            int index = 0;
            string name = update_name_tb.Text;
            for (int i = 0; i < files.Count; i++)
            {
                if (files[i].name == name)
                {
                    index = i;
                    break;
                }
            }
            show_content_tb.Text = files[index].content;
            bool a = files[index].is_editable;
            feature_listbox.Items.Clear();
            feature_listbox.Items.Add("Sharable");
            if(a == true)
            {
                feature_listbox.Items.Add("Compressable");
                feature_listbox.Items.Add("Transllatable");
            }
            

        }

        private void button6_Click(object sender, EventArgs e)
        {
            int index = 1;
            double sizesum = 0;
            foreach (file f in files)
            {
                
                string name = f.name;
                string type;
                if(f.is_editable)
                {
                    type = "Editable";
                }
                else
                {
                    type = "Read Only";
                }
                double size = f.show_size();
                sizesum = sizesum + size;

                string s = $"{index}\t{name}\t{type}\t{size}";
                Sum_listbox.Items.Add(s);
                index++;
            }
            index = index - 1;

            label10.Text = $"Total File : {index}";
            label11.Text = $"Total Size : {sizesum}";
        }
    }
}
