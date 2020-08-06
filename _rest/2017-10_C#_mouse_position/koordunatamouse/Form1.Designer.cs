namespace WindowsFormsApplication1
{
    partial class Form1
    {
        /// <summary>
        /// Требуется переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Обязательный метод для поддержки конструктора - не изменяйте
        /// содержимое данного метода при помощи редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label_length_1 = new System.Windows.Forms.Label();
            this.label_length_2 = new System.Windows.Forms.Label();
            this.label_length_3 = new System.Windows.Forms.Label();
            this.label_ERROR = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // pictureBox1
            // 
            this.pictureBox1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.pictureBox1.Location = new System.Drawing.Point(12, 12);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(400, 400);
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.MouseDown += new System.Windows.Forms.MouseEventHandler(this.pictureBox1_MouseDown);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(482, 30);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(35, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "label1";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(482, 61);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(35, 13);
            this.label2.TabIndex = 2;
            this.label2.Text = "label2";
            // 
            // label_length_1
            // 
            this.label_length_1.AutoSize = true;
            this.label_length_1.Location = new System.Drawing.Point(482, 123);
            this.label_length_1.Name = "label_length_1";
            this.label_length_1.Size = new System.Drawing.Size(35, 13);
            this.label_length_1.TabIndex = 3;
            this.label_length_1.Text = "label3";
            // 
            // label_length_2
            // 
            this.label_length_2.AutoSize = true;
            this.label_length_2.Location = new System.Drawing.Point(482, 147);
            this.label_length_2.Name = "label_length_2";
            this.label_length_2.Size = new System.Drawing.Size(35, 13);
            this.label_length_2.TabIndex = 4;
            this.label_length_2.Text = "label3";
            // 
            // label_length_3
            // 
            this.label_length_3.AutoSize = true;
            this.label_length_3.Location = new System.Drawing.Point(482, 172);
            this.label_length_3.Name = "label_length_3";
            this.label_length_3.Size = new System.Drawing.Size(35, 13);
            this.label_length_3.TabIndex = 5;
            this.label_length_3.Text = "label4";
            // 
            // label_ERROR
            // 
            this.label_ERROR.AutoSize = true;
            this.label_ERROR.Location = new System.Drawing.Point(443, 239);
            this.label_ERROR.Name = "label_ERROR";
            this.label_ERROR.Size = new System.Drawing.Size(13, 13);
            this.label_ERROR.TabIndex = 6;
            this.label_ERROR.Text = "_";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(550, 437);
            this.Controls.Add(this.label_ERROR);
            this.Controls.Add(this.label_length_3);
            this.Controls.Add(this.label_length_2);
            this.Controls.Add(this.label_length_1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.pictureBox1);
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label_length_1;
        private System.Windows.Forms.Label label_length_2;
        private System.Windows.Forms.Label label_length_3;
        private System.Windows.Forms.Label label_ERROR;
    }
}

