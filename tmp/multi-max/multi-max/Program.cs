using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;

namespace multi_max
{

    class Program
    {
        static void Main()
        {
            var arrList = new List<int[]>();
            for (var i = 1; i < 1000; i++)
                arrList.Add(GetRandomArr(i));

            int counter = 0;

            foreach (var arr in arrList)
            {

                #region algo1
                var sw1 = new Stopwatch();
                sw1.Start();
                var s1 = Algo1.Algo1.GetResult(arr);
                sw1.Stop();
                var elps1 = sw1.Elapsed;
                #endregion

                #region algo2
                var sw2 = new Stopwatch();
                sw2.Start();
                var s2 = Algo2.Algo2.GetResult(arr);
                sw2.Stop();
                var elps2 = sw2.Elapsed;
                #endregion

                #region algo3
                var sw3 = new Stopwatch();
                sw3.Start();
                var s3 = Ray.Algo3.GetStrMax(arr);
                sw3.Stop();
                var elps3 = sw3.Elapsed;
                #endregion

                Console.WriteLine(
                    "{5} s1==s2: {0}, s1==s3: {1}, Algo1: {2}, Algo2: {3}, Algo3: {4}",
                    s1 == s2, s1 == s3, elps1, elps2, elps3, counter++);

                //Console.WriteLine(
                //    "{3} s1==s2: {0}, Algo1: {1}, Algo2: {2}",
                //    s1 == s2, elps1, elps2, counter++);

                //Console.WriteLine("{0} Algo1: {1}", counter++, elps1);
                // Console.WriteLine("{0} Algo2: {1}", counter++, elps2);
                //Console.WriteLine("{0} Algo3: {1}", counter++, elps3);
            }
        }

        private static int[] GetRandomArr(int size)
        {
            const int min = 1;
            const int max = 20;
            var randNum = new Random();
            return Enumerable
                .Repeat(0, size)
                .Select(i => randNum.Next(min, max))
                .ToArray();
        }
    }
}
