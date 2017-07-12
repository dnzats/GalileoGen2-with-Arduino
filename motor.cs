using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;

namespace motor
{
    public partial class motor : Form
    {
        private SerialPort myport;
        public Form1()
        {
            InitializeComponent();
            init();
        }

        private void motor_Load(object sender, EventArgs e)
        {

        }

        private void ileri_Click(object sender, EventArgs e)
        {
            
            if (myport.IsOpen)
            {
                myport.WriteLine("i");
            }
            


        }

        private void sag_Click(object sender, EventArgs e)
        {
            
            if (myport.IsOpen)
            {
                myport.WriteLine("r");
            }
            

        }

        private void geri_Click(object sender, EventArgs e)
        {
            
            if (myport.IsOpen)
            {
                myport.WriteLine("g");
            }
            
        }

        private void sol_Click(object sender, EventArgs e)
        {
            
            if (myport.IsOpen)
            {
                myport.WriteLine("l");
            }
            
        }


        private void dur_Click(object sender, EventArgs e)
        {
            if (myport.IsOpen)
            {
                myport.WriteLine("d");
            }

        }

        private void init()
        {
            myport = new SerialPort();
            myport.BaudRate = 9600;
            myport.PortName = "COM3";
            myport.Open();

        }

        
    }
}
