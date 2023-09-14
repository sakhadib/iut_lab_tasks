using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MinStackProject
{
    public class MinStack
    {
        List<int> StacKList = new List<int>();
        List<int> Holder = new List<int>();

        public MinStack() { }

        public void push(int value)
        {
            if(Holder.Count() == 0)
            {
                Holder.Add(value);
            }
            else
            {
                if (Holder[Holder.Count() - 1] > value)
                {
                    Holder.Add(value);
                }
            }
            StacKList.Add(value);
        }

        public void pop()
        {
            int TempValue = StacKList[StacKList.Count() - 1];
            StacKList.RemoveAt(StacKList.Count() - 1);
            if (TempValue == Holder[Holder.Count() - 1])
            {
                Holder.RemoveAt(Holder.Count() - 1);
            }
        }

        public int min()
        {
            return Holder[Holder.Count() - 1];
        }
    }
}
