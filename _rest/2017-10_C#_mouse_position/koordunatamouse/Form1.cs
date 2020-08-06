using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        int count = 0;
        int x1, y1, x2, y2, x3, y3;


        public Form1()
        {
            InitializeComponent();
        }

        void update()
        {
            double length_1, length_2, length_3;
           
            length_1 = (double)Math.Sqrt((Math.Pow(x2 - x1, 2) + Math.Pow(y2 - y1, 2)));
            length_2 = (double)Math.Sqrt((Math.Pow(x3 - x2, 2) + Math.Pow(y3 - y2, 2)));
            length_3 = (double)Math.Sqrt((Math.Pow(x1 - x3, 2) + Math.Pow(y1 - y3, 2)));

            label_length_1.Text = length_1.ToString();
            label_length_2.Text = length_2.ToString();
            label_length_3.Text = length_3.ToString();


            if (length_1 + length_2 <= length_3)
            {
                label_ERROR.Text = "ERROR length_1 + length_2 <= length_3";
            }
            else if (length_2 + length_3 <= length_1)
            {
                label_ERROR.Text = "ERROR length_2 + length_3 <= length_1";
            }
            else if (length_1 + length_3 <= length_2)
            {
                label_ERROR.Text = "ERROR length_1 + length_3 <= length_2";
            }
            else
            {
                label_ERROR.Text = "";
            }
        }


        private void pictureBox1_MouseDown(object sender, MouseEventArgs e)
        {
            pictureBox1.Refresh();
            Pen myPen = new Pen(Color.Black, 2);
            Graphics g = Graphics.FromHwnd(pictureBox1.Handle);

            if (count == 0)
            {
                x1 = e.X;
                y1 = e.Y;
                x1 = x1 / 20 * 20;
                y1 = y1 / 20 * 20;

                count++;
            }
            else
                if (count == 1)
                {
                    x2 = e.X;
                    y2 = e.Y;
                    x2 = x2 / 20 * 20;
                    y2 = y2 / 20 * 20;

                    count++;
                 }
                else
                {
                    x3 = e.X;
                    y3 = e.Y;
                    x3 = x3 / 20 * 20;
                    y3 = y3 / 20 * 20;

                    count-=2;
                    g.DrawLine(myPen, x1, y1, x2, y2);
                    g.DrawLine(myPen, x2, y2, x3, y3);
                    g.DrawLine(myPen, x1, y1, x3, y3);

                    update();
                }


           // int x = Control.MousePosition.X;// -this.Location.X;
           // int y = Control.MousePosition.Y;// -this.Location.Y;
            int x = e.X;
            int y = e.Y;
            x = x / 20 * 20;
            y = y / 20 * 20;
       
            label1.Text = x.ToString();
            label2.Text = (400-y).ToString();
            
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
