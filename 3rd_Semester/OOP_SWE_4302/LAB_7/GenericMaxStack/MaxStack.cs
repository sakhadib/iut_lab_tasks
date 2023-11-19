using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GenericMaxStack
{
    internal class MaxStack<T> where T : IComparable<T>
    {

        public class pair{
            public T Value;
            public T thisMax;

            public pair(T value, T thisMax)
            {
                Value = value;
                this.thisMax = thisMax;
            }
        }


        public Stack<pair> stack;

        public MaxStack()
        {
            stack = new Stack<pair>();
        }

        public void Push(T value)
        {
            if(stack.Count > 0)
            {
                pair item = stack.Peek();
                if(item.thisMax.CompareTo(value) < 0)
                {
                    pair p = new pair(value, value);
                    stack.Push(p);
                }
                else
                {
                    pair p = new pair(value, item.thisMax);
                    stack.Push(p);
                }
            }
            else
            {
                pair p = new pair(value, value);
                stack.Push(p);
            }
            
        }

        public T pop()
        {
            pair p =  stack.Pop();
            return p.Value;

        }

        public T Max()
        {
            pair p = stack.Pop();
            return p.thisMax;
        }

        









    }
}
