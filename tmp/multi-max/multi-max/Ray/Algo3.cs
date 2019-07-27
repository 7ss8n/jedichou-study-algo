using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;

namespace multi_max.Ray
{
    class Algo3
    {
        public static string GetStrMax(int[] arr)
        {
            for (var i = 0; i < arr.Length; i++)
            {
                for (var j = i + 1; j < arr.Length; j++)
                {
                    var tempa = arr[i];
                    var tempb = arr[j];
                    
                    int ilen = tempa.ToString(CultureInfo.InvariantCulture).Length < tempb.ToString(CultureInfo.InvariantCulture).Length ? tempa.ToString(CultureInfo.InvariantCulture).Length : tempb.ToString(CultureInfo.InvariantCulture).Length;

                    for (int s = 0; s < ilen; s++)
                    {
                        var x = Convert.ToInt32(tempa.ToString(CultureInfo.InvariantCulture).Substring(s, 1));
                        var y = Convert.ToInt32(tempb.ToString(CultureInfo.InvariantCulture).Substring(s, 1));

                        if (x >= y) continue;
                        arr[i] = tempb;
                        arr[j] = tempa;
                        break;
                    }
                }
            }

            var str = MaxTostring(arr);
            
            return str;
        }

        private static string MaxTostring(IEnumerable<int> arr)
        {
            return arr.Aggregate("", (current, s) => current + s);
        }
    }
}
