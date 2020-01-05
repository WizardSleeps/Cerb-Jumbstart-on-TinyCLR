using GHIElectronics.TinyCLR.Devices.Gpio; 
using System.Diagnostics; 
using System.Threading; 
namespace TinyCLRApplication1 
{ 
   class Program 
   { 
       static void Main() 
       { 
           var led = GpioController.GetDefault().OpenPin(18); 
           led.SetDriveMode(GpioPinDriveMode.Output); 
           while (true) 
           { 
               led.Write(GpioPinValue.High); 
               Thread.Sleep(100); 
               Debug.WriteLine(led.Read().ToString()); 
               led.Write(GpioPinValue.Low); 
               Thread.Sleep(800); 
               Debug.WriteLine(led.Read().ToString()); 
           } 
       } 
   } 
}
