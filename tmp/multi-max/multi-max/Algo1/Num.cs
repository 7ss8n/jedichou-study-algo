namespace multi_max.Algo1
{
    using System;

    class Num : IComparable
    {
        public int Val { get; set; }

        // 通过CompareTo实现排序
        public int CompareTo(object obj)
        {
            var str1 = Convert.ToString(Val);
            var num = obj as Num;
            if (num == null) return 0;
            var str2 = Convert.ToString(num.Val);
            var temp1 = Convert.ToInt32(str1 + str2);
            var temp2 = Convert.ToInt32(str2 + str1);
            return temp2 - temp1;
        }
    }
}
