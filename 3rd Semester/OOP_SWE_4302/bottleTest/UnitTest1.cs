using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using bottle_of_oop;
using System.Configuration;

namespace bottleTest
{
    

    [TestClass]
    public class bottle_test
    {
        private bottle bottle = new bottle();

        



        [TestMethod]
        public void TestfirstVarse()
        {
            string expected = "99 bottles of milk on the wall, 99 bottles of milk.\n" +
                            "Take one down and pass it around, 98 bottles of milk on the wall.";
            Assert.AreEqual(expected, bottle.verse(99));
        }

        [TestMethod]
        public void TestsecondVarse()
        {
            string expected = "87 bottles of milk on the wall, 87 bottles of milk.\n" +
                            "Take one down and pass it around, 86 bottles of milk on the wall.";
            Assert.AreEqual(expected, bottle.verse(87));
        }

        [TestMethod]
        public void Test_verse_zero()
        {
            string expected = "No more bottles of milk on the wall, no more bottles of milk.\n" +
                        "Go to the store and buy some more, 99 bottles of milk on the wall.";
            Assert.AreEqual(expected, bottle.verse(0));
        }
    }
}
