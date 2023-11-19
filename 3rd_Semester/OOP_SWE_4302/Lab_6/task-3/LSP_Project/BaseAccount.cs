using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LSP_Project
{
    internal class BaseAccount
    {
        public string AccountHolderName;
        public double Balance;
        public string Signature;
        public int AccountNumber;

        public string diposit(double amount)
        {
            try
            {
                Balance += amount;
                return "successfull";
            }
            catch (Exception e)
            {
                return e.Message;
            }
        }

        public double checkBalance()
        {
            return Balance;
        }



    }
}
