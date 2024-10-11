using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassConsoleApp
{
    internal class point
    {
        public int x;
        public int y;


        double CalculateDistanceFromCenter(point p)
        {
            double d;
            d=Math.Sqrt(p.x * p.x + p.y * p.y);
            return d;
        }
    }
}
