namespace multi_max.Algo1
{
    using System;

    internal static class Util
    {
        /// <summary>
        /// 获得一个正整数的位数
        /// </summary>
        internal static int GetPosition(int num)
        {
            if (num <= 0) throw new Exception("Error: num <= 0");
            int result = 0, tmp = num;
            while (tmp > 0)
            {
                if (tmp % 10 == 0) continue;
                result++;
                tmp = (tmp - tmp % 10) / 10;
            }

            return result;
        }

        /// <summary>
        /// 获得正整数的第一位的数字
        /// </summary>
        internal static int GetFstPosNum(int num)
        {
            if (num <= 0) throw new Exception("Error: num <= 0");
            int tmp = num, first = 0;
            while (tmp > 0)
            {
                if (tmp % 10 == 0) continue;
                first = tmp % 10;
                tmp = (tmp - tmp % 10) / 10;
            }

            return first;
        }
    }
}
