using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_2_Task_1_ID_210042106
{
    internal class page
    {
        public string pageType;

        public page(string pageType)
        {
            this.pageType = pageType;
        }

        public string get_page()
        {
            return this.pageType;
        }
    }
}
