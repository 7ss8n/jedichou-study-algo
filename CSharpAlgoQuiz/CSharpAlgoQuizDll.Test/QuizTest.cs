namespace CSharpAlgoQuizDll.Test
{
    using Quiz0001;
    using Microsoft.VisualStudio.TestTools.UnitTesting;

    [TestClass]
    public class QuizTest
    {
        [TestMethod]
        public void GetWordsFrequencyTest_Normal()
        {
            var actual = Quiz.GetWordsFrequency("a b c");
            const string expected = "a:1 b:1 c:1 ";
            Assert.AreEqual(expected, actual);
        }

        [TestMethod]
        public void GetWordsFrequencyTest_Splitor()
        {
            var actual = Quiz.GetWordsFrequency("a,b,c");
            const string expected = "a:1 b:1 c:1 ";
            Assert.AreEqual(expected, actual);
        }

        [TestMethod]
        public void GetWordsFrequencyTest_Twice()
        {
            var actual = Quiz.GetWordsFrequency("a,a,b,c");
            const string expected = "a:2 b:1 c:1 ";
            Assert.AreEqual(expected, actual);
        }

        [TestMethod]
        public void GetWordsFrequencyTest_DoubleTwice()
        {
            var actual = Quiz.GetWordsFrequency("a,a,b,b,c");
            const string expected = "a:2 b:2 c:1 ";
            Assert.AreEqual(expected, actual);
        }

        [TestMethod]
        public void GetWordsFrequencyTest_DoubleTwiceWithMixSplitor()
        {
            var actual = Quiz.GetWordsFrequency("a,a b b,c");
            const string expected = "a:2 b:2 c:1 ";
            Assert.AreEqual(expected, actual);
        }
    }
}
