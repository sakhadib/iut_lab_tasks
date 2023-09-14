using FizzBuzz;
namespace FizzTest
{
    public class Tests
    {
        public FizzyBuzz fizzbuzz;
        [SetUp]
        public void Setup()
        {
            fizzbuzz = new FizzyBuzz();
        }

        [Test]
        public void FizzTest()
        {
            string expected = "Fizz";
            string actual = fizzbuzz.GetFizzyBuzz(6);
            Assert.AreEqual(expected, actual);
        }

        [Test]
        public void BuzzTest()
        {
            string expected = "Buzz";
            string actual = fizzbuzz.GetFizzyBuzz(14);
            Assert.AreEqual(expected, actual);
        }

        [Test]
        public void FizzyBuzzTest()
        {
            string expected = "FizzBuzz";
            string actual = fizzbuzz.GetFizzyBuzz(21);
            Assert.AreEqual(expected, actual);
        }

        [Test]
        public void GotchaTest()
        {
            string expected = "Gotcha";
            string actual = fizzbuzz.GetFizzyBuzz(4);
            Assert.AreEqual(expected, actual);
        }
        
    }
}