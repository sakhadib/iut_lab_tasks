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



       
    }
}
