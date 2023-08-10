namespace RPS___Lab_2_learning
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
            this.Name_label = new System.Windows.Forms.Label();
            this.ID_label = new System.Windows.Forms.Label();
            this.Code_label = new System.Windows.Forms.Label();
            this.Marks_label = new System.Windows.Forms.Label();
            this.Name_textBox = new System.Windows.Forms.TextBox();
            this.ID_textBox = new System.Windows.Forms.TextBox();
            this.Code_textBox = new System.Windows.Forms.TextBox();
            this.Marks_textBox = new System.Windows.Forms.TextBox();
            this.Submit_button = new System.Windows.Forms.Button();
            this.Clear_button = new System.Windows.Forms.Button();
            this.res_label = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // Name_label
            // 
            this.Name_label.AutoSize = true;
            this.Name_label.Font = new System.Drawing.Font("Times New Roman", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Name_label.ForeColor = System.Drawing.SystemColors.InactiveCaptionText;
            this.Name_label.Location = new System.Drawing.Point(74, 31);
            this.Name_label.Name = "Name_label";
            this.Name_label.Size = new System.Drawing.Size(49, 19);
            this.Name_label.TabIndex = 0;
            this.Name_label.Text = "Name";
            // 
            // ID_label
            // 
            this.ID_label.AutoSize = true;
            this.ID_label.Font = new System.Drawing.Font("Times New Roman", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ID_label.ForeColor = System.Drawing.SystemColors.InactiveCaptionText;
            this.ID_label.Location = new System.Drawing.Point(41, 69);
            this.ID_label.Name = "ID_label";
            this.ID_label.Size = new System.Drawing.Size(82, 19);
            this.ID_label.TabIndex = 1;
            this.ID_label.Text = "Student ID";
            this.ID_label.Click += new System.EventHandler(this.label2_Click);
            // 
            // Code_label
            // 
            this.Code_label.AutoSize = true;
            this.Code_label.Font = new System.Drawing.Font("Times New Roman", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Code_label.ForeColor = System.Drawing.SystemColors.InactiveCaptionText;
            this.Code_label.Location = new System.Drawing.Point(27, 105);
            this.Code_label.Name = "Code_label";
            this.Code_label.Size = new System.Drawing.Size(96, 19);
            this.Code_label.TabIndex = 2;
            this.Code_label.Text = "Course Code";
            // 
            // Marks_label
            // 
            this.Marks_label.AutoSize = true;
            this.Marks_label.Font = new System.Drawing.Font("Times New Roman", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Marks_label.ForeColor = System.Drawing.SystemColors.InactiveCaptionText;
            this.Marks_label.Location = new System.Drawing.Point(68, 140);
            this.Marks_label.Name = "Marks_label";
            this.Marks_label.Size = new System.Drawing.Size(55, 19);
            this.Marks_label.TabIndex = 3;
            this.Marks_label.Text = "Marks";
            this.Marks_label.Click += new System.EventHandler(this.Marks_label_Click);
            // 
            // Name_textBox
            // 
            this.Name_textBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Name_textBox.Location = new System.Drawing.Point(139, 24);
            this.Name_textBox.Name = "Name_textBox";
            this.Name_textBox.Size = new System.Drawing.Size(447, 29);
            this.Name_textBox.TabIndex = 4;
            // 
            // ID_textBox
            // 
            this.ID_textBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ID_textBox.Location = new System.Drawing.Point(139, 62);
            this.ID_textBox.Name = "ID_textBox";
            this.ID_textBox.Size = new System.Drawing.Size(447, 29);
            this.ID_textBox.TabIndex = 5;
            // 
            // Code_textBox
            // 
            this.Code_textBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Code_textBox.Location = new System.Drawing.Point(139, 101);
            this.Code_textBox.Name = "Code_textBox";
            this.Code_textBox.Size = new System.Drawing.Size(447, 29);
            this.Code_textBox.TabIndex = 6;
            // 
            // Marks_textBox
            // 
            this.Marks_textBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Marks_textBox.Location = new System.Drawing.Point(139, 140);
            this.Marks_textBox.Name = "Marks_textBox";
            this.Marks_textBox.Size = new System.Drawing.Size(447, 29);
            this.Marks_textBox.TabIndex = 7;
            // 
            // Submit_button
            // 
            this.Submit_button.BackColor = System.Drawing.Color.DarkGreen;
            this.Submit_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Submit_button.ForeColor = System.Drawing.SystemColors.HighlightText;
            this.Submit_button.Location = new System.Drawing.Point(359, 190);
            this.Submit_button.Name = "Submit_button";
            this.Submit_button.Size = new System.Drawing.Size(227, 44);
            this.Submit_button.TabIndex = 8;
            this.Submit_button.Text = "SUBMIT";
            this.Submit_button.UseVisualStyleBackColor = false;
            this.Submit_button.Click += new System.EventHandler(this.Submit_button_Click);
            // 
            // Clear_button
            // 
            this.Clear_button.BackColor = System.Drawing.Color.Tomato;
            this.Clear_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Clear_button.ForeColor = System.Drawing.SystemColors.HighlightText;
            this.Clear_button.Location = new System.Drawing.Point(139, 190);
            this.Clear_button.Name = "Clear_button";
            this.Clear_button.Size = new System.Drawing.Size(214, 44);
            this.Clear_button.TabIndex = 9;
            this.Clear_button.Text = "CLEAR";
            this.Clear_button.UseVisualStyleBackColor = false;
            this.Clear_button.Click += new System.EventHandler(this.Clear_button_Click);
            // 
            // res_label
            // 
            this.res_label.AutoSize = true;
            this.res_label.Font = new System.Drawing.Font("Cambria Math", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.res_label.ForeColor = System.Drawing.SystemColors.InactiveCaptionText;
            this.res_label.Location = new System.Drawing.Point(63, 389);
            this.res_label.Name = "res_label";
            this.res_label.Size = new System.Drawing.Size(107, 89);
            this.res_label.TabIndex = 10;
            this.res_label.Text = " Result : ";
            this.res_label.Click += new System.EventHandler(this.label1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.GradientActiveCaption;
            this.ClientSize = new System.Drawing.Size(877, 476);
            this.Controls.Add(this.res_label);
            this.Controls.Add(this.Clear_button);
            this.Controls.Add(this.Submit_button);
            this.Controls.Add(this.Marks_textBox);
            this.Controls.Add(this.Code_textBox);
            this.Controls.Add(this.ID_textBox);
            this.Controls.Add(this.Name_textBox);
            this.Controls.Add(this.Marks_label);
            this.Controls.Add(this.Code_label);
            this.Controls.Add(this.ID_label);
            this.Controls.Add(this.Name_label);
            this.Name = "Form1";
            this.Text = "RPS";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label Name_label;
        private System.Windows.Forms.Label ID_label;
        private System.Windows.Forms.Label Code_label;
        private System.Windows.Forms.Label Marks_label;
        private System.Windows.Forms.TextBox Name_textBox;
        private System.Windows.Forms.TextBox ID_textBox;
        private System.Windows.Forms.TextBox Code_textBox;
        private System.Windows.Forms.TextBox Marks_textBox;
        private System.Windows.Forms.Button Submit_button;
        private System.Windows.Forms.Button Clear_button;
        private System.Windows.Forms.Label res_label;
    }
}

