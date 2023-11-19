using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using Lab_4;
using System.Security.Cryptography.X509Certificates;
using Microsoft.Win32;

namespace TripTest
{
    [TestClass]
    public class UnitTest1
    {
        vehicle sedan = new sedan();
        vehicle seven = new sevenseater();
        vehicle motorbike = new motorbike();

        
        private trip sedanTrip = new trip(new sedan(), 20, 30, 3);
        private trip sevenTrip = new trip(new sevenseater(), 20, 40, 3);
        private trip motorTrip = new trip(new motorbike(), 2, 30, 1);
        
        [TestMethod]
        public void sedanTest()
        {
            int expected = 235;
            int actual = sedanTrip.perHeadFare();
            Assert.AreEqual(expected, actual);
        }

        [TestMethod]
        public void sevenTest()
        {
            int expected = 200;
            int actual = sevenTrip.perHeadFare();
            Assert.AreEqual(expected, actual);
        }

        [TestMethod]
        public void motorTest()
        {
            int expected = 40;
            int actual = motorTrip.perHeadFare();
            Assert.AreEqual (expected, actual);
        }

        [TestMethod]
        public void sedan_can_take_trip()
        {
            bool expected = true;
            bool actual = sedanTrip.canTakeTrip();
            Assert.AreEqual(expected, actual);
        }

        [TestMethod]
        public void seven_can_take_trip()
        {
            bool expected = true;
            bool actual = sevenTrip.canTakeTrip();
            Assert.AreEqual(expected, actual);
        }

        [TestMethod]
        public void motor_can_take_trip()
        {
            bool expected = false;
            bool actual = motorTrip.canTakeTrip();
            Assert.AreEqual(expected, actual);
        }

        [TestMethod]
        public void motor_can_not_take_trip()
        {
            trip motorTrip_2 = new trip(new motorbike(), 2, 30, 2);
            bool expected = false;
            bool actual = motorTrip_2.canTakeTrip();
            Assert.AreEqual(expected , actual);
        }
    }
}
