using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LSP_Project
{
    internal class IslamicAccount : BaseAccount
    {
        public IslamicAccount(string name, string signature, int acc_no, double balance)
        {
            this.AccountHolderName = name;
            this.AccountNumber = acc_no;
            this.Balance = balance;
            this.Signature = signature;
        }

        public string withdraw(double amount)
        {

            if (amount <= 20000 && Balance - amount >= 500)
            {
                Balance -= amount;
                return "successful";
            }
            else
            {
                return "unsuccessful";
            }
        }
    }
}
