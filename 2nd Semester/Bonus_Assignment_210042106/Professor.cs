using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bonus_Assignment_210042106
{
    class Professor : Teacher
    {
        public int paper_count;
        public double yearly_research_budget;
        public int house_no;
        

        public Professor()
        {

        }

        public string isphd()
        {
            if (paper_count > 0)
                return "Yes";
            else
                return "No";
        }

        public string isprovost()
        {
            if (house_no == 1)
                return $"Yes, Provost lives in House No - {house_no}";
            else if (house_no >= 2)
                return $"NO but lives in House no - {house_no}";
            else
                return "No";
        }

        public string status()
        {
            if (paper_count >= 20)
            {
                return "Hyper Active";
            }
            else if (paper_count >= 10 && paper_count < 20) 
            {
                return "Active";
            }
            else if (paper_count >= 2 && paper_count < 10)
            {
                return "Running";
            }
            else
            {
                return "not Active";
            }
        }

        public string research_capability()
        {
            if (yearly_research_budget >= 500000)
            {
                return "10 students";
            }
            else if (yearly_research_budget >= 300000 && yearly_research_budget < 500000)
            {
                return "5 Students";
            }
            else if (yearly_research_budget >= 100000 && yearly_research_budget < 300000)
            {
                return "3 Students";
            }
            else if (yearly_research_budget >= 10000 && yearly_research_budget < 100000)
            {
                return "1 student";
            }
            else
                return "No student";
        }

    }
}
