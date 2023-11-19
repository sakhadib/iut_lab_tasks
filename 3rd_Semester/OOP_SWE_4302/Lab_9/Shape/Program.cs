using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Shape
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Node<TwoD> node = new Node<Circle>(); // Not Valid : Because Not same type in generic typining

            Node<Circle> circle = new Node<Circle>(); // Valid : Because Same type in generic typing

            Node<TwoD> node1 = new Node<TwoD>(); // valid : Because types are same
            Node<Cube> cube = new Node<ThreeD>(); // Not Valid : Because Not same.
            Node<ThreeD> node2 = new Node<Cylinder>(); // Not valid : Because Not Same





        }
    }
}
