namespace multi_max.Algo1
{
    using System;
    using System.Collections.Generic;
    using System.Linq;

    internal class Algo1
    {
        public static string GetResult(IEnumerable<int> arr)
        {
            var list = arr.Select(integer => new Num { Val = integer }).ToList();
            var r = string.Empty;
            
            list.Sort();
            
            return list.Aggregate(r, (current, n) => current + Convert.ToString(n.Val));
        }

        public void Run()
        {
            var arr1 = new[] { 1, 2, 3 };
            var arr2 = new[] { 13, 312, 343 };
            var arr3 = new[] { 7, 13, 4, 246 };
            var arr4 = new[] { 66, 65 };
            var arr5 = new[] { 66, 65, 77, 78 };
            var arr6 = new[] { 666, 656, 655, 7 };
            var arr7 = new[] { 7, 666, 656, 655 };
            var arr8 = new[] { 666, 656, 655, 7 };

            GetResult(arr1);
            GetResult(arr2);
            GetResult(arr3);
            GetResult(arr4);
            GetResult(arr5);
            GetResult(arr6);
            GetResult(arr7);
            GetResult(arr8);
        }
    }
}
