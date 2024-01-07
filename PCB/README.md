基板（Printed Circuit Board）。  
３種類あり、それぞれ業者に発注して作ってもらう。  
  
### left, right  
・キースイッチを網羅して列と行に解釈し、マイコンのピンの直下に持ってくる基板。  
  
### wing  
・充電スイッチおよびリセットボタンをマイコンにつなげるとともに、それらの位置を固定するための基板。  
  
## 発注方法  
[JLCPCB](https://jlcpcb.com/)にアクセスし、`Add gerber file`に発注したい基板のzipをぶちこむ。  
![Screenshot 2024-01-07 at 17 12 22](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/3b44aafb-64f2-4853-a7ff-4a1e95039d5f)  
規定値から変えるオプションは  
・PCB Qty：発注したい枚数  
・PCB Thickness：leftおよびrightは0.6mm、wingは0.8mm  
・Surface Finish：LeadFree HASL（RoHS規定のため）  
wingの場合はこのまま進み、配送方法を選択してカートに入れる。  
leftおよびrightの場合は、さらにPCBA（PCB Assenbly；部品の取り付けサーヴィス）にチェックを入れ、  
![Screenshot 2024-01-07 at 17 14 08](https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/25c45f71-b0fe-4a56-999b-0b0c1b8b26cd)  
・Confirm Parts Placement：Yes  
とする（なぜかダイオードの座標がずれる場合があるため）。  
Confirmを押して続くウィザードに沿ってそれぞれのCPLおよびBOMファイルをぶちこみ、  
<img width="1511" alt="Screenshot 2023-11-15 at 15 51 27" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/dccd976c-bd23-4e65-964b-2dbc74e567e4">  
<img width="1512" alt="Screenshot 2023-11-15 at 15 57 54" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/ac938035-5454-48d8-a1d3-0ef93fc692d2">  
部品が正しく配置されているのを確認する。  
<img width="1512" alt="Screenshot 2023-11-13 at 02 46 35" src="https://github.com/TakumaOnishi/Fish_Keyboard/assets/85474111/46be09d8-5b88-4974-8d3d-54896eff3bca">  
注文後しばらくするとParts Placementの確認がくるので承認する。  
それ以外の確認がメール（英語）で来ることもあるので適宜対応する。  
  
参考：[JLCPCBの発注方法を解説するよ！／自作キーボード温泉街の歩き方](https://salicylic-acid3.hatenablog.com/entry/jlcpcb-order)  
