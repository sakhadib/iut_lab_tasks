namespace Lab_7_ver_2
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
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.Add_T_name_TB = new System.Windows.Forms.TextBox();
            this.Add_button = new System.Windows.Forms.Button();
            this.Add_t_type_cb = new System.Windows.Forms.ComboBox();
            this.label3 = new System.Windows.Forms.Label();
            this.find_t_cb = new System.Windows.Forms.ComboBox();
            this.t_info_button = new System.Windows.Forms.Button();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(50, 78);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(51, 20);
            this.label1.TabIndex = 0;
            this.label1.Text = "Name";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(50, 110);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(43, 20);
            this.label2.TabIndex = 0;
            this.label2.Text = "Type";
            // 
            // Add_T_name_TB
            // 
            this.Add_T_name_TB.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Add_T_name_TB.Location = new System.Drawing.Point(107, 75);
            this.Add_T_name_TB.Name = "Add_T_name_TB";
            this.Add_T_name_TB.Size = new System.Drawing.Size(220, 26);
            this.Add_T_name_TB.TabIndex = 1;
            // 
            // Add_button
            // 
            this.Add_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Add_button.Location = new System.Drawing.Point(217, 140);
            this.Add_button.Name = "Add_button";
            this.Add_button.Size = new System.Drawing.Size(110, 32);
            this.Add_button.TabIndex = 2;
            this.Add_button.Text = "ADD";
            this.Add_button.UseVisualStyleBackColor = true;
            // 
            // Add_t_type_cb
            // 
            this.Add_t_type_cb.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Add_t_type_cb.FormattingEnabled = true;
            this.Add_t_type_cb.Location = new System.Drawing.Point(107, 108);
            this.Add_t_type_cb.Name = "Add_t_type_cb";
            this.Add_t_type_cb.Size = new System.Drawing.Size(220, 26);
            this.Add_t_type_cb.TabIndex = 3;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(50, 241);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(67, 20);
            this.label3.TabIndex = 0;
            this.label3.Text = "Teacher";
            // 
            // find_t_cb
            // 
            this.find_t_cb.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.find_t_cb.FormattingEnabled = true;
            this.find_t_cb.Location = new System.Drawing.Point(123, 239);
            this.find_t_cb.Name = "find_t_cb";
            this.find_t_cb.Size = new System.Drawing.Size(204, 26);
            this.find_t_cb.TabIndex = 3;
            // 
            // t_info_button
            // 
            this.t_info_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.t_info_button.Location = new System.Drawing.Point(217, 271);
            this.t_info_button.Name = "t_info_button";
            this.t_info_button.Size = new System.Drawing.Size(110, 32);
            this.t_info_button.TabIndex = 2;
            this.t_info_button.Text = "Show info";
            this.t_info_button.UseVisualStyleBackColor = true;
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled = true;
            this.listBox1.Location = new System.Drawing.Point(54, 345);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(273, 316);
            this.listBox1.TabIndex = 4;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.GradientActiveCaption;
            this.ClientSize = new System.Drawing.Size(1504, 739);
            this.Controls.Add(this.listBox1);
            this.Controls.Add(this.find_t_cb);
            this.Controls.Add(this.Add_t_type_cb);
            this.Controls.Add(this.t_info_button);
            this.Controls.Add(this.Add_button);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.Add_T_name_TB);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox Add_T_name_TB;
        private System.Windows.Forms.Button Add_button;
        private System.Windows.Forms.ComboBox Add_t_type_cb;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.ComboBox find_t_cb;
        private System.Windows.Forms.Button t_info_button;
        private System.Windows.Forms.ListBox listBox1;
    }
}

