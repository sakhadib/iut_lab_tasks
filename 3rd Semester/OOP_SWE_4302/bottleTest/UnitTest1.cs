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
        public void first_verse_test()
        {
            string expected = "99 bottles of milk on the wall, 99 bottles of milk.\n" +
                            "Take one down and pass it around, 98 bottles of milk on the wall.\n";
            Assert.AreEqual(expected, bottle.verse(99));
        }

        [TestMethod]
        public void verse_68_test()
        {
            string expected = "68 bottles of milk on the wall, 68 bottles of milk.\n" +
                            "Take one down and pass it around, 67 bottles of milk on the wall.\n";
            Assert.AreEqual(expected, bottle.verse(68));
        }

        [TestMethod]
        public void verse_2_test()
        {
            string expected = "2 bottles of milk on the wall, 2 bottles of milk.\n" +
                                "Take one down and pass it around, 1 bottle of milk on the wall.\n";
            Assert.AreEqual(expected, bottle.verse(2));
        }

        [TestMethod]
        public void verse_1_test() 
        { 
            string expected = "1 bottle of milk on the wall, 1 bottle of milk.\n" +
                        "Take it down and pass it around, no more bottles of milk on the wall.\n";
            Assert.AreEqual(expected, bottle.verse(1));
        }

        [TestMethod]
        public void verse_0_test()
        {
            string expected = "No more bottles of milk on the wall, no more bottles of milk.\n" +
                        "Go to the store and buy some more, 99 bottles of milk on the wall.\n";
            Assert.AreEqual (expected, bottle.verse(0));
        }



       
    }
}
