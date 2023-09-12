using ConsoleApp1;

namespace shapeTest
{
    public class Tests
    {
        [SetUp]
        public void Setup()
        {
        }
        public canvas canvas = new canvas();
        public circle circle1 = new circle(new point(2, 3), 4);
        public square square1 = new square(new point(2, 3), 4);
        public rectangle rect1 = new rectangle(new point(2, 3), 4, 5);

        public List<shape> shapeList = new List<shape>();

        [Test]
        public void Circle_Test()
        {
            string expected = "Drawing Circle";
            string actual = canvas.draw(circle1);
            Assert.AreEqual(expected, actual);
        }

        [Test]
        public void square_Test()
        {
            string expected = "Drawing Square";
            string actual = canvas.draw(square1);
            Assert.AreEqual(expected, actual);
        }

        [Test]
        public void rectangle_Test()
        {
            string expected = "Drawing Rectangle";
            string actual = canvas.draw(rect1);
            Assert.AreEqual(expected, actual);
        }

        [Test]
        public void listTest()
        {
            shapeList.Add(circle1);
            shapeList.Add(square1);
            shapeList.Add(rect1);
            string expected = "Drawing Circle\nDrawing Square\nDrawing Rectangle\n";
            string actual = canvas.draw(shapeList); 
            Assert.AreEqual(expected, actual);
        }
    }
}