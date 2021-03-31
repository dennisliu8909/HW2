# HW2
板子設置 : 按鈕、picoscope、電阻、電容
main.cpp程式碼內容 : 
  首先將三個按鈕都設置為DigitalIn，然後接一根AnalogOut為板子所產生的輸出波(DAC)，以及一根AnalogIn讀取經過low_pass filter所讀到的電壓(ADC)，還有uLCD顯示器。
  接下來，利用up、down按鈕選擇產生波的頻率，然後由select選擇產生波的頻率
  然後三角波會一直被製造並輸出，然後再由AnalogIn讀取low_pass filter上的跨壓，最後放入value[]裡
  value[]為取樣點的電壓值，我的取樣點是500個，然後cut-off freq = 85 Hz，所以頻率不要太大picoscope跟numpy算出來的圖形都蠻接近的
  
