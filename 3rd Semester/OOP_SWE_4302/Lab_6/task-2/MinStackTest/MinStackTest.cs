
using MinStackProject;

namespace MinStackTest
{
    public class Tests
    {
        
        
        
        [SetUp]
        public void Setup()
        {

        }

        [Test]
        public void MinTest_1()
        {
            MinStack min = new MinStack();
            min.push(3);
            min.push(2);
            min.push(5);
            min.push(1);

            int expected = 1;
            int actual = min.min();
            Assert.AreEqual(expected, actual);
        }

        [Test]
        public void MinTest_2()
        {
            MinStack min = new MinStack();
            min.push(3);
            min.push(2);
            min.push(5);
            min.push(1);

            min.pop();
            int expected = 2;
            int actual = min.min();
            Assert.AreEqual(expected, actual);
        }

        [Test]
        public void MinTest_3()
        {
            MinStack min = new MinStack();
            min.push(12);
            min.push(3);
            min.push(4);

            int expected = 3;
            int actual = min.min();
            Assert.AreEqual(expected, actual);
        }
    }
}