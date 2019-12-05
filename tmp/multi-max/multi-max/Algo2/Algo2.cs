namespace multi_max.Algo2
{
    using System;

    public class Algo2
    {
        // 比较算法
        private static int CompareInt(int num1, int num2)
        {
            var str1 = num1 + "";
            var str2 = num2 + "";
            var temp1 = Convert.ToInt32(str1 + str2);
            var temp2 = Convert.ToInt32(str2 + str1);
            return temp1 - temp2;
        }

        // 面向过程版(且是原地排序的版本)
        public void Sort(int[] arr)
        {
            int n = arr.Length;
            int[] arr2 = arr;

            for (int j = 0; j < n - 1; j++)
            {
                for (int i = 0; i < n - 1 - j; i++)
                {
                    if (CompareInt(arr2[i], arr2[i + 1]) < 0)
                    {
                        int temp = arr2[i + 1];
                        arr2[i + 1] = arr2[i];
                        arr2[i] = temp;
                    }
                }
            }

            for(int j = 0; j < n; j++)
                Console.Write(arr[j]);
            Console.WriteLine();
        }

        public static string GetResult(int[] arr)
        {
            int n = arr.Length;
            int[] arr2 = arr;
            string r = string.Empty;

            for (int j = 0; j < n - 1; j++)
            {
                for (int i = 0; i < n - 1 - j; i++)
                {
                    if (CompareInt(arr2[i], arr2[i + 1]) < 0)
                    {
                        int temp = arr2[i + 1];
                        arr2[i + 1] = arr2[i];
                        arr2[i] = temp;
                    }
                }
            }

            for (int j = 0; j < n; j++)
                r += Convert.ToInt32(arr2[j]);

            return r;
        }

        public void Run()
        {
            
            var arr1 = new[] {1,2,3 };
            var arr2 = new[] { 13, 312, 343 };
            var arr3 = new[] { 7, 13, 4, 246 };
            var arr4 = new[] { 66, 65 };
            var arr5 = new[] { 66, 65, 77, 78 };
            var arr6 = new[] { 666, 656, 655, 7 };
            var arr7 = new[] { 7, 666, 656, 655 };
            var arr8 = new[] { 666, 656, 655, 7 };

            Sort(arr1);
            Sort(arr2);
            Sort(arr3);
            Sort(arr4);
            Sort(arr5);
            Sort(arr6);
            Sort(arr7);
            Sort(arr8);
        }
    }
}