using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class MyList<T>
    {
        private static int maxSize = 1000;
        private T[] list;
        private int last = -1;

        public MyList()
        {
            list = new T[maxSize];
        }

        public void addItem(T item)
        {
            last++;
            list[last] = item;
        }

        public T getItem(int index)
        {
            return list[index];
        }

        public T removeItem(int index)
        {
            T item = list[index];
            for (int i = index; i < last - 1; i++)
            {
                list[i] = list[i + 1];
            }
            last--;

            return item;
        }

        public int size()
        {
            return last+1;
        }

        public bool isEmpty()
        {
            if (last == -1)
            {
                return true;
            }
            return false;
        }

        public void clear()
        {
            list = new T[maxSize];
        }

        public bool contains(T item)
        {
            return list.Contains(item);
        }

        public T[] toArray()
        {
            T[] array = new T[last + 1];
            for(int i= 0; i < last; i++)
            {
                array[i] = list[i];
            }
            return array;
        }

    }
}
