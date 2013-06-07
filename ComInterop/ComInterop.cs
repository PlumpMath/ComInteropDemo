using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using System.Runtime.InteropServices;
using System.EnterpriseServices;


namespace ComInteropDemo
{
    //接口声明
    [Guid("7103C10A-2072-49fc-AD61-475BEE1C5FBB")]   
    public interface ComInteropInterface
    {
        [DispId(1)]
        int Add(int a, int b);

        [DispId(2)]
        int Minus(int a, int b);
    }


    //对于实现类的声明
    [Guid("87796E96-EC28-4570-90C3-A395F4F4A7D6")]
    [ClassInterface(ClassInterfaceType.None)]
    public class ComInterop : ServicedComponent, ComInteropInterface
    {
        public ComInterop() { }

        public int Add(int a, int b)
        {
            return a + b;
        }

        public int Minus(int a, int b)
        {
            return a - b;
        }
    }
}
