namespace student_info
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.dept_add_label = new System.Windows.Forms.Label();
            this.DeptCode_add_label = new System.Windows.Forms.Label();
            this.Dept_Add_TB = new System.Windows.Forms.TextBox();
            this.DeptCode_Add_TB = new System.Windows.Forms.TextBox();
            this.Dept_Add_button = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.stu_ID_TB = new System.Windows.Forms.TextBox();
            this.stu_name_TB = new System.Windows.Forms.TextBox();
            this.Admit_button = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.stu_sec_TB = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.show_TB = new System.Windows.Forms.TextBox();
            this.show_button = new System.Windows.Forms.Button();
            this.info_listbox = new System.Windows.Forms.ListBox();
            this.Clear_button = new System.Windows.Forms.Button();
            this.code_combobox = new System.Windows.Forms.ComboBox();
            this.panel1 = new System.Windows.Forms.Panel();
            this.panel2 = new System.Windows.Forms.Panel();
            this.panel3 = new System.Windows.Forms.Panel();
            this.panel3.SuspendLayout();
            this.SuspendLayout();
            // 
            // dept_add_label
            // 
            this.dept_add_label.AutoSize = true;
            this.dept_add_label.BackColor = System.Drawing.Color.LightYellow;
            this.dept_add_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dept_add_label.Location = new System.Drawing.Point(52, 110);
            this.dept_add_label.Name = "dept_add_label";
            this.dept_add_label.Size = new System.Drawing.Size(131, 25);
            this.dept_add_label.TabIndex = 0;
            this.dept_add_label.Text = "Dept Name :";
            // 
            // DeptCode_add_label
            // 
            this.DeptCode_add_label.AutoSize = true;
            this.DeptCode_add_label.BackColor = System.Drawing.Color.LightYellow;
            this.DeptCode_add_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.DeptCode_add_label.Location = new System.Drawing.Point(52, 158);
            this.DeptCode_add_label.Name = "DeptCode_add_label";
            this.DeptCode_add_label.Size = new System.Drawing.Size(126, 25);
            this.DeptCode_add_label.TabIndex = 0;
            this.DeptCode_add_label.Text = "Dept Code :";
            // 
            // Dept_Add_TB
            // 
            this.Dept_Add_TB.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Dept_Add_TB.Location = new System.Drawing.Point(189, 110);
            this.Dept_Add_TB.Name = "Dept_Add_TB";
            this.Dept_Add_TB.Size = new System.Drawing.Size(261, 29);
            this.Dept_Add_TB.TabIndex = 1;
            // 
            // DeptCode_Add_TB
            // 
            this.DeptCode_Add_TB.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.DeptCode_Add_TB.Location = new System.Drawing.Point(189, 158);
            this.DeptCode_Add_TB.Name = "DeptCode_Add_TB";
            this.DeptCode_Add_TB.Size = new System.Drawing.Size(261, 29);
            this.DeptCode_Add_TB.TabIndex = 1;
            // 
            // Dept_Add_button
            // 
            this.Dept_Add_button.BackColor = System.Drawing.Color.Black;
            this.Dept_Add_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Dept_Add_button.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.Dept_Add_button.Location = new System.Drawing.Point(146, 211);
            this.Dept_Add_button.Name = "Dept_Add_button";
            this.Dept_Add_button.Size = new System.Drawing.Size(240, 43);
            this.Dept_Add_button.TabIndex = 2;
            this.Dept_Add_button.Text = "Add Dept";
            this.Dept_Add_button.UseVisualStyleBackColor = false;
            this.Dept_Add_button.Click += new System.EventHandler(this.Dept_Add_button_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.LightYellow;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(52, 388);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(124, 25);
            this.label1.TabIndex = 0;
            this.label1.Text = "Student ID :";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.BackColor = System.Drawing.Color.LightYellow;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(52, 436);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(80, 25);
            this.label2.TabIndex = 0;
            this.label2.Text = "Name :";
            // 
            // stu_ID_TB
            // 
            this.stu_ID_TB.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.stu_ID_TB.Location = new System.Drawing.Point(189, 388);
            this.stu_ID_TB.Name = "stu_ID_TB";
            this.stu_ID_TB.Size = new System.Drawing.Size(261, 29);
            this.stu_ID_TB.TabIndex = 1;
            // 
            // stu_name_TB
            // 
            this.stu_name_TB.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.stu_name_TB.Location = new System.Drawing.Point(189, 436);
            this.stu_name_TB.Name = "stu_name_TB";
            this.stu_name_TB.Size = new System.Drawing.Size(261, 29);
            this.stu_name_TB.TabIndex = 1;
            // 
            // Admit_button
            // 
            this.Admit_button.BackColor = System.Drawing.Color.Black;
            this.Admit_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Admit_button.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.Admit_button.Location = new System.Drawing.Point(146, 639);
            this.Admit_button.Name = "Admit_button";
            this.Admit_button.Size = new System.Drawing.Size(240, 43);
            this.Admit_button.TabIndex = 2;
            this.Admit_button.Text = "Admit Student";
            this.Admit_button.UseVisualStyleBackColor = false;
            this.Admit_button.Click += new System.EventHandler(this.Admit_button_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.BackColor = System.Drawing.Color.LightYellow;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(52, 486);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(126, 25);
            this.label3.TabIndex = 0;
            this.label3.Text = "Dept Code :";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.BackColor = System.Drawing.Color.LightYellow;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(52, 533);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(96, 25);
            this.label4.TabIndex = 0;
            this.label4.Text = "Section :";
            // 
            // stu_sec_TB
            // 
            this.stu_sec_TB.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.stu_sec_TB.Location = new System.Drawing.Point(189, 533);
            this.stu_sec_TB.Name = "stu_sec_TB";
            this.stu_sec_TB.Size = new System.Drawing.Size(261, 29);
            this.stu_sec_TB.TabIndex = 1;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.BackColor = System.Drawing.Color.LightYellow;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(594, 112);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(126, 25);
            this.label5.TabIndex = 0;
            this.label5.Text = "Dept Code :";
            // 
            // show_TB
            // 
            this.show_TB.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.show_TB.Location = new System.Drawing.Point(148, 50);
            this.show_TB.Name = "show_TB";
            this.show_TB.Size = new System.Drawing.Size(274, 31);
            this.show_TB.TabIndex = 1;
            // 
            // show_button
            // 
            this.show_button.BackColor = System.Drawing.Color.Black;
            this.show_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.show_button.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.show_button.Location = new System.Drawing.Point(443, 44);
            this.show_button.Name = "show_button";
            this.show_button.Size = new System.Drawing.Size(375, 45);
            this.show_button.TabIndex = 2;
            this.show_button.Text = "Show Students";
            this.show_button.UseVisualStyleBackColor = false;
            this.show_button.Click += new System.EventHandler(this.show_button_Click);
            // 
            // info_listbox
            // 
            this.info_listbox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.info_listbox.FormattingEnabled = true;
            this.info_listbox.ItemHeight = 20;
            this.info_listbox.Location = new System.Drawing.Point(21, 110);
            this.info_listbox.Name = "info_listbox";
            this.info_listbox.Size = new System.Drawing.Size(797, 484);
            this.info_listbox.TabIndex = 3;
            // 
            // Clear_button
            // 
            this.Clear_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Clear_button.Location = new System.Drawing.Point(720, 600);
            this.Clear_button.Name = "Clear_button";
            this.Clear_button.Size = new System.Drawing.Size(98, 35);
            this.Clear_button.TabIndex = 4;
            this.Clear_button.Text = "Clear";
            this.Clear_button.UseVisualStyleBackColor = true;
            this.Clear_button.Click += new System.EventHandler(this.Clear_button_Click);
            // 
            // code_combobox
            // 
            this.code_combobox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.code_combobox.FormattingEnabled = true;
            this.code_combobox.Location = new System.Drawing.Point(189, 484);
            this.code_combobox.Name = "code_combobox";
            this.code_combobox.Size = new System.Drawing.Size(261, 32);
            this.code_combobox.TabIndex = 5;
            // 
            // panel1
            // 
            this.panel1.BackColor = System.Drawing.Color.LightYellow;
            this.panel1.Location = new System.Drawing.Point(24, 60);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(500, 228);
            this.panel1.TabIndex = 6;
            // 
            // panel2
            // 
            this.panel2.BackColor = System.Drawing.Color.LightYellow;
            this.panel2.Location = new System.Drawing.Point(24, 359);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(500, 353);
            this.panel2.TabIndex = 6;
            // 
            // panel3
            // 
            this.panel3.BackColor = System.Drawing.Color.LightYellow;
            this.panel3.Controls.Add(this.Clear_button);
            this.panel3.Controls.Add(this.info_listbox);
            this.panel3.Controls.Add(this.show_TB);
            this.panel3.Controls.Add(this.show_button);
            this.panel3.Location = new System.Drawing.Point(578, 60);
            this.panel3.Name = "panel3";
            this.panel3.Size = new System.Drawing.Size(838, 652);
            this.panel3.TabIndex = 6;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.ClientSize = new System.Drawing.Size(1453, 793);
            this.Controls.Add(this.code_combobox);
            this.Controls.Add(this.Admit_button);
            this.Controls.Add(this.stu_sec_TB);
            this.Controls.Add(this.stu_name_TB);
            this.Controls.Add(this.Dept_Add_button);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.stu_ID_TB);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.DeptCode_Add_TB);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.Dept_Add_TB);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.DeptCode_add_label);
            this.Controls.Add(this.dept_add_label);
            this.Controls.Add(this.panel3);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.panel1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.panel3.ResumeLayout(false);
            this.panel3.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label dept_add_label;
        private System.Windows.Forms.Label DeptCode_add_label;
        private System.Windows.Forms.TextBox Dept_Add_TB;
        private System.Windows.Forms.TextBox DeptCode_Add_TB;
        private System.Windows.Forms.Button Dept_Add_button;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox stu_ID_TB;
        private System.Windows.Forms.TextBox stu_name_TB;
        private System.Windows.Forms.Button Admit_button;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox stu_sec_TB;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox show_TB;
        private System.Windows.Forms.Button show_button;
        private System.Windows.Forms.Button Clear_button;
        private System.Windows.Forms.ComboBox code_combobox;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Panel panel3;
        public System.Windows.Forms.ListBox info_listbox;
    }
}

