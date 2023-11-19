using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LSP_Project
{
    internal class accountException : Exception
    {
        public accountException() { }

        public accountException(string message) : base(message)
        {

        }
    }
}
