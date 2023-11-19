using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LSP_Project
{
    internal class SavingsAccount : BaseAccount, AccountAction
    {
        public double InterestRate;

        public SavingsAccount(string name, string signature, int acc_no, double balance, double interest_rate)
        {
            this.AccountHolderName = name;
            this.AccountNumber = acc_no;
            this.InterestRate = interest_rate;
            this.Balance = balance;
            this.Signature = signature;
        }

        public string withdraw(double amount)
        {

            if (amount <= 15000 && Balance - amount >= 1000)
            {
                Balance -= amount;
                return "successful";
            }
            else
            {
                return "unsuccessful";
            }
        }

        public double CalculateInterest()
        {
            return ((Balance * InterestRate) / 100);
        }

    }
}
