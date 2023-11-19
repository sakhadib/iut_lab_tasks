using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MaxMinStack
{
    internal class MaxMinStack<T> where T : IComparable<T>
    {
        public class pair
        {
            public T Value;
            public T thisMax;
            public T thismin;

            public pair(T value, T thisMax, T thismin)
            {
                Value = value;
                this.thisMax = thisMax;
                this.thismin = thismin;
            }
        }


        public Stack<pair> stack;

        public MaxMinStack()
        {
            stack = new Stack<pair>();
        }

        public void Push(T value)
        {
            if (stack.Count > 0)
            {
                pair item = stack.Peek();
                if (item.thisMax.CompareTo(value) < 0)
                {
                    pair p = new pair(value, value, item.thismin);
                    stack.Push(p);
                }
                else if(item.thismin.CompareTo(value) > 0)
                {
                    pair p = new pair(value, item.thisMax, value);
                    stack.Push(p);
                }
                else
                {
                    pair p = new pair(value, item.thisMax, item.thismin);
                    stack.Push(p);
                }
            }
            else
            {
                pair p = new pair(value, value, value);
                stack.Push(p);
            }

        }

        public T pop()
        {
            pair p = stack.Pop();
            return p.Value;

        }

        public T Max()
        {
            pair p = stack.Peek();
            return p.thisMax;
        }

        public T Min()
        {
            pair p = stack.Peek();
            return p.thismin;
        }

    }
}
