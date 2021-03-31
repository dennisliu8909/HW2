# HW2
板子設置 : 按鈕、picoscope、電阻、電容
main.cpp程式碼內容 : 
  首先將三個按鈕都設置為DigitalIn，然後接一根AnalogOut為板子所產生的輸出波(DAC)，以及一根AnalogIn讀取經過low_pass filter所讀到的電壓(ADC)，還有uLCD顯示器。
  接下來，利用up、down按鈕選擇產生波的頻率，然後由select選擇產生波的頻率
  然後三角波會一直被製造並輸出，然後再由AnalogIn讀取low_pass filter上的跨壓，最後放入value[]裡
  value[]為取樣點的電壓值，我的取樣點是500個，然後cut-off freq = 85 Hz，所以頻率不要太大picoscope跟numpy算出來的圖形都蠻接近的
 
 50HZ的圖
![Screenshot from 2021-03-31 03-35-54](https://user-images.githubusercontent.com/76942544/113131685-1ad2e580-9250-11eb-81a2-7a0209dad931.png)
![Screenshot from 2021-03-31 03-40-09](https://user-images.githubusercontent.com/76942544/113132277-d4ca5180-9250-11eb-8194-28a4ad4ecac6.png)
150HZ的圖
![Screenshot from 2021-03-31 03-40-54](https://user-images.githubusercontent.com/76942544/113132303-dd228c80-9250-11eb-8d54-56b759a85e38.png)
![Screenshot from 2021-03-31 03-41-37](https://user-images.githubusercontent.com/76942544/113132305-ddbb2300-9250-11eb-84a9-52458555e260.png)
